#include<stdio.h>
#include<string.h>
  int n,m;
  int f[10001],p[10001];
int fac(int x)
{
    int l=0,r=n,mid=(l+r)>>1;
    while (l<r)
    {
        mid=(l+r)>>1;
      //  printf(">%d %d %d\n",f[l],f[mid],f[r]);
        if (f[mid]>=x){r=mid;}
        else {l=mid+1;}
    }
    return r;
}
int main()
{

    memset(p,0,sizeof(p));
    memset(f,0,sizeof(f));
    scanf("%d%d",&n,&m);
    int i;
    for (i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        f[i]=f[i-1]+a*b;
    }
    for (i=1;i<=m;i++)
    {
        scanf("%d",&p[i]);
    }
    int j;
    for (i=1;i<=m;i++)
    {
       printf("%d\n",fac(p[i]));

    }

    return 0;
}
