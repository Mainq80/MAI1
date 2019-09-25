#include <stdio.h>
#include <conio.h>
int da_thuc (int x)
{
int f;
f=x*x*x+3*x*x+1;
return(f);
}
main()
{
clrscr();
int f,i;
for(i=1;i<=20;i++)
printf("\n Gia tri cua bieu thuc la %d",da_thuc(i));
getch();
}
