#include <conio.h>
#include <stdio.h>

struct PhanSo {
    int tu;
    int mau;
};

typedef struct PhanSo PHANSO;

void Nhap(PHANSO x) {
    printf("Nhap tu: ");
    scanf("%d", &x.tu);
    printf("Nhap mau: ");
    scanf("%d", &x.mau);
}

void Xuat(PHANSO x) {
    printf("\n %d/%d", x.tu, x.mau);
}

PHANSO Tong(PHANSO x, PHANSO y) {
    PHANSO temp;
    temp.tu = x.tu * y.mau + x.mau * y.tu;
    temp.mau = x.mau * y.mau;
    return temp;
}

PHANSO Hieu(PHANSO x, PHANSO y) {
    PHANSO temp;
    temp.tu = x.tu * y.mau - x.mau * y.tu;
    temp.mau = x.mau * y.mau;
    return temp;
}

PHANSO Tich(PHANSO x, PHANSO y) {
    PHANSO temp;
    temp.tu = x.tu * y.tu;
    temp.mau = x.mau * y.mau;
    return temp;
}

PHANSO Thuong(PHANSO x, PHANSO y) {
    PHANSO temp;
    temp.tu = x.tu * y.mau;
    temp.mau = x.mau * y.tu;
    return temp;
}

int main() {
    PHANSO x, y, kq;
    printf("\nNhap phan so a:\n");
    Nhap(x);
    printf("\nNhap phan so b:\n");
    Nhap(y);
    kq = Tong(x, y);
    printf("\n Tong 2 phan so: ");
    Xuat(kq);
    kq = Hieu(x, y);
    printf("\n Hieu 2 phan so:");
    Xuat(kq);
    kq = Tich(x, y);
    printf("\n Tich 2 phan so: ");
    Xuat(kq);
    printf("\n Thuong 2 phan so: ");
    Xuat(kq);
    kq = Thuong(x, y);
    getch();
    return 0;
}
