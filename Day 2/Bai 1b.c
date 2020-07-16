#include <stdio.h>

int main(){

    int thang, nam;

    printf("Nhap Thang Va Nam (7 2020): ");
    scanf("%d %d", &thang, &nam);

    if (nam % 4 == 0 && thang == 2){
        printf("Thang 2 nam %d co 29 ngay", nam);
    }else if(nam % 4 != 0 && thang == 2) {
        printf("Thang 2 nam %d co 28 ngay", nam);
    }else{
        switch (thang){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("Thang %d nam %d co 31 ngay", thang, nam);
                break;
            
            case 4:
            case 6:
            case 9:
            case 11:
                printf("Thang %d nam %d co 30 ngay", thang, nam);
                break;
            
            default:
                printf("1 nam chi co 12 thang");
                break;
        }
    }

    getch();
}