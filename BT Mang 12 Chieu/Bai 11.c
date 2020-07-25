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

void TanCungBang6(int a[][100], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            if (a[i][j] % 10 == 6)
                sum += a[i][j];
        }
    printf("Tong cac so co 6 chu so la:\t%d\n", sum);
}

void PhanTuLonNhat(int a[][100], int m, int n) {
    int temp = a[0][0];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            if (temp < a[i][j])
                temp = a[i][j];
        }
    printf("So lon nhat trong mang la:\t %d\n", temp);
}

void SoChanChiaHetCho3(int a[][100], int m, int n) {
    int dem = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            if (a[i][j] % 6 == 0)
                dem++;
        }
    printf("Co %d cac so chan chia het cho 3\n", dem);
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
    TanCungBang6(a, m, n);
    PhanTuLonNhat(a, m, n);
    SoChanChiaHetCho3(a, m, n);
    return 0;
}
