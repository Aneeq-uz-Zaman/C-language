#include<stdio.h>
void main()
{
float ans,a,b,c,d;
printf("Think a number in your brain \n");
printf("Add 100 in num\nDivided by 2 in num\nMultiply by 5 in num\n");
scanf("%f",&ans);

a=ans/5;
b=a*2;
c=b-100;
d=c++;
printf("%f",d);
}



