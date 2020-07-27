#include <stdio.h>
#include <string.h>

int nhapChuoi(char a[]) {
    printf("Nhap chuoi: ");
    gets(a);
    return strlen(a);
}

int xoa1PhanTu(char a[], int i, int n) {
    for (int j = i; j < n - 1; j++) {
        a[j] = a[j + 1];
    }
    n--;
    return n;
}

int xoaKhoangTrang(char a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] == 32) {
            xoa1PhanTu(a, i, n);
            n--;
            i--;
        }
    }
    return n;
}

void xuatChuoi(char a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", a[i]);
    }
}

char InHoaKyTuDau(char s[]) {
    int i;
    if (s[0] != ' ') {
        s[0] = s[0] - 32;
        for (i = 1; i < strlen(s); i++) {
            if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z') {
                s[i + 1] = s[i + 1] - 32;
            }
        }
    } else {
        for (i = 0; i < strlen(s); i++) {
            if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z') {
                s[i + 1] = s[i + 1] - 32;
            }
        }
    }
    printf("%s\n", s);
}

int main() {
    char hoTen[50];
    int n = nhapChuoi(hoTen);
    InHoaKyTuDau(hoTen);
    n = xoaKhoangTrang(hoTen, n);
    xuatChuoi(hoTen, n);
}