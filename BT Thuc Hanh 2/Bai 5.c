#include <conio.h>
#include <stdio.h>
#include <string.h>

char BoDauCachDauChuoi(char x[]) {
    int i = 0;

    while (x[i] == ' ' && i < strlen(x)) {
        i++;
    }
    strcpy(&x[0], &x[i]);
}

char BoDauCachGiuaChuoi(char x[]) {
    int i = 0;
    while (i <= strlen(x)) {
        if (x[i] == ' ' && x[i + 1] == ' ') {
            strcpy(&x[i], &x[i + 1]);
        } else {
            i++;
        }
    }
}

char BoDauCachCuoiChuoi(char x[]) {
    while (x[strlen(x)] == ' ') {
        x[strlen(x)] = '\0';
    }
}

char InHoaKyTuDau(char x[]) {

    if (x[0] != ' ') {
        x[0] = x[0] - 32;

        for (int i = 1; i < strlen(x); i++) {
            if (x[i] == ' ' && x[i + 1] != ' ' && x[i + 1] >= 'a' && x[i + 1] <= 'z') {
                x[i + 1] = x[i + 1] - 32;
            }
        }
    } else {
        for (int i = 0; i < strlen(x); i++) {
            if (x[i] == ' ' && x[i + 1] != ' ' && x[i + 1] >= 'a' && x[i + 1] <= 'z') {
                x[i + 1] = x[i + 1] - 32;
            }
        }
    }
}

int main() {
    char x[50];

    printf("Nhap 1 xau: ");
    gets(x);

    strlwr(x);

    BoDauCachDauChuoi(x);
    BoDauCachGiuaChuoi(x);
    BoDauCachCuoiChuoi(x);
    InHoaKyTuDau(x);

    printf("\nXau sau khi da chuan hoa : %s", x);
    getch();
}