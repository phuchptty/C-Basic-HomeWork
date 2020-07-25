#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
}

int ktSoChinhPhuong(int n) {
    int sqr = sqrt(n);
    if (sqr * sqr == n) {
        return 1;
    } else {
        return 0;
    }
}

void SCPMax(int a[], int n) {
    int max;

    for (int i = 0; i < n; i++) {
        if (ktSoChinhPhuong(a[i]) == 1) {
            max = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (max < a[i] && ktSoChinhPhuong(a[i]) == 1) {
            max = a[i];
        }
    }
    printf("%d", max);
}

void SCPMin(int a[], int n) {
    int min;

    for (int i = 0; i < n; i++) {
        if (ktSoChinhPhuong(a[i]) == 1) {
            min = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (min > a[i] && ktSoChinhPhuong(a[i]) == 1) {
            min = a[i];
        }
    }
    printf("%d \n", min);
}

int main() {
    int a[100];
    int n;

    printf("Nhap So Phan Tu Trong Mang: ");
    scanf("%d", &n);

    nhapmang(a, n);

    printf("Co cac so chinh phuong: ");
    for (int i = 0; i < n; i++) {
        if (ktSoChinhPhuong(a[i]) == 1) {
            printf("%d ", a[i]);
        }
    }

    printf("\nMax la: ");
    SCPMax(a, n);

    printf("\nMin la: ");
    SCPMin(a, n);

    return 0;
}