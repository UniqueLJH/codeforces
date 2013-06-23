#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a[10001];
    int n,m;
    scanf("%d%d",&n,&m);
    int i;
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    int j=0;
    for (i=1;i<=m;i++)
    {
        int e,k,l;

        scanf("%d",&e);
        if (e==1){scanf("%d%d",&k,&l);a[k]=l-j;}
        if (e==2)
        {scanf("%d",&k);
        j+=k;
        }
        if (e==3){scanf("%d",&k);printf("d\n",a[k]+j);}
    }
    return 0;
}
