#include <stdio.h>
#include <stdlib.h>

void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d | ", a[i]);
    }
}

void main() {
    int a[100];
    int n;

    printf("Nhap So Phan Tu Trong Mang: ");
    scanf("%d", &n);

    nhapmang(a, n);

    printf("Mang truoc khi sap xep: ");
    xuatMang(a, n);
    printf("\n");

    int pos = 0;
    int b[100];

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            b[pos] = a[i];
            pos++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            b[pos] = a[i];
            pos++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            b[pos] = a[i];
            pos++;
        }
    }

    printf("Mang sau khi sap xep: ");
    xuatMang(b, n);
}