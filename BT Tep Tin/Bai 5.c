#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main() {

    FILE *f;

    int a[10][10], row, col;

    f = fopen("Bai5TT.c", "wt");

    printf("Nhap Cot: ");
    scanf("%d", &col);

    printf("Nhap Hang: ");
    scanf("%d", &row);

    fprintf(f, "%d %d", row, col);
    fprintf(f, "\nMA TRAN A\n");

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("Nhap a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
            fprintf(f, "%d ", a[i][j]);
        }

        fprintf(f, "\n");
        printf("\n");
    }

    fclose(f);
}