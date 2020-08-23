#include <conio.h>
#include <stdio.h>

main() {
    int a[10][10], b[10][10], matrantich[10][10], hang, cot, i, j, k;

    printf("Nhap so hang = ");
    scanf("%d", &hang);
    printf("\nNhap so cot = ");
    scanf("%d", &cot);
    printf("\nNhap cac phan tu cua ma tran thu nhat\n");
    for (i = 0; i < hang; i++) {
        for (j = 0; j < cot; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nNhap cac phan tu cua ma tran thu hai\n");
    for (i = 0; i < hang; i++) {
        for (j = 0; j < cot; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nTich cua hai ma tran la:\n");
    for (i = 0; i < hang; i++) {
        for (j = 0; j < cot; j++) {
            matrantich[i][j] = 0;
            for (k = 0; k < cot; k++) {
                matrantich[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // hien thi ket qua
    for (i = 0; i < hang; i++) {
        for (j = 0; j < cot; j++) {
            printf("%d\t", matrantich[i][j]);
        }
        printf("\n");
    }

}