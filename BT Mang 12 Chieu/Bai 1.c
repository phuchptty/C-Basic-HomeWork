#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d | ", a[i]);
    }
}

void demPhanTuAm(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            count++;
        }
    }

    printf("\n Co %d phan tu am \n", count);
}

void timMax(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    printf("Max la %d \n", max);
}

void timMin(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    printf("Min la %d \n", min);
}

void soAmMax(int a[], int n) {
    int max = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] < 0) {
            max = a[i];
        }
    }

    for (int i = 1; i < n; i++) {
        if (a[i] < 0 && a[i] > max) {
            max = a[i];
        }
    }
    printf("So Am Max la %d \n", max);
}

void soDuongMin(int a[], int n) {
    int min = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > 0) {
            min = a[i];
        }
    }

    for (int i = 1; i < n; i++) {
        if (a[i] > 0 && a[i] < min)
            min = a[i];
    }
    printf("So Duong Min la %d \n", min);
}

int ktSoNguyenTo(int n) {
    if (n < 3) {
        return 0;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}

void soNguyenTo(int a[], int n) {
    printf("So nguyen to trong mang: ");

    for (int i = 0; i < n; i++) {
        if (ktSoNguyenTo(a[i]) == 1) {
            printf("%d ", a[i]);
        }
    }
}

void soChinhPhuong(int a[], int n) {
    printf("\n So chinh phuong trong mang: ");

    for (int i = 0; i < n; i++) {
        int sqr = sqrt(a[i]);

        if (sqr * sqr == a[i]) {
            printf("%d ", a[i]);
        }
    }
}

void sapXepTangDan(int a[], int n) {

    int tg;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }

    printf("\n Sap xep tang dan: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sapXepGiamDan(int a[], int n) {
    int tg;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }

    printf("Sap xep giam dan: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void themVaoMang(int a[], int n) {
    int val;
    printf("Ban muon them gia tri: ");
    scanf("%d", &val);

    printf("Mang truoc khi them: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    if (n >= 100) {
        printf("Mang Da Day");
    } else {
        for (int i = n; i > n; i--) {
            a[i] = a[i - 1];
        }

        a[n] = val;
        n++;
    }

    printf("Mang sau khi them: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
}

void xoaKhoiMang(int a[], int n) {

    if (n <= 0) {
        printf("Mang rong !");
    } else {
        int val;
        printf("Ban muon xoa gia tri thu may ? ");
        scanf("%d", &val);

        printf("Mang truoc khi xoa: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");

        for (int i = val - 1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }

        --n;

        printf("Mang sau khi them: ");

        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }

        printf("\n");
    }
}

void suaPhanTu(int a[], int n) {
    int i, val;
    printf("Ban muon sua phan tu thu may ? ");
    scanf("%d", &i);

    if (i > n) {
        printf("Phan tu chua co !");
    } else {

        printf("Mang truoc khi sua: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");

        printf("Phan tu %d co gia tri %d. Ban muon sua thanh ? ", i, a[i - 1]);
        scanf("%d", &val);

        a[i - 1] = val;

        printf("Mang sau khi sua: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}

void action(int a[], int n) {
    int option;
    printf("Chon hanh dong ban muon: \n \t 1. Them phan tu vao mang \n \t 2. Xoa phan tu khoi mang \n \t 3. Sua phan tu trong mang");
    printf("\n Ban chon: ");
    scanf("%d", &option);

    switch (option) {
    case 1:
        themVaoMang(a, n);
        break;

    case 2:
        xoaKhoiMang(a, n);
        break;

    case 3:
        suaPhanTu(a, n);
        break;

    default:
        printf("Ban chua chon hanh dong");
        break;
    }
}

int main() {

    int a[100];
    int n;

    printf("Nhap So Phan Tu Trong Mang: ");
    scanf("%d", &n);

    nhapmang(a, n);
    xuatMang(a, n);

    demPhanTuAm(a, n);

    timMax(a, n);
    timMin(a, n);

    soAmMax(a, n);
    soDuongMin(a, n);

    soNguyenTo(a, n);
    soChinhPhuong(a, n);

    sapXepTangDan(a, n);
    sapXepGiamDan(a, n);

    action(a, n);

    return 0;
}
