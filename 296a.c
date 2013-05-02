#include<stdio.h>
int main()
{
    int n;
int     a[1100]={0};
    scanf("%d",&n);
    int i;
    for (i=1;i<=n;i++)
    {
        int temp;
        scanf("%d",&temp);
        a[temp]++;
    }
    int maxnum=0;
    for (i=1;i<=1000;i++)
    {
        if (maxnum<a[i])
        {
            maxnum=a[i];
        }
    }
    if (n==1) {printf("YES\n");return 0;}
    int k;
    k=(int)n/2+n%2;
    if (maxnum<=k) {printf("YES\n");}
    else {printf("NO\n");}
    return 0;
}
