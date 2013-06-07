#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int num1=0,num0=0;
    int i;
    for (i=1;i<=n;i++)
    {
        int k;
        scanf("%d",&k);
        if (k==1){num1++;}
        else {num0++;}
    }
    int minnum;
    if (num1<num0) {minnum=2*num1;}
        else {minnum=2*num0;}
    for (i=1;i<=m;i++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        if ((r-l+1)%2!=0) {printf("0\n");continue;}
        else {
                if ((r-l+1)<=minnum)
                {
                    printf("1\n");continue;
                }
                else
                {
                    printf("0\n");continue;
                }
        }
    }
    return 0;
}
