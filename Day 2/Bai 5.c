#include <stdio.h>
#include <math.h>

int main(){
    
    int n;

    printf("Nhap so: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i < n; i++){

        if (n % i == 0){
            sum = sum + i;
        }

    }

    if (sum == n){
        printf("So Hoan Hao");
    }else{
        printf("So Khong Hoan Hao");
    }
}