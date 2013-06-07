#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    double k=a/b;
    double q1=(b-a)/b;
    double q2=(d-c)/d;
    double q=q1*q2;
    printf("%lf\n",k/(1-q));

}
