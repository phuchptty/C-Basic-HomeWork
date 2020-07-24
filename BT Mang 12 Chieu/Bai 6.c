#include <stdio.h>
#include <stdlib.h>

void NhapMaTran(int a[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void TongDCC(int a[][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                sum = sum + a[i][j];
        }
    }
    printf("Tong duong cheo chinh la: %d \n", sum);
}

void TongDCP(int a[][100], int n) {
    int i, j, sum = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == n - i - 1) {
                sum += a[i][j];
            }
        }
    }
    printf("Tong duong cheo phu la: %d", sum);
}

void XuatMaTran(int a[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

int main() {

    int a[100][100];
    int n;
    printf("nhap vao ma tran vuong cap n: ");
    scanf("%d", &n);

    while (n == 0) {
        printf("Nhap n Khac 0!!\n");
        return main();
    }

    NhapMaTran(a, n);
    XuatMaTran(a, n);
    TongDCC(a, n);
    TongDCP(a, n);
}