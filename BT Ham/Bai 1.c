#include <stdio.h>

int ktSoHoanHao(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return 1;
    return 0;
}

void main(){
    int n;
    
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("So hoan hao: ");

    for (int i = 1; i <= n; i++){
        if (ktSoHoanHao(i) == 1){
            printf("%d ",i);
        }
    }
}