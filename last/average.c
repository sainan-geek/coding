# include <stdio.h>
int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    
    double x = (a+b+c)/3; 
    printf("%.3lf\n",x);
    return 0;
} 