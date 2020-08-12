#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *f = fopen("Bai5TT.c", "a+b");

    if (f == NULL) {
        printf("File Error");
        exit(1);
    }

    int col, row;
    char str[60];
    int matrix[10][10];

    fscanf(f, "%d %d", &row, &col);

    printf("Cot: %d\n", col);
    printf("Hang: %d\n", row);

    fgets(str, 60, f);

    for (int i = 0; i < col; i++) {
        fgets(str, 60, f);

        for (int j = 0; j < row; j++) {
            fscanf(f, "%d", &matrix[i][j]);
        }
    }

    printf("\n\t<!---MATRIX---!>\n\n");

    for (int i = 0; i < col; i++) {
        printf("\t");

        for (int j = 0; j < row; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    /* Chuyen Vi */

    int trMatrix[10][10];

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            trMatrix[j][i] = matrix[i][j];
        }
    }

    printf("\n\t<!---MATRIX TRANSPOSED---!>\n\n");

    for (int i = 0; i < row; i++) {
        printf("\t");

        for (int j = 0; j < col; j++) {
            printf("%d ", trMatrix[i][j]);
        }

        printf("\n");
    }

    /* SAVE TO FILE */

    fprintf(f,"\n");
    fprintf(f,"Ma Tran Chuyen Vi B\n");

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            fprintf(f, "%d ", trMatrix[i][j]);
        }

        fprintf(f,"\n");
    }

    printf("\n\tSAVE FILE SUCCESSFULLY");

    fclose(f);
}