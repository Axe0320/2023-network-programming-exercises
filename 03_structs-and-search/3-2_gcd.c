#include <stdio.h>

int main(void)
{
	int a,b,r;
	
	printf("a=");
	scanf("%d",&a);
	
	printf("b=");
	scanf("%d",&b);
	
	if( a < b)
	{
		printf("Error\n");
		
		return -1;
	}
	
	r = a % b;
	
	while(1)
	{
		if( r != 0)
		{
			a = b;
			b = r;
			r = a % b;
		}
		else
		{
			break;
		}
	}
	
	printf("最大公約数=%d\n",b);
	
	return 0;
}