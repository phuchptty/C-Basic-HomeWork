#include <stdio.h>
#include <math.h>

int main(){

    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int a = 2; a < n; a++){
        
        int count = 0;

        for (int i = 2; i < sqrt(a); i++ ){
            if (a % i == 0){
                count++;
            }
        }

        if (count == 0 ){
            printf("So Nguyen To La: %d \n", a);
        }
    }
    
}