#include<stdio.h>
int main()
{
    int cp,sp,p,l;
    scanf("%d%d",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    if(sp>cp)
    {
        printf("Profit");
    }
    else
    {
        printf("Loss");
    }
}