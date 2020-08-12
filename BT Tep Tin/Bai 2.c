#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct SinhVien {
    char hoTen[100];
    float dtb;
} SinhVien;

void outputData(SinhVien SV[], int size, FILE *f) {

    for (int i = 0; i < size; i++) {
        fprintf(f, "%s - %0.2f", SV[i].hoTen, SV[i].dtb);

        if ( i != size - 1 ){
            fprintf(f, "\n");
        }
        
    }
}

void inputData(SinhVien SV[], FILE *f) {

    char ch;
    int i = 0;

    do {
        printf("\nNhap Ho Ten: ");
        gets(SV[i].hoTen);

        printf("Nhap Diem Trung Binh: ");
        scanf("%f", &SV[i].dtb);
        i++;

        printf("Ban co muon nhap tiep ? y/n: ");
        fflush(stdin);
        ch = getch();

    } while ((int *)ch != 110);

    outputData(SV, i, f);
}

void main() {

    FILE *f = fopen("bai2.txt", "a+");

    if (f == NULL) {
        printf("File Error");
        exit(1);
    }

    SinhVien SV[100];

    inputData(SV, f);

    fclose(f);
}