#include<stdio.h>
int main(){
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){t=a;a=b;b=t;} //执行完毕后a<=b  语句作用如果a>b的话交换位置
    if(a>c){t=a;a=c;c=t;}
    if(b>c){t=b;b=c;c=t;} 
    printf("%d %d %d",a,b,c);
    return 0;
}
