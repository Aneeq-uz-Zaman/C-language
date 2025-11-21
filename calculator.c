#include<stdio.h>
void main()
{
   int fvalue,svalue;
    float c;
   char a;

   printf("ENTER  the operation  :  ");
   scanf("%c",&a);
   printf("enter first value : ");
   scanf("%d",&fvalue);
   printf("enter second value : ");
   scanf("%d",&svalue);



   if(a=='+'){
        c=fvalue+svalue;
        printf("%f",c);
   }
   else if(a=='-'){
         c=fvalue-svalue;
        printf("%f",c);
   }
  else if(a=='*'){
            c=fvalue*svalue;
            printf("%f",c);
  }
  else if (a=='/'){
       c=fvalue/svalue;
   printf("%f",c);
  }
   else
    printf("\nWrong Operation");

}

