#include<stdio.h>
int main()
{

	while(!(n%2==1&&n%3==2&&n%5==4&&n%6==5&&n%7==0))
		n++;
	printf("%d\n",n);
}
