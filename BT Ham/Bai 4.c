#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int uscln(int a, int b) {
    while (a * b != 0) {
        if (a > b) {
            a %= b;
        } else {
            b %= a;
        }
    }

    int sum = a + b;
    return sum;
}

int bscnn(int a, int b){
    int bcnn = a * b / uscln(a, b);
    return bcnn;
}

void toiGian(int a, int b){
    int ucln = uscln(a,b);
    int a_nn = a / ucln;
    int b_nn = b / ucln;

    printf("Phan so toi gian: %d/%d", a_nn,b_nn);
}

void main() {
    int a, b;

    printf("Nhap phan so a/b: ");
    scanf("%d/%d", &a, &b);

    printf("Uoc chung lon nhat: %d\n", uscln(a,b));
    printf("Boi chung nho nhat: %d\n", bscnn(a,b));

    toiGian(a,b);
}