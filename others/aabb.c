#include<stdio.h>
#include<math.h>

 int main(){
    //  for (int i = 1; i <= 9; i++)
    //  {
    //      for (int j = 1; j < 9; j++)
    //      {
    //         int n = i*1100+j*11;
    //         int m = floorl(sqrt(n)+0.5);//floorl返回最大不超过x的整数 为了减小误差
    //         if(m*m==n)
    //         printf("%d\n",n);
    //      }
         
    //  }
     //============枚举平方根============//
     for (int x=1;;x++)
     {
         int n = x*x;
         if(n<1000)continue;
         if (n>9999)break;
         int hi = n/100;
         int lo = n%100;
         if(hi/10 == hi%10&&lo/10==lo%10)
         printf("%d\n",n);         
     }
     return 0;
 }