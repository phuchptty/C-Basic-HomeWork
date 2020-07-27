#include <stdio.h>
#include <stdlib.h>

void kiemTraSo(char s[])
{
    int count=0;
    for(int i=0 ; i<=strlen(s); i++)
    {
        if(s[i]>47&&s[i]<58)
            count++;
    }
    if(count==0)
    {
        printf("Khong co ki tu so\n");
    }
    else printf("Co %d ki tu so\n", count);
}

void kiemTraChu(char s[])
{
    int count=0;
    for(int i=0 ; i<=strlen(s); i++)
    {
        if(s[i]>64&&s[i]<91||s[i]>96&&s[i]<123)
            count++;
    }
    if(count==0)
    {
        printf("Khong co ki tu chu\n");
    }
    else printf("Co %d ki tu chu\n", count);

}

void kiemTraDacBiet(int s[])
{
    int count=0;
    for(int i=0 ; i<=strlen(s); i++)
    {
        if(s[i]>32&&s[i]<48||s[i]>57&&s[i]<65||s[i]>90&&s[i]<97||s[i]>122&&s[i]<=126)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("Khong co ki tu dac biet\n");
    }
    else printf("Co %d ki tu dac biet\n", count);

}

int main()
{
    char s[100];
    gets(s);
    kiemTraSo(s);
    kiemTraChu(s);
    kiemTraDacBiet(s);
}
