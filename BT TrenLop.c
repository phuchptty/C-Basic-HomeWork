#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct KhoiA {
    float toan;
    float ly;
    float hoa;
} KhoiA;

typedef struct KhoiC {
    float van;
    float su;
    float dia;
} KhoiC;

typedef struct ThiSinh {
    char hoTen[100];
    char kt[2];

    union {
        KhoiA a;
        KhoiC c;
    } khoiThi;

} ThiSinh;

void main() {
    int n;
    ThiSinh TS[100];

    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char kt[1];

        printf("Nhap Thi Sinh Thu %d: ", i + 1);

        printf("\n\tHo Ten: ");
        fflush(stdin);
        gets(TS[i].hoTen);

        printf("\tKhoi Thi: ");
        fflush(stdin);
        gets(TS[i].kt);

        if (strcmp(TS[i].kt, "A") == 0 || strcmp(TS[i].kt, "a") == 0) {
            printf("\tDiem Toan: ");
            scanf("%f", &TS[i].khoiThi.a.toan);

            printf("\tDiem Ly: ");
            scanf("%f", &TS[i].khoiThi.a.ly);

            printf("\tDiem Hoa: ");
            scanf("%f", &TS[i].khoiThi.a.hoa);
        } else if (strcmp(TS[i].kt, "C") == 0 || strcmp(TS[i].kt, "c") == 0) {

            printf("\tDiem Van: ");
            scanf("%f", &TS[i].khoiThi.c.van);

            printf("\tDiem Su: ");
            scanf("%f", &TS[i].khoiThi.c.su);

            printf("\tDiem Dia: ");
            scanf("%f", &TS[i].khoiThi.c.dia);
        }
    }

    printf("\n\n\t\tDANH SACH THI SINH THI KHOI A\n\n");

    for (int i = 0; i < n; i++) {
        if (strcmp(TS[i].kt, "A") == 0 || strcmp(TS[i].kt, "a") == 0){
            printf("Ho Ten: %s\n", TS[i].hoTen);
            printf("Khoi Thi: %s\n", TS[i].kt);
            printf("Diem Toan: %0.2f\n", TS[i].khoiThi.a.toan);
            printf("Diem Ly: %0.2f\n", TS[i].khoiThi.a.ly);
            printf("Diem Hoa: %0.2f\n", TS[i].khoiThi.a.hoa);
        }
    }

    printf("\n\n\t\tDANH SACH THI SINH THI KHOI C\n\n");

    for (int i = 0; i < n; i++) {
        if (strcmp(TS[i].kt, "C") == 0 || strcmp(TS[i].kt, "c") == 0){
            printf("Ho Ten: %s\n", TS[i].hoTen);
            printf("Khoi Thi: %s\n", TS[i].kt);
            printf("Diem Van: %0.2f\n", TS[i].khoiThi.c.van);
            printf("Diem Su: %0.2f\n", TS[i].khoiThi.c.su);
            printf("Diem Dia: %0.2f\n", TS[i].khoiThi.c.dia);
        }
    }
}