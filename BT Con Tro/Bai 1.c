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

void soLeTangDan(int *a, int *b, int n) {
    int x = 0;
    for (int i = 0; i < n; i++) {
        if (*(a + i) % 2 != 0) {
            *(b + (x++)) = *(a + i);
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = i; j < x; j++) {
            if (*(b + i) > *(b + j)) {
                int tmp = *(b + i);
                *(b + i) = *(b + j);
                *(b + j) = tmp;
            }
        }
    }
}

void soChanGiamDan(int *a, int *b, int n) {
    int x = n - 1;
    for (int i = 0; i < n; i++) {
        if (*(a + i) % 2 == 0) {
            *(b + (x--)) = *(a + i);
        }
    }

    for (int i = n - 1; i > x; i--) {
        for (int j = i; j > x; j--) {
            if (*(b + i) > *(b + j)) {
                int tmp = *(b + i);
                *(b + i) = *(b + j);
                *(b + j) = tmp;
            }
        }
    }
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int *a,*b;

    a = (int *)malloc(n * sizeof(int));
    b = (int *)malloc(n * sizeof(int));

    nhapMang(a, n);

    printf("\nMang Truoc Khi Sap Xep: \n");
    xuatMang(a,n);

    soLeTangDan(a,b,n);
    soChanGiamDan(a,b,n);

    printf("\nMang Sau Khi Sap Xep: \n");
    xuatMang(b,n);

    free(a);
    return 0;
}