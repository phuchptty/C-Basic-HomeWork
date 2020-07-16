#include <stdio.h>
#include <math.h>

int main(){

    int a;

    printf("Nhap 1 So Nguyen Duong: ");
    scanf("%d", &a);

    if (a <= 0){
        printf("Khong Phai So Nguyen Duong");
    }else if (a < 2){
        printf("Khong Co So Nguyen To");
    }else{

        int count = 0;

        for (int i = 2; i < sqrt(a); i++ ){

            if (a % i == 0){
                count++;
            }

        }

        if (count == 0 ){
            printf("So Nguyen To");
        }else{
            printf("Khong Phai So Nguyen To");
        }

    }
    
}