#include<stdio.h>
long long  a[100];
long long  p,q;
long long cp[100],cq[100];
long long  yuefen(int x)
{
    long long  a,b,temp;
    a=cp[x];
    b=cq[x];
    while (b!=0)
    {
       temp=b;
       b=a % b;
       a=b;
    }
    return a;
}
int main()
{
    scanf("%ld%ld",&p,&q);
    int n;
    scanf("%ld",&n);
    int i;
    for (i=1;i<=n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for (i=1;i<=n;i++)
    {
        printf("%ld",&a[i]);
    }
    cq[n]=a[n];cp[n]=1;
    for (i=n-1;i>0;i--)
    {
        cp[i]=cq[i+1];
        cq[i]=cq[i+1]*a[i]+cp[i+1];
    }
    for (i=1;i<=n;i++)
    {printf("%ld %ld\n",cp[i],cq[i]);}

}
