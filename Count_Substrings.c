#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        char s[1000];
        scanf("%s",&s);
        int c=0;
        for(int j=0;j<x;j++)
        {
            for(int k=j;k<x;k++)
            {
                if(s[j]=='1'&&s[k]=='1')
                {
                    c+=1;
                }
            }
        }
        printf("%d
",c);
    }
}