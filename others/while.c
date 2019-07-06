#include<stdio.h>

int main(){
    int n1,count=0;
    scanf("%d",&n1);
    long long n = n1;
    while (n>1)
    {
        if(n%2==1)n=n*3+1;
        else n=n/2;
        //printf("%d\n",n);
        count++;
    }
    printf("count:%d",count);
    return 0;
}