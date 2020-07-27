#include <stdio.h>
#include <string.h>

#define SIZE 256

void lietKe(char a[]) {

    int count[SIZE] = {0};

    for (int i = 0; i < strlen(a); i++) {
        count[a[i]]++;
    }

    printf("%s\n", a);

    for (int i = 0; i < SIZE; i++) {
        if (count[i]) {
            printf("%d%c", count[i], (char)(i));
        }
    }
}

int main() {
    char a[100];
    fflush(stdin);

    printf("Nhap chuoi ky tu: ");
    gets(a);

    lietKe(a);
}