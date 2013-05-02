#include <stdio.h>
int main()
{
    int a[301][301]={0};  a[0][0]=-1;
    int n;
    int nn;
   scanf("%d",&n);
    if (n==1) {

        scanf("%d",&nn);
         if (nn!=0){printf("%s\n","BitLGM");}
            else {printf("%s\n","BitAryo");}
    }
   if (n==2) {
    int c1,c2;
    scanf("%d%d",&c1,&c2);
    int i,j;
    for (i=0;i<=c1;i++)
        for (j=0;j<=c2;j++)
            {
                int bo=0;
                int uper;
                if (c1>c2) {uper=c1;}
                else {uper=c2;}
                int k;
                for (k=uper;k>=1;k--)
                {
                    if ((k<=i)&&(a[i-k][j]==0)) {bo=1;break;}
                    if ((k<=j)&&(a[i][j-k]==0)) {bo=1;break;}
                    if ((k<=i)&&(k<=j)&&(a[i-k][j-k]==0)) {bo=1;break;}
                }
                if (bo==1){a[i][j]=1;a[j][i]=1;}
                else {a[i][j]=0;a[j][i]=0;}
            }

            if (a[c1][c2]==1){printf("%s\n","BitLGM");}
            else {printf("%s\n","BitAryo");}


    }
   if (n==3)
    {
    int c1,c2,c3;
    scanf("%d%d%d",&c1,&c2,&c3);
    if (((c1^c2)^c3)!=0) {printf("%s\n","BitLGM");}
    else {printf("%s\n","BitAryo");}
    }
    return 0;
}
