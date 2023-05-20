#include<stdio.h>
int main()
{
    int num,rem,largest=0;
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        if(largest<rem)
        {
            largest=rem;
        }
        num=num/10;
    }
    printf("%d",largest);
    return 0;
}