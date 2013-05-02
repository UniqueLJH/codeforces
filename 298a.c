#include<stdio.h>
int main()
{
    int o;
    int n;
    scanf("%d",&n);
    int i;
    char c[1001]={' '};
    for(i=0;i<=n;i++)
    {
        scanf("%c",&c[i]);
    }
    int beg,en;
    for (i=1;i<=n;i++)
    {
        if (c[i]!='.'){beg=i;break;}
    }
    for (o=1;o<=n;++o)
    {
        if (c[o]=='L'){en=o; break;}
    }
    printf("%d %d\n",beg,en);
    return 0;
}
