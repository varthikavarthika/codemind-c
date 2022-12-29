#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=0,t=n,c=0;
    while(t)
    {
        c++;
        t=t/10;
    }
   t=n;
   while(t)
   {
       int r=t%10;
       s=s+pow(r,c);
       c--;
       t=t/10;
   }
   if(s==n)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}