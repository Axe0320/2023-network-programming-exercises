#include <stdio.h>

int main(void)
{
	int year;
	
	printf("西暦を入力してください\n");
	
	scanf("%d",&year);
	
	if(year%4 == 0)
	{
		if(year%100 == 0)
		{
			if(year%400 == 0)
			{
				printf("%d->うるう年です\n",year);
			}
			
			else
			{
				printf("%d->うるう年ではありません\n",year);
			}
		}
		
		else
		{
			printf("%d->うるう年です\n",year);
		}
	}
		
	else
	{
		printf("%d->うるう年ではありません\n",year);
	}
	
	return 0;
}
		