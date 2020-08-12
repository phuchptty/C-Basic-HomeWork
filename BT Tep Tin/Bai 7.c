#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct SinhVien {
    char hoTen[100];
    char gioiTinh[5];
    float dtb;
} SinhVien;

void main() {
    FILE *f = fopen("Dssv.txt", "a+");

    SinhVien SV[100];
    int i = 0;

    while (fscanf(f, "%s[^ ,\n\t], %s[^ ,\n\t], %f", &SV[i].hoTen, &SV[i].gioiTinh, &SV[i].dtb) != EOF) {
        printf("%s - %s - %f \n", SV[i].hoTen, SV[i].gioiTinh, SV[i].dtb);
    }

    fclose(f);
}