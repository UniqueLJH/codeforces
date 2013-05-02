#include<stdio.h>
int main()
{
    int n;
    long long x[10010]={0};
    long long d[10010]={0};
    long long wen[10010]={0};
    char a[10010],b[10010];
    scanf("%d",&n);
    char c;
    scanf("%c",&c);
    long long i;
    for (i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
     scanf("%c",&c);
      for (i=0;i<n;i++)
    {
        scanf("%c",&b[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]=='?'){wen[i]++;}
        if (b[i]=='?') {wen[i]++;}

    }
    for (i=0;i<n;i++)
    {
        if ((a[i]=='?')&&(b[i]=='?')) {d[i]=55;x[i]=55;}
        if ((a[i]=='?')&&(b[i]!='?')) {d[i]='9'-b[i];x[i]==b[i]-'0';}
        if ((a[i]!='?')&&(b[i]=='?')) {d[i]=a[i]-'0';x[i]=='9'-b[i];}
        if ((a[i]!='?')&&(b[i]!='?')) {if (a[i]>b[i]){d[i]=1;}
                                                    else {x[i]=1;}
                                        }
    }
    long long al=1,cantd=1,cantx=1,cantde=1;
     for (i=0;i<n;i++)
    {
        if (wen[i]==1) {al*=10;al=al%1000000007;
        }
        if (wen[i]==2) {al*=100;al=al%1000000007;
        cantde*=10;cantde=cantde%1000000007;}

    }
    for (i=0;i<n;i++)
    {
        cantd*=d[i];cantd=cantd%1000000007;
        cantx*=x[i];cantx=cantx%1000000007;
    }



    int can=al-cantd-cantx;
    if (cantd*cantx!=0){can+=cantde;}
    while (can<0)
    {
        can+=1000000007;
    }

    printf("%d\n",can);
    return 0;


}
