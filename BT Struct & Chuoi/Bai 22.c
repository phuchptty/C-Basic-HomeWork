#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int maSach;
    char tenSach[100];
    char tacGia[100];
    int namXB;
} sach;

void nhapSach(sach s[], int n) {
    for (int i = 1; i <= n; i++) {
        printf("Nhap sach thu %d: \n", i);

        printf("Nhap ma sach: ");
        scanf("%d", &s[i].maSach);

        fflush(stdin);

        printf("Nhap Ten Sach: ");
        gets(s[i].tenSach);

        printf("Nhap Tac Gia:");
        gets(s[i].tacGia);

        printf("Nhap Nam Xuat Ban:");
        scanf("%d", &s[i].namXB);

        printf("\n");
    }
}

void sapXep(sach s[], int n) {
    sach t;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (strcmp(s[j].tenSach, s[j + 1].tenSach) > 0) {
                t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("Sach %d", i);
        printf("\t Ma Sach: %d \n", s[i].maSach);
        printf("\t Ten Sach: %s \n", s[i].tenSach);
        printf("\t Tac Gia: %s \n", s[i].tacGia);
        printf("\t Nam Xuat Ban: %d \n", s[i].namXB);
        printf("\n");
    }
}

int main() {
    int n;
    sach s[100];

    printf("Nhap so luong sach: ");
    scanf("%d", &n);

    nhapSach(s, n);
    sapXep(s, n);
}
