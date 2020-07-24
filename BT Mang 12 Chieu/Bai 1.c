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
        printf("%d | ", i, a[i]);
    }
}

void demPhanTuAm(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            count++;
        }
    }

    printf("Co %d phan tu am", count);
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

void timMin(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    printf("Min la %d \n", min);
}

void soAmMax(int a[], int n) {
    int max = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] < 0) {
            max = a[i];
        }
    }

    for (int i = 1; i < n; i++) {
        if (a[i] < 0 && a[i] > max) {
            max = a[i];
        }
    }
    printf("So Am Max la %d \n", max);
}

void soDuongMin(int a[], int n) {
    int min = 0;

	for (int i = 1; i < n; i++) {
        if (a[i] > 0) {
            min = a[i];
        }
    }

    for (int i = 1; i < n; i++) {
        if (a[i] > 0 && a[i] < min)
            min = a[i];
    }
    printf("So Duong Min la %d \n", min);
}

// void sapXepTangDan(int a[], int n) {
//     int temp;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++)
//             if (a[j] > a[i])
//                 temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//     }
//     printf("Mang sap xep tang dan la:\n");
// }

int main() {

    int a[100];
    int n;

    printf("Nhap So Phan Tu Trong Mang: ");
    scanf("%d", &n);

    nhapmang(a, n);
    // xuatMang(a, n);

    // demPhanTuAm(a, n);

    // timMax(a, n);
    // timMin(a, n);

    soAmMax(a, n);
	soDuongMin(a,n);

    return 0;
}
