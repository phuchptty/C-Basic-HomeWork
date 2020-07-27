#include<stdio.h>

int main(){
    char can[10][10]={"Canh","Tan","Nham","Quy","Giap","At","Binh","Dinh","Mau","Ky"};
    char chi[12][10]={"Than","Dau","Tuat","Hoi","Ty'","Suu","Dan","Meo","Thin","Ty.","Ngo","Mui"};
    int n;
    printf("Nhap vao nam duong lich: ");
    scanf("%d",&n);
    int thu_tu_can = n%10;
    int thu_tu_chi = n%12;
    printf("%d = %s %s",n,can[thu_tu_can],chi[thu_tu_chi]);
    return 0;
}
