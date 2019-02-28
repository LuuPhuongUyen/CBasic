#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int y,a,b;
    printf("Nhap nam:"); scanf("%d", &y);
    a=y%10;
    b=y%12;
    if (y<100) printf("Khong hop le.");
    else
    {
        if (a==0) printf("Canh ");
        else if (a==1) printf("Tan ");
        else if (a==2) printf("Nham ");    
        else if (a==3) printf("Quy ");           
        else if (a==4) printf("Giap "); 
        else if (a==5) printf("At ");  
        else if (a==6) printf("Binh ");
        else if (a==7) printf("Dinh ");  
        else if (a==8) printf("Mau ");     
        else if (a==9) printf("Ky ");
        
        if (b==0) printf("Than");              
        else if (b==1) printf("Dau");
        else if (b==2) printf("Tuat");   
        else if (b==3) printf("Hoi");
        else if (b==4) printf("Ti");
        else if (b==5) printf("Suu");
        else if (b==6) printf("Dan");
        else if (b==7) printf("Meo");
        else if (b==8) printf("Thin");
        else if (b==9) printf("Ty");  
        else if (b==10) printf("Ngo");
        else if (b==11) printf("Mui");
    }
    printf("%c%c",a,b);
    getch();
}