#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int main() {
    char a[100];

    printf("Nhap chuoi: ");
    gets(a);

    printf("KhA PaNk StYlE: ");

    for (int i = 0; i < strlen(a); i++) {
        if (i % 2 == 0) {
            printf("%c", toupper(a[i]));
        } else {
            printf("%c", tolower(a[i]));
        }
    }
    
    _getch();
    return 1;
        
}