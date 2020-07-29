#include <stdio.h>
#include <stdlib.h>

void nhapMang(int *a, int n) {
    printf("(●'◡'●) NHAP MANG (●'◡'●) \n");

    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d] = ", i);
        scanf("%d", (a + i));
    }
}

void xuatMang(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d \t", *(a + i));
    }
}

void timMax(int *a, int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (*(a + i) % 2 == 0) {
            count++;
        }
    }

    if (count == 0) {
        printf("\nKhong co so chan");
    } else {
        int max = *(a + 0);
        for (int i = 1; i < n + 1; i++) {
            if (*(a + i) > max) {
                max = *(a + i);
            }
        }

        printf("\nSo Chan Max: %d", max);
    }
}

void timMin(int *a, int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (*(a + i) % 2 != 0) {
            count++;
        }
    }

    if (count == 0) {
        printf("\nKhong co so le");
    } else {
        int min = *(a + 0);
        for (int i = 1; i < n + 1; i++) {
            if (*(a + i) < min) {
                min = *(a + i);
            }
        }

        printf("\nSo Le Min: %d", min);
    }
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int *a;

    a = (int *)malloc(n * sizeof(int));

    nhapMang(a, n);

    printf("\n(┬┬﹏┬┬) XUAT MANG (┬┬﹏┬┬)\n");
    xuatMang(a, n);

    timMax(a, n);
    timMin(a, n);
}