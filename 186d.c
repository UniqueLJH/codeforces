#include<stdio.h>
void  qs(int a[],int b[],int l,int r)
{
    int i=l,j=r,mm;
    if (i<j)
    {
     mm=a[(l+r)>>1];
    }
    while (i<=j)
    {
        while (a[j]>=mm) j--;
        while (a[i]<=mm) i++;
        if (i<=j)
            {
                int temp;
                temp=a[i];a[i]=a[j];a[j]=temp;
                temp=b[i];b[i]=b[j];b[j]=temp;
                i++;j--;
            }
    }
    if (l<j) qs(a,b,l,j);
    if (i<r) qs(a,b,i,r);
}
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int i;
    int c[10001],l[10001],r[10001];
    for (i=1;i<=m;i++)
    {
        scanf("%d%d%d",&l[i],&r[i],&c[i]);
        c[i]=-c[i];
    }
    qs(l,r,1,n);
    double f[10001]; //最右的区间
    int j
    for (i=1;i<=m;i--)
    {
        for (j=n;j>=r[i];j--)
        {

        }
    }
}
