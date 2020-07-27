#include <conio.h>
#include <stdio.h>
#include <string.h>
char s[200] = "";

char *convertToWord(unsigned int n) {
    // indexing simple
    char a[10][5] = {"", "mot", "hai", "ba", "bon", "nam", "sau",
                     "bay", "tam", "chin"};
    int units, tens, hundreds;

    s[0] = 0;
    units = n % 10;
    n /= 10;
    tens = n % 10;
    hundreds = n / 10;
    //hundreds
    if (hundreds > 0) {
        strcat(s, a[hundreds]);
        strcat(s, " tram ");
    }
    //dozens
    if (tens > 0) {
        if (tens == 1)
            strcat(s, "muoi ");
        else {
            strcat(s, a[tens]);
            strcat(s, " muoi ");
        }
    }
    //per unit
    if (units > 0) {
        if (tens == 0 && hundreds != 0)
            strcat(s, "le ");
        if (units == 1)
            strcat(s, "mot");
        else if (units == 5 && (tens != 0 || hundreds != 0))
            strcat(s, "lam");
        else if (units == 5 && (tens = 0 || hundreds != 0))
            strcat(s, "nam");
        else
            strcat(s, a[units]);
    }
    return s;
}

int main() {
    //declare variable
    long int n;
    int thousands, millions, billions, units;
    char chuoi[200];
    //input data
    printf("\nNhap mot so : ");
    scanf("%ld", &n);
    printf("So %ld doc bang chu la : ", n);
    if (n == 0)
        printf("khong");
    else {
        if (n < 0) {
            printf("am ");
            n = 0 - n;
        }
        units = n % 1000;
        n /= 1000;
        thousands = n % 1000;
        n /= 1000;
        millions = n % 1000;
        billions = n / 1000;
        chuoi[0] = 0;
        if (billions > 0)
            printf("%s ty ", convertToWord(billions));
        if (millions > 0)
            printf("%s trieu ", convertToWord(millions));
        if (thousands > 0)
            printf("%s ngan ", convertToWord(thousands));
        if (units > 0)
            printf("%s", convertToWord(units));
    }
    return 0;
}