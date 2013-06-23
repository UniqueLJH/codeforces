#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int na[1001],nb[1001],nc[1001]={0};
    int n;
    scanf("%d",&n);
    int i;
    for (i=1;i<=n;i++)
    {
        scanf("%d%d",&na[i],&nb[i]);
    }
    int j;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            if ((nc[j]==0)&&(na[j]==nb[i])&&(j!=i)){nc[j]=1;}
        }
    }
    int sum=n;
    for (i=1;i<=n;i++)
    {
        sum-=nc[i];
    }
    printf("%d\n",sum);
    return 0;
}
