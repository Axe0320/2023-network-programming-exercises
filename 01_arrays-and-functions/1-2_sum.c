#include <stdio.h>

int mysum(int data[]);

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
	
	ans = mysum(data);
	
	printf("\nThe sum of 10 nunber is %d\n",ans);
	
	return 0;
}

int mysum(int data[])
{
	int sum,j;
	
	sum = data[0];
	
	for( j = 1; j < 10; j++)
	{
		sum = sum + data[j];
	}
	
	return sum;
}
