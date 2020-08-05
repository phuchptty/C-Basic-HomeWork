#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void NhapXau(char A[50]) {
    printf("Nhap vao chuoi ky tu:\t");
    gets(A);
    printf("\nChuoi da nhap:\t");
    puts(A);
}
void Dem(char A[50]) {
    int DemChu, DemSo, DemKhac;
    DemChu = 0;
    DemSo = 0;
    DemKhac = 0;
    for (int i = 0; i < strlen(A); i++) {
        if (((A[i] >= 'A') && (A[i] <= 'Z')) || ((A[i] >= 'a') && (A[i] <= 'z'))) {
            DemChu++;
        } else {
            if ((A[i] >= '0') && (A[i] <= '9')) {
                DemSo++;
            } else {
                DemKhac++;
            }
        }
    }

    printf("Co %d ky tu chu cai\n", DemChu);
    printf("Co %d ky tu so\n", DemSo);
    printf("Co %d ky tu khac\n", DemKhac);
}
void main() {
    char A[50];
    NhapXau(A);
    Dem(A);
}