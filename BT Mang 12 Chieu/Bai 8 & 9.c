#include <conio.h>
#include <stdio.h>
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

void TangTheoCot(int a[][100], int m, int n) {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < m - 1; i++) {
            for (int j = m - 1; j > i; j--) {
                if (a[j][k] < a[j - 1][k]) {
                    int temp = a[j][k];
                    a[j][k] = a[j - 1][k];
                    a[j - 1][k] = temp;
                }
            }
        }
    }
}

void TangTheoHang(int b[][100], int m, int n) {
    for (int k = 0; k < m; k++) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = n - 1; j > i; j--) {
                if (b[k][j] < b[k][j - 1]) {
                    int temp = b[k][j];
                    b[k][j] = b[k][j - 1];
                    b[k][j - 1] = temp;
                }
            }
        }
    }

	TangTheoCot(b,m,n);
}

int main() {

    int a[100][100];
    int n, m, k;
    printf("nhap vao ma tran cap m*n \n");
    printf("nhap so hang: \t");
    scanf("%d", &m);
    printf("nhap so cot:\t");
    scanf("%d", &n);
    while (m == 0 || n == 0) {
        printf("Nhap m,n Khac 0!!\n");
        return main();
    }

    NhapMaTran(a, m, n);
    XuatMaTran(a, m, n);

    TangTheoHang(a, m, n);

    printf("Ma tran sau khi sap xep tang theo hang:\n");
    XuatMaTran(a, m, n);

    printf("Ma tran sau khi sap xep tang theo cot:\n");
    XuatMaTran(a, m, n);
    return 0;
}
