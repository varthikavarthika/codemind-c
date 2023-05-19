#include<stdio.h>
int main()
{
    int n,r,f,s,t,i;
    scanf("%d",&n);
    i=n%10;
    n=n/10;
    t=n%10;
    n=n/10;
    s=n%10;
    n=n/10;
    f=n%10;
    n=n/10;
    if(f==6)
    {
        f=9;
    }
    else if(s==6)
    {
        s=9;
    }
    else if(t==6)
    {
        t=9;
    }
    else if(i==6)
    {
        i=9;
    }
    printf("%d%d%d%d",f,s,t,i);
}