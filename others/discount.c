#include<stdio.h>

int main(){
    double b,sum;
    scanf("%lf",&b);
    sum = b*95;
    if(sum>=300){
        sum*=0.85;
    }
    printf("sum: %lf",sum);
}