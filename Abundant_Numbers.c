#include<stdio.h>
int main()
{
    int n,i,m=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            m=m+i;
        }
    }
    if(m>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}