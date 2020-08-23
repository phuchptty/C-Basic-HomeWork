#include <stdio.h>
#include <math.h>

float x=0;

void solve(float a, float b, float c, float d, float e, float m, float n)
{
  float fX, faX;
  int i=0;
  x=n;//Doan gia tri ban dau cua x0
  int maxLoop = 100;//Toi da lap 100 lan
  while (i < maxLoop)
  {
    fX = a*pow(x,4)+b*pow(x,3)+c*pow(x,2)+d*x+e;//Tinh f(x0)
    faX = 4*a*pow(x,3)+3*b*pow(x,2)+2*c*pow(x,1)+d;//Tinh f'(x0)
    x = x-fX/faX;//x1=x0-f(x0)/f'(x0)
    i++;//Dem so lan lap
  }
  printf("\nNghiem gan dung cua PT la: %f\n",x);
}

int main()
{
   float a,b,c,d,e;
   a=b=c=d=e=0;
   printf("Nhap he so PT theo dang Ax^4+Bx^3+Cx^2+Dx+E=0:");
   scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);

   float m,n;
   m=n=0;
   printf("Nhap khoang nghiem theo dang [m;n]: ");
   scanf("%f %f",&m,&n);

   solve(a,b,c,d,e,m,n);
   return 0;
}
