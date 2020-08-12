#include <stdio.h>
#include <stdlib.h>

void main(){
    int n;
    FILE *f = fopen("SO_NGUYEN.DAT", "a+");

    printf("Nhap n so nguyen: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        int c;

        printf("Nhap so thu %d: ", i +1);
        scanf("%d", &c);
        fprintf(f, "%d", c);
        fprintf(f, "\n");
    }

    fclose(f);
}