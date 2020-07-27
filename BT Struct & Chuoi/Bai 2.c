#include <stdio.h>

int main() {
    fflush(stdin);
    char i;
    printf("Nhap 1 ki tu bat ki: ");
    scanf("%c", &i);

    if (i > 47 && i < 58) {
        printf("Day la ki tu so\n");
    } else if (i > 64 && i < 91 || i > 96 && i < 123) {
        printf("Day la ki tu chu\n");
    } else {
        printf("Day la ki tu dac biet");
    }
}
