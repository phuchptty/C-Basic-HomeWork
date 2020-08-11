#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void outputMatrix(int a[][100], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            printf("%d ", a[i][j]);

            if (j == 2) {
                printf("\n");
            }
        }
    }
}

void saveFile(int a[][100], int size) {
    FILE *f = fopen("matran1.txt", "w+");

    if (f == NULL) {
        printf("File Error");
        exit(1);
    }

    fprintf(f, "%d", size);

	fprintf(f, "\n");

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            fprintf(f, "%d", a[i][j]);

            if (j == size -1) {
                fprintf(f, "\n");
            }
        }
    }

    fclose(f);

	printf("\nSAVE FILE SUCCESSFULLY");
}

void sortMatrixDesc(int a[][100], int size) {

    for (int k = 0; k < size; k++) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = size - 1; j > i; j--) {
                if (a[k][j] > a[k][j - 1]) {

                    int temp = a[k][j];
                    a[k][j] = a[k][j - 1];
                    a[k][j - 1] = temp;
                }
            }
        }
    }

    outputMatrix(a, size);
    saveFile(a, size);
}

void main() {

    FILE *f = fopen("matran.txt", "a+");

    if (f == NULL) {
        printf("No File");
        exit(1);
    }

    int size;
    int matrix[100][100];

    fscanf(f, "%d", &size);
    printf("Matrix Size: %d \n\n", size);

    int i = 0;
    while (feof(f) == 0) {

        fscanf(f, "%d %d %d", &matrix[i][0], &matrix[i][1], &matrix[i][2]);
        printf("%d %d %d\n", matrix[i][0], matrix[i][1], matrix[i][2]);
        i++;
    }

    printf("\n ARRAY: \n");

    outputMatrix(matrix, size);

    printf("\n ARRAY AFTER SORTED \n");

    sortMatrixDesc(matrix, size);

    fclose(f);

    // getch();
}