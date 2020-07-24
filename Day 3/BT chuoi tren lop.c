#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char hoten[30];
    int namsinh;
    float dtb;
} sinhvien;

void nhap1sv(sinhvien *sv) {
    printf("\nNhap hoten: ");
    fflush(stdin);
    gets(sv->hoten);
    printf("Nhap namsinh: ");
    scanf("%d", &sv->namsinh);
    printf("Nhap dtb: ");
    scanf("%f", &sv->dtb);
}

void nhapsv(sinhvien sv[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\nNhap sinh vien thu %d: ", i + 1);
        nhap1sv(&sv[i]);
    }
}

void svduoituoi(sinhvien sv[], int n) {
    printf("\n Sinh vien duoi 20 tuoi: \n");
    printf("%20s|%7s|%4s| \n", "Hoten", "Namsinh", "dtb");

    for (int i = 0; i < n; i++) {
        if (2015 - sv[i].namsinh < 20) {
            printf("%20s|%7d|%4.1f| \n", sv[i].hoten, sv[i].namsinh, sv[i].dtb);
        }
    }
}

void sapxep(sinhvien sv[], int n) {

    sinhvien tmp;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (sv[i].dtb < sv[j].dtb) {
                tmp = sv[i];
                sv[i] = sv[j];
                sv[j] = tmp;
            }
        }
    }
}

void xuat(sinhvien sv[], int n) {
    printf("%20s|%7s|%4s| \n", "Hoten", "Namsinh", "dtb");
    for (int i = 0; i < n; i++) {
        printf("%20s|%7d|%4.1f| \n", sv[i].hoten, sv[i].namsinh, sv[i].dtb);
    }
}

int main() {
    int n;
    sinhvien sv[50];
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    nhapsv(sv, n);

    svduoituoi(sv, n);

    sapxep(sv, n);
    printf("\n Sau Xap Xep \n");
    xuat(sv, n);
    return 0;
}
