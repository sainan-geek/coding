#include<stdio.h>
int main()
{
	for(int x = 1; ;x++)
	{
		int n = x*x;
		if(n < 1000) continue;
		if(n > 9999) break;
		int high = n / 100;
		int low  = n % 100;
		if(high%10 == high/10 && low%10 == low/10)
			printf("%d\n",n);
	}
	return 0;

}
