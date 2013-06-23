#include<stdio.h>
#include<string.h>
int main()
{
    char s[100010];
    char ch;
    scanf("%c",&ch);
    int i=0;
    while (ch=='.'||ch=='#')
    {
        s[i]=ch;
        i++;
        scanf("%c",&ch);
    }
    s[i]='\0';
    int a[100010]={0};
    a[0]=0;
    for (i=1;i<strlen(s);i++)
    {
        if (s[i]==s[i-1]){a[i]=a[i-1]+1;}
        else {a[i]=a[i-1];}
    }
   // for (i=0;i<strlen(s);i++)
//   {
  //      printf("%d",a[i]);
  //  }
    int n;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        int b,c;
        scanf("%d%d",&b,&c);
        printf("%d\n",a[c-1]-a[b-1]);

    }
    return 0;
}
