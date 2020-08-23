#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

void menu() {

    printf("\n\n");
    printf("\t<!-----------------------------------------------------!>\n");
    printf("\t<!---   1. Doc Tep MA_TRAN.C                        ---!>\n");
    printf("\t<!---   2. Ghi ma tran C bo sung vao cuoi tep tren  ---!>\n");
    printf("\t<!---   3. Ket Thuc                                 ---!>\n");
    printf("\t<!-----------------------------------------------------!>\n");
}

void docMaTran(FILE *f){

    int n,m;
    int a[10][10], b[10][10];
    char str[60];

    //Dong dau n hang m cot
    fscanf(f, "%d %d", &n, &m);

    //Bo qua dong matran a
    fgets(str, 60, f);

    for (int i = 0; i < n; i++){
        fgets(str,60,f);

        for (int j = 0; j < m; j++){
            fscanf(f, "%d", &a[i][j]);
        }
    }

    //Bo qua dong ma tran B

    fgets(str, 60, f);

    for (int i = 0; i < n; i++){
        fgets(str,60,f);

        for (int j = 0; j < m; j++){
            fscanf(f, "%d", &b[i][j]);
        }
    }

    hienThiMaTran(a,b,n,m);

    tinhTong(a,b,n,m);
}

void hienThiMaTran(int a[][10],int b[][10],int n,int m){

    printf("\n\tMA TRAN A\n");
    for (int i = 0; i <n; i++){
        printf("\t");

        for (int j = 0; j < m; j++){
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    printf("\n\tMA TRAN B\n");
    for (int i = 0; i <n; i++){
        printf("\t");

        for (int j = 0; j < m; j++){
            printf("%d ", b[i][j]);
        }

        printf("\n");
    }
}

void tinhTong(int a[][10],int b[][10],int n,int m ){
    int c[10][10];

    for (int i = 0; i <n; i++){
        for (int j = 0; j < m; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\n\tMA TRAN C\n");
    for (int i = 0; i <n; i++){
        printf("\t");

        for (int j = 0; j < m; j++){
            printf("%d ", c[i][j]);
        }

        printf("\n");
    }
}

void main() {

    // n hang m cot

    FILE *f = fopen("MA_TRAN.txt", "a+");

    docMaTran(f);
}
