#include <stdio.h>

int main(){
    
    int num;
    
    printf("Nhap 1 so nguyen: ");
    scanf("%d", &num);

    (num % 2 == 0 )? printf("So chan") : printf("So le");
    
    getch();
}