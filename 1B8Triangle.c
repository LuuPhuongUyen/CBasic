#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(void)
{
    float a,b,c,cv,s,p;
    printf("Nhap do dai ba canh:");scanf("%f%f%f", &a,&b,&c);
   
    if ((a+b)>c && (b+c)>a && (a+c)>b) //Bat dang thuc tam giac
    {
        cv=a+b+c;
        p=(a+b+c)/2; 
        s=sqrt(p*(p-a)*(p-b)*(p-c)); //Cong thuc He-rong
        printf("Chu vi: %f\n",1.0*cv);
        printf("Dien tich: %f",1.0*s);
    } 
    else
    printf("Khong phai ba canh tam giac");
getch();
}
