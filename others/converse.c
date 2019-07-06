#include<stdio.h>


int main(){
   int n,m;
   scanf("%d",&n);
   m = (n%10)*100+(n/10%10)*10+(n/100);
   printf("%03d\n",m); //%03d可以指定宽度，不足的左边补空格
   return 0;
}