#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void demSoTu(char str[100]) {
    printf("Do dai chuoi: ");

    int count = 1;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 32 && str[i+1] != 32 && str[i-1] != 32) {
            count++;
        }
    }

    printf("%d \n", count);
}

char TuDaiNhat(char s[]) {

    int i;
    int maxx = 0, maxi = 0;
    int len = strlen(s);

    if (s[0] == ' ') {
        for (i = 0; i < len - 1; i++) {
            if ((s[i] == ' ') && (s[i + 1] != ' ')) {
                int j = i + 1;
                int dem = 0;

                while ((s[j] != ' ') && (s[j] != '\0')) {
                    dem++;
                    j++;
                }

                if (dem > maxx) {
                    maxx = dem;
                    maxi = i + 1;
                }
                i = j - 1;
            }
        }
    } else {
        i = 0;
        int dem = 0;

        while ((s[i] != ' ') && (s[i] != '\0')) {
            dem++;
            i++;
        }

        if (dem > maxx) {
            maxx = dem;
            maxi = 0;
        }

        for (i = maxx - 1; i < len - 1; i++) {
            if ((s[i] == ' ') && (s[i + 1] != ' ')) {
                int j = i + 1;
                int de = 0;

                while ((s[j] != ' ') && (s[j] != '\0')) {
                    de++;
                    j++;
                }

                if (de > maxx) {
                    maxx = de;
                    maxi = i + 1;
                }

                i = j - 1;
            }
        }
    }

    int k;

    printf("Tu dai nhat: ");

    for (k = maxi; k < (maxi + maxx); k++) {
        printf("%c", s[k]);
    }
}

int main() {
    char str[100];

    printf("Nhap 1 chuoi: ");
    gets(str);

    demSoTu(str);
    TuDaiNhat(str);
}