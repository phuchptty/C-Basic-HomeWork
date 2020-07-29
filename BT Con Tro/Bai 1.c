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

void sapXepSoLe(int *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(a + i) > *(a + j)) {
                int tg;
                tg = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = tg;
            }
        }
    }

    xuatMang(a, n);
}

void locSoLe(int *a, int n, int *b, int countSoLe) {
    for (int i = 0; i < n; i++) {
        if (*(a + i) % 2 != 0) {
            *(b + countSoLe) = *(a + i);
            countSoLe++;
        }
    }
    sapXepSoLe(b, countSoLe);
}

void sapXepSoChan(int *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(a + i) < *(a + j)) {
                int tg;
                tg = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = tg;
            }
        }
    }

    xuatMang(a, n);
}

void locSoChan(int *a, int n, int *c, int countSoChan) {
    for (int i = 0; i < n; i++) {
        if (*(a + i) % 2 == 0) {
            *(c + countSoChan) = *(a + i);
            countSoChan++;
        }
    }
    sapXepSoChan(c, countSoChan);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int *a;

    a = (int *)malloc(n * sizeof(int));

    nhapMang(a, n);

    printf("\nMang Truoc Khi Sap Xep: \n");
    xuatMang(a, n);

    printf("\nSau Khi Sap Xep:\n");

    int *b = (int *)malloc(n * sizeof(int));
    int *c = (int *)malloc(n * sizeof(int));
    int countSoChan = 0;
    int countSoLe = 0;

    locSoLe(a, n, b, countSoLe);
    locSoChan(a, n, c, countSoChan);

    free(a);
    return 0;
}