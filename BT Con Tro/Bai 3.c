#include <stdio.h>
#include <stdlib.h>

void nhapMang(int *a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap a[%d][%d] = ", i, j);
            scanf("%d", (a + i * n + j));
        }
    }
}

void xuatMang(int *a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d \t", *(a + n * i + j));
        }

        printf("\n");
    }
}

void chuyenVi(int *a, int n) {
    int tg;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            tg = *(a + n * i + j);
            *(a + n * i + j) = *(a + n * j + i);
            *(a + n * j + i) = tg;
        }
    }
}

int main() {
    int n;
    int *a;

    printf("Nhap n = ");
    scanf("%d", &n);

    a = (int *)malloc(n * n * sizeof(int));

    nhapMang(a, n);
    printf("\nMa tran truoc chuyen vi: \n");
    xuatMang(a, n);

    chuyenVi(a, n);
    printf("Ma tran sau chuyen vi: \n");
    xuatMang(a, n);

    free(a);
    return 0;
}