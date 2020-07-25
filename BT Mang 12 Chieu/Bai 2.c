#include <stdio.h>
#include <stdlib.h>

void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

void timMax(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    printf("Max la %d \n", max);
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

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void tbcSoAm(int a[], int n) {
    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            count++;
            sum += a[i];
        }
    }

    printf("Trung binh cong so am: %d/%d ~ %d", sum, count, sum/count);
}

int main() {

    int a[100];
    int n;

    printf("Nhap So Phan Tu Trong Mang: ");
    scanf("%d", &n);

    nhapMang(a, n);

    timMax(a, n);

    printf("\n Truoc khi sap xep: ");
    xuatMang(a, n);

    printf("\n Sau khi sap xep: ");
    sapXepTangDan(a, n);

    tbcSoAm(a, n);

    return 0;
}