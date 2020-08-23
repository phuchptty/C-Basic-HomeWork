#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float a,b,c;
    float delta;

    printf("Nhap He So: ");
    scanf("%d %d %d", &a,&b, &c);

    if (a == 0 || b == 0){
        if (c == 0){
            printf("PT Vo Nghiem");
        } else {
            printf("PT Vo So Nghiem");
        }
    }

    delta = b*b - 4*a*c;

    if (delta < 0 ){
        printf("PT Vo Nghiem");
    } else if (delta == 0){
        printf("PT Co 1 nghiem duy nhat %.2f", (-b/(2*a)));
    } else {
        printf("PT Co 2 nghiem la: %0.2f %.2f ", (-b + sqrt(delta)) / 2,  (-b - sqrt(delta)) / 2);
    }

    getch();
}
