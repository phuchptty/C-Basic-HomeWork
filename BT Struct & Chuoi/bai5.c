#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define max 100

char chuyenChuoiThanhChuInHoa(char s[]) {
    int i;
    int size = strlen(s);
    for (i = 0; i < size; i++) {
        s[i] = toupper(s[i]);
    }
    printf("xau ki tu sau khi viet hoa : %s\n", s);
}

int soKyTu(char s[]) {
    int i;

    for (i = 0; i < strlen(s); i++)
        ;
    printf("So ki tu cua chuoi: %d\n", i);
}

int demKiTu(char *s, char t) {
    int dem = 0;
    for (int i = 0; i <= strlen(s); i++) {
        if (s[i] == t)
            dem = dem + 1;
    }
    printf("So lan xuat hien cua ki tu %c la: %d\n", t, dem);
}

int dem(char *s) {
    int dem = 0;
    for (int i = 0; i <= strlen(s); i++) {
        if (s[i] == ' ')
            dem = dem + 1;
    }
    printf("So ki tu dau cach xuat hien trong chuoi: %d\n", dem);
}

char doiXung(char s[100]) {
    int i;
    for (i = 0; i < strlen(s) / 2; i++) {
        if (s[i] != s[strlen(s) - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

void inNguoc(char s[]) {
    if (!doiXung(s))
        for (int i = strlen(s) - 1; i >= 0; i--) {
            printf("%c", s[i]);
        }
}

void kiemTraKiTu() {
    fflush(stdin);
    char i;
    printf("Nhap 1 ki tu bat ki: ");
    scanf("%c", &i);
    if (i > 47 && i < 58)
        printf("Day la ki tu so\n");
    else if (i > 64 && i < 91 || i > 96 && i < 123)
        printf("Day la ki tu chu\n");
    else
        printf("Day la ki tu dac biet");
}

char inHoaKyTuDau(char s[]) {
    int i;
    if (s[0] != ' ') {
        s[0] = s[0] - 32;
        for (i = 1; i < strlen(s); i++) {
            if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z') {
                s[i + 1] = s[i + 1] - 32;
            }
        }
    } else {
        for (i = 0; i < strlen(s); i++) {
            if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z') {
                s[i + 1] = s[i + 1] - 32;
            }
        }
    }
    printf("%s", s);
}

int main() {
    char s[max];
    int chon;
    printf("       ----------MENU----------\n");
    printf("1.Chuyen chuoi thanh chu in hoa\n");
    printf("2.Cho biet chieu dai cua chuoi\n");
    printf("3.Nhap vao 1 ki tu dem so lan xuat hien ki tu do trong xau\n");
    printf("4.Dem so ki tu dau cach trong cau\n");
    printf("5.Kiem tra tinh doi xung cua chuoi\n");
    printf("6.In chuoi dao nguoc neu chuoi khong doi xung\n");
    printf("7.Nhap vao 1 ki tu va kiem tra ki tu do la chu cai, chu so hay ki tu dac biet\n");
    printf("8.Chuyen cac ki tu dau cua chuoi thanh in hoa\n");
    printf("9.Tat chuong trinh\n");
    while (1) {
        printf("Nhap tuy chon cua ban: ");
        scanf("%d", &chon);
        switch (chon) {
        case 1:
            fflush(stdin);
            printf("Nhap chuoi: ");
            gets(s);
            chuyenChuoiThanhChuInHoa(s);
            break;
        case 2:
            fflush(stdin);
            printf("Nhap chuoi: ");
            gets(s);
            soKyTu(s);
            break;
        case 3:
            fflush(stdin);
            printf("Nhap chuoi: ");
            gets(s);
            char t;
            printf("Nhap ki tu: ");
            scanf("%c", &t);
            demKiTu(s, t);
            break;
        case 4:
            fflush(stdin);
            printf("Nhap chuoi: ");
            gets(s);
            dem(s);
            break;
        case 5:
            fflush(stdin);
            printf("Nhap chuoi: ");
            gets(s);
            if (doiXung(s)) {
                printf("Chuoi doi xung\n");
            } else
                printf("Chuoi khong doi xung\n");
            break;
        case 6:
            fflush(stdin);
            printf("Nhap chuoi: ");
            gets(s);
            inNguoc(s);
            break;
        case 7:
            kiemTraKiTu();
            break;
        case 8:
            fflush(stdin);
            printf("Nhap chuoi: ");
            gets(s);
            inHoaKyTuDau(s);
        case 9:
            return 0;
            break;
        default:
            printf("Khong co trong menu!!!");
        }
    }
}
