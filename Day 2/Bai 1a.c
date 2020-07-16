#include <stdio.h>

int main(){
    
    float a,b,x;

    printf("Phuong trinh bac 1 dang ax+b=0. \n");

    printf("Nhap He So a: ");
    scanf("%f",&a);

    printf("Nhap He So b: ");
    scanf("%f",&b);

    if (a == 0 ){
        if (b == 0 ){
            printf("Phuong Trinh Vo So Nghiem");
        }else{
            printf("Phuong Trinh Vo Nghiem");
        }
    }else{

        x = -b /a;

        printf("Phuong Trinh Co Nghiem x: %0.2f", x);
    }
}