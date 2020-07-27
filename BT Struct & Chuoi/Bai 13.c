#include<stdio.h>
#include<string.h>

void demKiTu(char *s,char t)
{
    int dem=0;
    for(int i=0; i<=strlen(s); i++)
    {
        if(s[i]==t)
            dem=dem+1;
    }
    printf("So lan xuat hien cua ki tu %c la: %d\n",t,dem);
}
char doiXung(char s[])
{
    int i;
    for (i = 0; i < strlen(s) / 2; i++)
    {
        if (s[i] != s[strlen(s) - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

void inNguoc(char s[])
{
    if(!doiXung(s))
        for(int i=strlen(s)-1; i>=0; i--)
        {
            printf("%c",s[i]);
        }
}

int main()
{
    int s[1000];
    fflush(stdin);
    printf("Nhap chuoi: ");
    gets(s);
    char t;
    printf("Nhap ki tu: ");
    scanf("%c",&t);
    demKiTu(s,t);
    if(doiXung(s))
            {
                printf("Chuoi doi xung\n");
            }
            else
                printf("Chuoi khong doi xung\n");

    inNguoc(s);

}
