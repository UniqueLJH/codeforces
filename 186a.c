#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[1000];
    scanf("%s",&a);
    if (a[0]!='-'){printf("%s\n",a);return 0;}
    char b[1000],c[1000];
    strncpy(b,a,strlen(a)-1);
    b[strlen(a)-1]='\0';
    strncpy(c,a,strlen(a)-2);
    c[strlen(a)-2]=a[strlen(a)-1];
    c[strlen(a)-1]='\0';
    if (atoi(b)>atoi(c)){printf("%d\n",atoi(b));}
    else {printf("%d\n",atoi(c));}


}
