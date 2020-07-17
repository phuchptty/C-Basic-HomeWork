#include <stdio.h>
#include <conio.h>

int main() {

    int n;

    printf("Nhap n = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int charInLayer = 1 + (i - 1) * 1;

        for (int a = 1; a <= charInLayer; a++) {
            printf("*");
        }

        printf("\n");
    }

    getch();
    return 0;
}