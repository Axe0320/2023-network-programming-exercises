#include <stdio.h>

int mymax(int data[]);

int main(void)
{
	int data[10];
	int i,ans;
	
	printf("Please enter 10 integers\n");
	
	for( i = 0; i < 10; i++)
	{	
		printf("(%d)",i+1);
		scanf("%d",&data[i]);
	}
	
	ans = mymax(data);
	
	printf("\nThe maximum nunber is %d\n",ans);
	
	return 0;
}

int mymax(int data[])
{
	int maximum,j;
	
	maximum = data[0];
	
	for( j = 1; j < 10; j++)
	{
		if(data[j] > maximum)
		{
			maximum = data[j];
		}
	}
	
	return maximum;
}
