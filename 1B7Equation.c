#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(void)
{
    float a,b,c,x,x1,x2,delta;
    printf("Phuong trinh bac nhat mot an:ax+b=0\n",a,b);
    printf("Nhap he so a, b:"); scanf("%f%f", &a, &b);
    if (a==0)
    printf("a phai khac 0");
    else
    printf("Phuong trinh co nghiem duy nhat x=%f",-b/a);
    getch();
    
    printf("Phuong trinh bac hai: ax^2+bx+c=0\n",a,b,c);
    printf("Nhap he so a,b,c:"); scanf("%f%f%f", &a, &b, &c);
    delta=b*b-4*a*c;
    if (delta<0)
    printf("Phuong trinh vo nghiem");
    else if (delta==0)
    printf("Phuong trinh co hai nghiem kep x1=x2=%f",x1=x2=-b/(2*a));
    else if (delta>0)
    printf("Phuong trinh co hai nghiem phan biet x1=%f\n,x2=%f",x1=(-b+sqrt(delta))/(2*a), x2=(-b-sqrt(delta))/(2*a));
    getch();
}
