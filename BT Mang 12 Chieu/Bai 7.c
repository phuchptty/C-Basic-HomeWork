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
void TongHangVaCot(int a[][100], int m, int n, int k) {
    int TongHang = 0, TongCot = 0;
    for (int i = 0; i < m; i++) {
        TongHang += a[i][k];
    }
    for (int j = 0; j < n; j++) {
        TongCot += a[k][j];
    }
    printf("Tong Hang Va Cot %d la:\t %d", k, TongHang + TongCot);
}

int main() {

    int a[100][100];
    int n, m, k;
    printf("nhap vao ma tran cap m*n \n");
    printf("nhap so hang: \t");
    scanf("%d", &m);
    printf("nhap so cot:\t");
    scanf("%d", &n);

    printf("Nhap Hang va cot can tinh:\t");
    scanf("%d", &k);
    
    NhapMaTran(a, m, n);
    XuatMaTran(a, m, n);
    TongHangVaCot(a,m,n,k);

    return 0;
}
