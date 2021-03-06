#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SinhVien {
    char maSV[100];
    char hoTen[100];
    char gioiTinh[100];
    float dtb;
} SinhVien;

void NhapSV(struct SinhVien SV[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap sinh vien thu %d: \n", i + 1);

        printf("Nhap Ma Sinh Vien: ");
        fflush(stdin);
        gets(SV[i].maSV);

        printf("Nhap ho ten: ");
        fflush(stdin);
        gets(SV[i].hoTen);

        printf("Nhap Gioi Tinh: ");
        fflush(stdin);
        gets(SV[i].gioiTinh);

        printf("Nhap Diem Trung Binh:");
        scanf("%f", &SV[i].dtb);
    }
}

void XuatSV(struct SinhVien SV[], int n) {

    for (int i = 0; i < n; i++) {
        printf("Sinh Vien %d \n", i + 1);
        printf("\tMa SV: ");
        puts(SV[i].maSV);
        printf("\tHo Ten: ");
        puts(SV[i].hoTen);
        printf("\tGioi Tinh: ");
        puts(SV[i].gioiTinh);
        printf("\tDiem TB: ");
        printf("%0.2f", SV[i].dtb);
        printf("\n");
    }
}

void SapXepSV(struct SinhVien SV[], int n) {

    struct SinhVien temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (SV[i].dtb > SV[j].dtb) {
                temp = SV[i];
                SV[i] = SV[j];
                SV[j] = temp;
            }
        }
    }

    printf("\n\n\tSau Khi Sap Xep Sinh Vien Theo Diem:\n\n");

    for (int i = 0; i < n; i++) {
        printf("Sinh Vien %d \n", i + 1);
        printf("\tMa SV: ");
        puts(SV[i].maSV);
        printf("\tHo Ten: ");
        puts(SV[i].hoTen);
        printf("\tGioi Tinh: ");
        puts(SV[i].gioiTinh);
        printf("\tDiem TB: ");
        printf("%0.2f", SV[i].dtb);
        printf("\n");
    }
}

void LietKeDTBP5(struct SinhVien SV[], int n) {

    printf("\n\n\t Danh Sach SV Co DTB >= 5: \n");

    for (int i = 0; i < n; i++) {
        if (SV[i].dtb >= 5) {
            printf("Sinh Vien %d \n", i + 1);
            printf("\tMa SV: ");
            puts(SV[i].maSV);
            printf("\tHo Ten: ");
            puts(SV[i].hoTen);
            printf("\tGioi Tinh: ");
            puts(SV[i].gioiTinh);
            printf("\tDiem TB: ");
            printf("%0.2f", SV[i].dtb);
            printf("\n");
        }
    }
}

void DemSVNam(struct SinhVien SV[], int n) {

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(SV[i].gioiTinh, "nam") == 0) {
            count++;
        }
    }

    printf("\n\nCo So SV Nam: %d", count);
}

void TimKiemTheoMaSV(struct SinhVien SV[], int n) {
    char x[100];
    struct SinhVien kq;
    int count = 0;

    printf("Nhap Ma SV Can Tim Kiem:");
    fflush(stdin);
    gets(x);

    printf("Ket qua tim kiem: \n");

    for (int i = 0; i < n; i++) {
        if (strcmp(SV[i].maSV, x) == 0) {
            count++;
            kq = SV[i];
            break;
        } else {
            count = 0;
        }
    }

    if (count == 0) {

        printf("Khong co ket qua !");
    } else {
        printf("\tMa SV: ");
        puts(kq.maSV);
        printf("\tHo Ten: ");
        puts(kq.hoTen);
        printf("\tGioi Tinh: ");
        puts(kq.gioiTinh);
        printf("\tDiem TB: ");
        printf("%0.2f", kq.dtb);
        printf("\n");
    }
}

void TimKiemTheoTen(struct SinhVien SV[], int n) {
    char x[100];
    struct SinhVien kq;
    int count = 0;

    printf("Nhap Ten SV Can Tim Kiem:");
    fflush(stdin);
    gets(x);

    printf("Ket qua tim kiem: \n");

    for (int i = 0; i < n; i++) {
        if (strcmp(SV[i].hoTen, x) == 0) {
            printf("Sinh Vien %d \n", i + 1);
            printf("\tMa SV: ");
            puts(SV[i].maSV);
            printf("\tHo Ten: ");
            puts(SV[i].hoTen);
            printf("\tGioi Tinh: ");
            puts(SV[i].gioiTinh);
            printf("\tDiem TB: ");
            printf("%0.2f", SV[i].dtb);
            printf("\n");
        }
    }
}

void SapXepTenSV(struct SinhVien SV[], int n) {

    struct SinhVien temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(SV[i].hoTen, SV[j].hoTen) > 0) {
                temp = SV[i];
                SV[i] = SV[j];
                SV[j] = temp;
            }
        }
    }

    printf("\n\n\tSau Khi Sap Xep Sinh Vien Theo Ho Ten:\n\n");

    for (int i = 0; i < n; i++) {
        printf("Sinh Vien %d \n", i + 1);
        printf("\tMa SV: ");
        puts(SV[i].maSV);
        printf("\tHo Ten: ");
        puts(SV[i].hoTen);
        printf("\tGioi Tinh: ");
        puts(SV[i].gioiTinh);
        printf("\tDiem TB: ");
        printf("%0.2f", SV[i].dtb);
        printf("\n");
    }
}

void main() {

    int n;
    struct SinhVien SV[100];

    printf("Nhap n: ");
    scanf("%d", &n);

    NhapSV(SV, n);
    XuatSV(SV, n);

    // SapXepSV(SV, n);
    // LietKeDTBP5(SV, n);
    // DemSVNam(SV, n);
    // TimKiemTheoMaSV(SV, n);
    // TimKiemTheoTen(SV, n);

    SapXepTenSV(SV, n);

    getch();
}