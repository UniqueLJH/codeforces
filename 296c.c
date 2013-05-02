#include<stdio.h>
int main()
{
    double a[10010]={0};
    int op[10010][3];
    int opnum[10010]={0};
    int n,m,k;
    int i;
    scanf("%d%d%d",&n,&m,&k);
    for (i=1;i<=n;i++)
    {
        scanf("%lf",&a[i]);
    }
    for (i=1;i<=m;i++)
    {
        scanf("%d%d%d",&op[i][0],&op[i][1],&op[i][2]);
    }
    for (i=1;i<=k;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        int j;
        for (j=x;j<=y;j++)
        {
            opnum[j]++;
        }
    }
    for (i=1;i<=m;i++)
    {
        int j;
        for (j=op[i][0];j<=op[i][1];j++)
        {
            a[j]+=opnum[i]*op[i][2];
        }
    }
    for (i=1;i<n;i++)
    {
        printf("%0.0lf ",a[i]);
    }
    printf("%0.0lf\n",a[n]);
    return 0;
}
