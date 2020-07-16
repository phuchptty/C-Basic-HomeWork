#include <math.h>
#include <stdio.h>

int main() {

    int h;

    printf("Nhap so tang: ");
    scanf("%d", &h);

    // Công thức cấp số cộng u(n) = u1 + (n-1)d

    if (h <= 1) {
        printf("*1");
    } else {

        int totalCharInLayer = 1 + (h - 1) * 2;

        for (int i = 1; i <= h; i++) {

            int sp = totalCharInLayer - i;
            int space = sp / 2;

            for (int a = 1; a <= sp; a++) {
                printf(" ");
            }

            int star = 1 + (i - 1) * 2;

            for (int c = 1; c <= star; c++) {
                printf("*");
            }

            for (int a = 1; a <= sp; a++) {
                printf(" ");
            }

            printf("\n");
        }
    }
}