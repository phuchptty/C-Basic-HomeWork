#include <stdio.h>

int main(){

    int d,m,y;

    printf("Nhap Ngay m (dd/mm/yyyy): ");
    scanf("%d/%d/%d",&d,&m,&y);

    d = d + 1;

    if (m == 2 && y % 4 != 0){
        if (d == 29){
            if (m + 1 > 12 ){
                m = m +1 -12;
                y = y +1;
            }else{
                m = m +1;
            }
        }        

    }else if (m == 2 && y % 4 == 0){
        if (d > 29){
            d = 1;
            m = 3;
        }
    }else{
        int a;
        switch (m){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                a = 31;
                break;
            
            case 4:
            case 6:
            case 9:
            case 11:
                a = 30;
                break;
        }

        if (d > a){
            d = 1;
            
            if (m + 1 > 12 ){
                m = 1;
                y = y +1;
            }else{
                m = m +1;
            }
        }
    }

    printf("%d/%d/%d",d,m,y);

    getch();
}