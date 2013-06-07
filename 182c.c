#include<stdio.h>
#include<stdlib.h>
int    cmp(const void *a,const void *b)
{
    return (*(int *)a-*(int *)b);
}
int main()
{
    int num=0;
    int     sum=0;
    int n;
    int i;
    int a[1001];
    scanf("%d",&n);
    n=2*n-1;
    for (i=0;i<n;i++)
        {scanf("%d",&a[i]);
        if (a[i]<0){num++;a[i]=-a[i];}
        sum+=a[i];
        }
    qsort(a,n,sizeof(a[0]),cmp);
    // for (i=0;i<n;i++)
      //  printf("%d ",a[i]);
    printf("%d",sum-2*(num%2)*a[0]);
    return 0;
}
