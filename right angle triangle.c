#include<stdio.h>
void main()
{
    float h,b,p;
    printf("Enter THREE SIDES OF TRIANGLE  : ");
    scanf("%f%f%f",&h,&b,&p);
    if((h*h==b*b+p*p)||(p*p==b*b+h*h)||(b*b==h*h+p*p))
        printf("RIGHT TRIANGLE");
    else
        printf("Not RIGHT TRIANGLE");
}



