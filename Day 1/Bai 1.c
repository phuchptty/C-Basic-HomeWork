#include <stdio.h>

int main() {
    float a,b;
    
    printf( "Nhap a= ");
    scanf("%f",&a);
    
    printf( "Nhap b= ");
    scanf("%f",&b);
    
    printf( "a+ \t b= \t a+b \n");
    printf( "%0.1f+ \t %0.1f= \t %0.1f",a,b, a+b);

    getch();
}