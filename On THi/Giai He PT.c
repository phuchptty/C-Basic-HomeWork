#include <stdio.h>
#include <math.h>

void main(){

    float a1, a2, b1,b2,c1,c2;

    printf("Nhap he so phuong trinh 1: ");
    scanf("%f %f %f", &a1, &b1, &c1);

    printf("Nhap he so phuong trinh 2: ");
    scanf("%f %f %f", &a2, &b2, &c2);

    float D = a1*b2 - a2*b1;
    float Dx = b1*c2 - b2*c1;
    float Dy = a1*c2 - a2*c1;

    if (D == 0){
        if (Dx + Dy == 0){
            printf("PT Vo Nghiem");
        } else {
            printf("PT Vo So Nghiem");
        }
    }else {
        printf("PT Co Nghiem X la %.2f va Y la %.2f ", Dx/D, Dy/D);
    }

}
