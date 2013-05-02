#include<stdio.h>
#define K 10
#define N 1000
#define M 1000
long long icld[K][N][M],nicld[K][N][M];
int f[N][M];

{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int i,j,o;
    for (i=1;i<=n;i++)
    for (j=1;j<=m;j++)
    {
        scanf("%d",f[n][m]);
    }

    for (i=1;i<=n;i++)
     for (j=1;j<=m;j++)
     {
         if (f[i][j]==0)
        {
          for (o=1;o<=k;o++)
          {
              icld[o][i][j]=nicld[o][i-1][j]+nicld[o][i][j-1];
          }
        }
     }

}
