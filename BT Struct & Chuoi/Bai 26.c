#include <stdio.h>
#include <string.h>

struct SinhVien {
    char hoten[50];
    char MaSV[10];
    int tuoi;
    char lop[10];
} SV[], temp;

void NhapSV(struct SinhVien SV[], int n) {
    for (int i = 1; i <= n; i++) {
        printf("\nNhap sinh vien thu %d: ", i);
        printf("\n Nhap ho ten: ");
        fflush(stdin);
        gets(SV[i].hoten);
        printf("\n Nhap Ma Sinh Vien: ");
        gets(SV[i].MaSV);
        printf("\n Nhap Lop:");
        gets(SV[i].lop);
        printf("\n Nhap Tuoi:");
        scanf("%d", &SV[i].tuoi);
        while (SV[i].tuoi < 0 || SV[i].tuoi > 150) {
            printf("\nNhap lai  tuoi cua sinh vien!\n");
            return NhapSV(SV, n);
        }
    }
}

void XuatSV(struct SinhVien SV[], int n) {
    for (int i = 1; i <= n; i++) {
        printf("\nHo va ten: ");
        puts(SV[i].hoten);
        printf("\n Tuoi : %d", SV[i].tuoi);
        printf("\nMa Sinh Vien : ");
        puts(SV[i].MaSV);
        printf("\nLop : ");
        puts(SV[i].lop);
        printf("==============================================");
    }
}

void SapXepSV(struct SinhVien SV[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++) {
            if (strcmp(SV[j].MaSV, SV[j + 1].MaSV) > 0) {
                temp = SV[j];
                SV[j] = SV[j + 1];
                SV[j + 1] = temp;
            }
        }
    printf("\n\n\t\t\t\Sau Khi Sap Xep Sinh Vien Theo Ma:\n\n");
    for (int i = 1; i <= n; i++) {
        printf("\nHo va ten: ");
        puts(SV[i].hoten);
        printf("\n Tuoi : %d", SV[i].tuoi);
        printf("\nMa Sinh Vien : ");
        puts(SV[i].MaSV);
        printf("\nLop : ");
        puts(SV[i].lop);
        printf("==============================================");
    }
}

void TimKiemTheoTen(struct SinhVien SV[], int n) {
    char x[50];
    printf("\n Nhap Ten Can Tim Kiem:");
    fflush(stdin);
    gets(x);
    printf("\nKet qua tim kiem:");
    for (int j = 1; j <= n; j++) {
        if (strcmp(SV[j].MaSV, x) == 0) {
            printf("\nHo va ten: ");
            puts(SV[j].hoten);
            printf("\n Tuoi : %d", SV[j].tuoi);
            printf("\nMa Sinh Vien : ");
            puts(SV[j].MaSV);
            printf("\nLop : ");
            puts(SV[j].lop);
            printf("==============================================");
        } else {
            printf("\nKhong co sinh vien nao ten nhu the!");
        }
        printf("Nhan phim bat ky de quay lai menu!");
        getch();
    }
}

int Hienthimenu() {
    printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    printf("\n+------+----[               MENU LUA CHON                        ]---+-------+");
    printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    printf("\n|----- + ----->          1. Nhap sinh vien                       <-----------|");
    printf("\n|----- + ----->          2. Hien thi sinh vien                   <-----------|");
    printf("\n|----- + ----->          3. Tim kiem sinh vien theo ten          <-----------|");
    printf("\n|----- + ----->          4. Sap xep danh sach sinh vien          <-----------|");
    printf("\n|----- + ----->          5. Tim kiem sinh vien theo ma sinh vien <-----------|");
    printf("\n|----- + ----->          6. Thoat                                <-----------|");
    printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    printf("\n\tBan chon muc nao : ");
    int chon;
    scanf("%d", &chon);
    return chon;
}

void main() {
    Hienthimenu();
    int n;
    struct SinhVien SV[50];
    printf("nhap so luong sinh vien: \t");
    scanf("%d", &n);
    while (n <= 0) {
        printf("Nhap lai so sinh vien!");
        return main();
    }
    NhapSV(SV, n);
    XuatSV(SV, n);
    SapXepSV(SV, n);
}
