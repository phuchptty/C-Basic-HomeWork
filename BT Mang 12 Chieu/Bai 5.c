#include <stdio.h>
#include <stdlib.h>

void NhapMaTran(int a[][100], int m, int n) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}

void XuatMaTran(int a[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

void tong(int a[][100], int m, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += a[0][i];
    }

    for (int i = 1; i < m; i++) {
        s += a[i][0];
    }
    
    for (int i = 1; i < n; i++) {
        s += a[m - 1][i];
    }
    
    for (int i = 1; i < m - 1; i++) {
        s += a[i][n - 1];
    }

    printf("Tong la: %d", s);
}

void main() {
    int a[100][100];
    int n, m;

    printf("nhap so hang: ");
    scanf("%d", &m);
    printf("nhap so cot: ");
    scanf("%d", &n);

    NhapMaTran(a,m,n);
    printf("Ma tran: \n");
    XuatMaTran(a,m,n);

    tong(a,m,n);
}