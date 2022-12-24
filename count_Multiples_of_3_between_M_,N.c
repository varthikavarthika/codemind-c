#include<stdio.h>
int main()
{
    int min,max,i,s,c=0;
    scanf("%d%d",&min,&max);
    for(i=min;i<=max;i++)
    {
        if(i%3==0)
        c++;
    }
    printf("%d",c);
}