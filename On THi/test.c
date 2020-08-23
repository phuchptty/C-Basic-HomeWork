#include <stdio.h>

void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d] =", i);
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[], int n) {

    for (int i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
}
void sapXepTangDan(int a[], int n) {

    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                // a[i] = temp;
                // a[i] = a[j];
                // temp = a[j];
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
            }
        }
    }

    printf("Sap xep tang dan la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
}
int timMax(int a[], int n) {

    int max = a[0];
    for (int i = 1; i < n; i++) {

        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("\nGia tri lon nhat cua mang la %d", max);

    return max;
}
int main() {
    int a[50];
    int n;
    printf("Nhap n =\n");
    scanf("%d", &n);
    nhapMang(a, n);
    xuatMang(a, n);
    sapXepTangDan(a, n);
    timMax(a, n);
}
