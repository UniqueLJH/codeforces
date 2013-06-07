#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=0,b=0,c=0,d=0;
    int n;
    scanf("%d",&n);
    int i;
    int temp;
    for (i=0;i<n;i++)
    {
        scanf("%d",&temp);
        if (temp==0){d++;}
        if (c==0&&temp>0&&temp<10) {c=temp;}
        if (b==0&&temp<100&&temp>10){b=temp;}
        if (temp%10==0&&temp>0&&temp<100) {b=temp;}
        if (temp==100){a=1;}
    }
    int sum=0;
    if (a>0) sum++;
    if (b>0) sum++;
    if (c>0) sum++;
    if (d>0) sum+=d;
if ((b%10!=0)&&(c>0)) sum--;
printf("%d\n",sum);
for (i=1;i<=d;i++)
{
    printf("0 ");
}
if (a>0) printf("100 ");
if (b>0) printf("%d ",b);
if (c>0&&b%10==0) printf("%d ",c);


}
