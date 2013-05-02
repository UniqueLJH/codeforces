#include <stdio.h>
int fun(int x,int p)
{
    int num[3000]={0};
    num[0]=0;
    int ii;
    for (ii=1;ii<=p-2;ii++)
    {
        num[ii]=((num[ii-1]+1)*x-1)%p;

         if (num[ii]==0) {return 0;}
    }

    if (((num[p-2]+1)*x-1)%p==0) {return 1;}
    else {return 0;}
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int totol=0;
    for (i=1;i<n;i++)
    {
        //printf("%d %d\n",i,fun(i,n));
        totol+=fun(i,n);
    }
    printf("%d\n",totol);
    return 0;
}
