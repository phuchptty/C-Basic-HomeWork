#include <stdio.h>

int main(){
    
    int a,b,c;
    
    printf("Nhap 3 canh tam giac: ");
    scanf("%d %d %d", &a,&b,&c);
    
    if (a+b > c && a+c > b && b+c > a){
        printf("Day la tam giac");
    }else{
        printf("Day khong phai tam giac");
    }
    
    getch();
}