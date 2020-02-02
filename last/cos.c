#include<stdio.h>
#include<math.h> 

int main(){
    const double pi = acos(-1.0);
    double  a; 
    scanf("%lf",&a);  //弧度数/π=角度值/180
    double x = cos((a*pi)/180);
    double y = sin((a*pi)/180);     
    printf("%lf %lf\n",x,y);
    return 0;  
} 
// //P16 习题1-4 正弦和余弦
// /*三角函数
// double sin (double);
// double cos (double);
// double tan (double); */
// #include <stdio.h>
// #include <math.h>
// #define PI acos(-1.0)//?

// int n;//n:输入的正整数(n<360)
// double s,c;//s:n的sin值,c:n的cos值 
// int main()
// {
//     scanf("%d",&n);
    
//     s=sin((PI*n)/180);
//     c=cos((PI*n)/180);
    
//     printf("%lf %lf",s,c);
    
//     return 0;
// }