#include <stdio.h>
#include <string.h>

typedef struct sinhVien {
    char hoten[20];
    int namsinh;
    float diemtb;
} SV;

int main() {

    SV sv[100];
    int i, n, j;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        fflush(stdin);
        printf("nhap ten: ");
        gets(sv[i].hoten);
        fflush(stdin);
        printf("nhap nam sinh: ");
        scanf("%d", &sv[i].namsinh);
        fflush(stdin);
        printf("Nhap dtb:");
        scanf("%f", &sv[i].diemtb);
    }

    printf("\n%-20s|%-20s|%-20s\n", "Ho ten", "Nam sinh", "DTB");

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (sv[i].diemtb < sv[j].diemtb) {
                SV temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }

    printf("dtb giam dan\n");

    for (i = 0; i < n; i++) {
        printf("%-21s%-21d%-20f\n", sv[i].hoten, sv[i].namsinh, sv[i].diemtb);
    }
}