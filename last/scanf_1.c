#include<stdio.h>
#include<math.h>


int main(){
    const double pi = acos(-1.0);
    double a,b,s1,s2,s;
    scanf("%lf%lf",&a,&b);
    s1 = pi*a*a;
    s2 = 2*pi*a*b;
    s = 2*s1+s2;
    printf("Area = %.3f\n",s);
    return 0;
}