#include<stdio.h>

int main(){
   int n,m,chicken,rabbit;
   scanf("%d%d",&n,&m);
   rabbit = (4*n-m)/2;
   chicken = m-rabbit;
   if(m%2==1||rabbit<0||chicken<0)
   {
       printf("No answer\n");
   }
   else
   {
    printf("���������ǣ�%d ���ӵ������ǣ�%d\n",chicken,rabbit);    
   }
   return 0;
}