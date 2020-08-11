#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Girl {
    float diemHat;
    float diemMua;
} Girl;

typedef struct Boy {
    float diemTD;
    float diemTin;
} Boy;

typedef union gioiTinh {
    char gioiTinh[100];
    Girl girl;
    Boy boy;
} gioiTinh;

typedef union HocSinh {
    char hoTen[100];
    char que[100];
    gioiTinh gioiTinh;
} HocSinh;

void xuatDuLieu(HocSinh HS[]) {
    // int length = (int *)( sizeof(HS) / sizeof(HS[0]) );

    for (int i = 0; i < 10; i++) {

        printf("%c", HS[i].gioiTinh.gioiTinh);

        if (strcmp(HS[i].gioiTinh.gioiTinh, "nam") == 0) {
            
            printf("%c %c %c %f %f", HS[i].hoTen, HS[i].que, HS[i].gioiTinh.gioiTinh, HS[i].gioiTinh.boy.diemTD, HS[i].gioiTinh.boy.diemTin);
        }
    }
}

void nhapDuLieu(HocSinh HS[]) {
    char choose;

    printf("Nhap du lieu: \n");

    for (int i = 0;; i++) {
        printf("\tHo Va Ten: ");
        fflush(stdin);
        gets(HS[i].hoTen);

        printf("\n\tNhap Que: ");
        fflush(stdin);
        gets(HS[i].que);

        printf("\tGioi Tinh: ");
        fflush(stdin);
        gets(HS[i].gioiTinh.gioiTinh);

        if (strcmp(HS[i].gioiTinh.gioiTinh, "nam") == 0) {

            printf("\tNhap Diem The Duc: ");
            scanf(" &f", &HS[i].gioiTinh.boy.diemTD);

            printf("\tNhap Diem Tin: ");
            scanf("&f", &HS[i].gioiTinh.boy.diemTin);

        } else if (strcmp(HS[i].gioiTinh.gioiTinh, "nu") == 0) {
            printf("\tNhap Hat: ");
            scanf("&f", &HS[i].gioiTinh.girl.diemHat);

            printf("\tNhap Diem Mua: ");
            scanf("&f", &HS[i].gioiTinh.girl.diemMua);
        } else {
            printf("\nGioi Tinh Phai La Nam Hoac Nu");
            break;
        }

        printf("\n\nBan co muon them ? y/n: ");
        fflush(stdin);
        choose = getchar();

        if ((int *)choose == 110) {
            break;
        }
    }

    for (int i = 0; i < 10; i++) {

        if (strcmp(HS[i].gioiTinh.gioiTinh, "nam") == 0) {
            
            printf("%c ", HS[i].hoTen);
        }
    }
}

void main() {
    HocSinh HS[100];

    nhapDuLieu(HS);

    getch();
}