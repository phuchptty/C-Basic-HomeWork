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

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            int oVal = a[pos];
            a[pos] = a[i];
            a[i] = oVal;
            pos++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            int oVal = a[pos];
            a[pos] = a[i];
            a[i] = oVal;
            pos++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            int oVal = a[pos];
            a[pos] = a[i];
            a[i] = oVal;
            pos++;
        }
    }

    printf("Mang sau khi sap xep: ");
    xuatMang(a, n);
}