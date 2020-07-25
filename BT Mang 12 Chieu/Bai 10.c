#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
}

int ktDoiXung(int a[], int n) {

    if (n <= 1) return 0;

    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            return 0;
        }
    }

    return 1;
}

void daoNguoc(int a[], int n) {
    printf("Chuoi dao nguoc: ");

    for (int i = 0; i < n; i++){
        printf("%d", a[n- 1- i]);
    }

    printf("\n");
}

void sapXepTangDan(int a[], int n) {

    int tg;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }

    printf("Sap xep tang dan: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {

    int a[100];
    int n;

    printf("Nhap So Phan Tu Trong Mang: ");
    scanf("%d", &n);

    nhapmang(a, n);

    if (ktDoiXung(a,n) == 1) {
        printf("Chuoi doi xung \n");
    }

    if (ktDoiXung(a,n) == 0) {
        printf("Chuoi khong doi xung \n");
        daoNguoc(a,n);
    }

    sapXepTangDan(a,n);

    return 0;
}
