#include<stdio.h>
int fac(int n)
{
	if(n<0)
	{
		printf("n<0,data error!");
		return -1;
	}
	else if (n==0||n==1)
		return 1;
	else
		return n*fac(n-1)+fac(n-2);
}
int main()
{
	int x=0;
	int m=0;
	scanf("%d",&m);
	x=fac(m);
	printf("%d\n",x);
	return 0;
}
