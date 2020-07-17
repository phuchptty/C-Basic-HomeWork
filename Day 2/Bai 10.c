#include <math.h>
#include <stdio.h>

int main() {

    int a;

    printf("Nhap chuoi so: ");
    scanf("%d", &a);

    // Tong chu so = logarit co so 10 + 1

    cauA(a);

    phanTich(a);

    getch();
}

void phanTich(int a) {

    printf("Phan Tich N = ");

    for (int i = 2; i <= a; i++) {

        while (a % i == 0) {
            printf("%d", i);

            if (a > i) {
                printf(" * ");
            }

            a = a / i;
        }
    }
}

void cauA(int a) {

    int count = 0;
    int sum = 0;
    int charNum;

    for (; a != 0;) {

        charNum = a % 10; // Tach cac chu cai vd: 123 % 10 => du 3
        sum += charNum;
        count++;
        a = a / 10; // Bo bot 1 chu so
    }

    printf("Co chu so: %d \n", count);
    printf("Tong cac chu so: %d \n", sum);
}