# include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        printf("yes\n");
    }
    else     
    {
        printf("not a triangle\n");
    }
    
    
    return 0;
} 