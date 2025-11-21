#include<stdio.h>
void main()
{
   float sec,s,m,h;
   scanf("%f",&s);


    m=s/60;
h=m/60;
   printf("Number of HOURS:%.2f\nMINUTES:%.2f\nSECONDS:%.2f",h,m,s);




}






























/*mera progra,m
#include<stdio.h>
void main()
{
   int a,b,GCD=1;
   printf("ENTE higher integer : ");
   scanf("%d",&a);
    printf("ENTE small  integer : ");
   scanf("%d",&b);
   if(a>b){
         gcd(a,b,GCD);
    }
    else if(a<b){
         gcd(b,a,GCD);
    }
   else
    printf("you enter wrong integer");

}
int gcd(a,b,GCD){
    for(int i=1;i<=a;i++)
            {
                if(a%i==0&&b%i==0)
                GCD ++;
            }
    printf("GCD : %d",GCD);
}

*/



















