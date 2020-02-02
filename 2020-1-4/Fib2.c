#include<stdio.h>
int Fib2(int n)
{
	if(n<1)
		return -1;
	int a[n];
	a[1]=1;
	a[2]=1;
	for(int i=3;i<=n;i++)
		a[i]=a[i-1]+a[i-2];
	return a[n];
}
int Fib3(int n)
{
	if(n<1)
		return -1;
	if(n==1||n==2)
		return 1;
	int s1=1;
	int s2=1;
	for(int i=3;i<=n;i++)
	{
		s2=s1+s2;
		s1=s2-s1;
	}
	return s2;
}
int main(){
	int y = Fib3(5);
	int x = Fib2(5);
	printf("%d=======%d\n",x,y);
	return 0;
}

