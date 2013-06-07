#include<stdio.h>
void main()
{
	int a[11],*pa,i,t,s;
	for(i=0;i<9;i++)
	{
		a[i]=10*(i+1);
	}
	a[9]=99;
	printf("please input a number:s=");
	scanf("%d",&s);
	t=s;
	pa=a;
	if(t<a[9])
	{
	  for(i=0;a[i]<t&&a[i+1]>t&&i<10;i++)
	  {
		  *(pa+i+1)=t;
		 while(i<9)
		 {
		    *(pa+i+2)=a[i+1];
		    i++;
		}
	  }
	}
	else
	{
		*(pa+10)=t;
	}
	for(i=0;i<11;i++)
	{
	  printf("%d\n",*(pa+i));
	}
}
