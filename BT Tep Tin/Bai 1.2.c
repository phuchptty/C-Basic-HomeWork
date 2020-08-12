#include <stdio.h>
#include <stdlib.h>

void saveFile(int a[][10], int row, int col) {
    FILE *f = fopen("matran1.txt", "w+");

    if (f == NULL) {
        printf("File Error");
        exit(1);
    }

    fprintf(f, "%d", col);
    fprintf(f, "\n");
    fprintf(f, "%d", row);
    fprintf(f, "\n");

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            fprintf(f, "%d ", a[i][j]);
        }

        fprintf(f, "\n");
    }

    fclose(f);

    printf("\nSAVE FILE SUCCESSFULLY");
}

void sortMatrixDesc(int matrix[][10], int row, int col) {

    int tmp;

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            for (int x = 0; x < col; x++) {
                for (int y = 0; y < row; y++) {
                    if (matrix[i][j] > matrix[x][y]) {
                        tmp = matrix[i][j];
                        matrix[i][j] = matrix[x][y];
                        matrix[x][y] = tmp;
                    }
                }
            }
        }
    }

    printf("\n\t<!---MATRIX SORTED DESC---!>\n\n");

    for (int i = 0; i < col; i++) {
        printf("\t");

        for (int j = 0; j < row; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    saveFile(matrix, row, col);
}

void main() {

    FILE *f = fopen("matran.txt", "a+");

    if (f == NULL) {
        printf("File Error");
        exit(1);
    }

    int col, row;

    fscanf(f, "%d", &col);
    fscanf(f, "%d", &row);

    printf("Cot: %d\n", col);
    printf("Hang: %d\n", row);

    int matrix[10][10];

    printf("\n\t<!---MATRIX---!>\n\n");

    for (int i = 0; i < col; i++) {
        fscanf(f, "%d %d %d %d", &matrix[i][0], &matrix[i][1], &matrix[i][2], &matrix[i][3]);
        printf("\t%d %d %d %d \n", matrix[i][0], matrix[i][1], matrix[i][2], matrix[i][3]);
    }

    sortMatrixDesc(matrix, row, col);
}