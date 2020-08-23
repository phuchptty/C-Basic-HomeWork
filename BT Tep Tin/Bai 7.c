#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct SinhVien {
    char hoTen[100];
    char gioiTinh[5];
    float dtb;
} SinhVien;

void main() {
    FILE *f = fopen("Dssv.txt", "a+");

    SinhVien SV[5];
    char str[60];

    fgets(str,60 ,f);
    int i = 0;

    // DOC FILE

    while (fgets(str, 60, f) != NULL){
        char *token = strtok(str, ", ");

        strcpy(SV[i].hoTen,token);

        token = strtok(NULL,", ");
        strcpy(SV[i].gioiTinh,token);

        token = strtok(NULL,", ");
        SV[i].dtb = atof(token);

        i++;
    }

    // IN RA

    printf("%-20s | %-10s | %-6s\n", "Ho Ten", "Gioi Tinh", "DTB");

    for (i = 0; i < 3; i++){
        printf("%-20s | %-10s | %-.2f\n", SV[i].hoTen, SV[i].gioiTinh, SV[i].dtb);
    }

    // SAP XEP

    for (i = 0; i < 2; i++){
        for (int j = i +1; j < 3; j++){
            if (SV[i].dtb > SV[j].dtb){
                SinhVien tmp;
                tmp = SV[i];
                SV[i] = SV[j];
                SV[j] = tmp;
            }
        }
    }

    // IN RA

    printf("\n\nSAU KHI SAP XEP\n\n");

    printf("%-20s | %-10s | %-6s\n", "Ho Ten", "Gioi Tinh", "DTB");

    for (i = 0; i < 3; i++){
        printf("%-20s | %-10s | %-.2f\n", SV[i].hoTen, SV[i].gioiTinh, SV[i].dtb);
    }

    //GHI FILE

    fprintf(f, "\nSAU KHI SAP XEP\n");

    for (i = 0; i < 3; i++){
        fprintf(f,"%s ,%s ,%.2f\n", SV[i].hoTen, SV[i].gioiTinh, SV[i].dtb);
    }

    fclose(f);
}
