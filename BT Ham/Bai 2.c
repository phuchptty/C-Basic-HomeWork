#include <math.h>
#include <stdio.h>

float nhapSo() {
    float a;
    scanf("%f", &a);
    return a;
}

void kiemTraTamGiac(float a, float b, float c) {
    if (a + b > c && b + c > a && c + a > b) {
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("La tam giac vuong");
        } else if (a == b && b == c) {
            printf("La tam giac deu");
        } else if (a == b || a == c || b == c) {
            printf("La tam giac can");
        } else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b) {
            printf("La tam giac tu");
        } else
            printf("La tam giac nhon");
    } else
        printf("Khong phai la tam giac");
}

float tinhChuVi(float a, float b, float c) {
    return a + b + c;
}

float tinhDienTich(float a, float b, float c) {
    float nuaChuVi = tinhChuVi(a, b, c) / 2;
    return sqrt(nuaChuVi * (nuaChuVi - a) * (nuaChuVi - b) * (nuaChuVi - c));
}

int main() {
    float a, b, c;
    printf("Nhap a: ");
    a = nhapSo();
    printf("Nhap b: ");
    b = nhapSo();
    printf("Nhap c: ");
    c = nhapSo();
    kiemTraTamGiac(a, b, c);
    printf("\nChu vi la: %f\n", tinhChuVi(a, b, c));
    printf("Dien tich la: %f", tinhDienTich(a, b, c));

    return 0;
}