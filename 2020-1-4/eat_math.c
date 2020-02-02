#include<stdio.h>
int main()
{
	int x,y,z;
	for(int x=1;x<=9;x++)
	{
		y=20-2*x;
		z=50-2*y-3*x;
		if(x+y+z==30)
		{
			printf("x=%d,y=%d,z=%d\n",x,y,z);
		}
	}
}
