#include <stdio.h>

int main(){

    int a,b,min,ucln;

    printf("Nhap phan so (a/b): ");
    scanf("%d/%d",&a,&b);

    if (a == 0 || b == 0){
        printf("Khong ton tai phan so");
    }else if (a == b){
        printf("Phan so toi gian = %d", a /b);
    }else{

        if (a < b){
            min = a;
        }else{
            min = b;
        }
        
        for (int i = 1; i <= min; i++) {
            if (a%i == 0 && b%i == 0){
                ucln = i;
            }
        }

        if (ucln == 1){
            printf("Phan so khong toi gian duoc nua");
        }else{
            a = a / ucln;
            b = b / ucln;

            printf("Uoc chung lon nhat la: %d \n", ucln);
            printf("Phan so toi gian la: %d/%d",a,b);
        }
    }

    getch();
}