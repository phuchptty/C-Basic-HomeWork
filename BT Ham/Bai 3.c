#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int ktSoNguyenTo(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void main() {

    int n;
    printf("Nhap 1 so: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("So phai lon hon 2");
    } else {
        printf("So nguyen to cua %d: ", n);

        for (int i = 2; i <= n; i++) {
            if (ktSoNguyenTo(i) == 1) {
                printf("%d ", i);
            }
        }
    }
}