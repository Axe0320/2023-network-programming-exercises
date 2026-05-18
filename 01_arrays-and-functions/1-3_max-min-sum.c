#include <stdio.h>

int mymax(int data[]);
int mymin(int data[]);
int mysum(int data[]);

int main(void)
{
	int data[10];
	int i,ansmax,ansmin,anssum;
	
	printf("Please enter 10 integers\n");
	
	for( i = 0; i < 10; i++)
	{	
		printf("(%d)",i+1);
		scanf("%d",&data[i]);
	}
	
	ansmax = mymax(data);
	ansmin = mymin(data);
	anssum = mysum(data);
	
	printf("\nThe maximum nunber is %d\n",ansmax);
	printf("\nThe minimum nunber is %d\n",ansmin);
	printf("\nThe sum of 10 nunber is %d\n",anssum);
	
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

int mymin(int data[])
{
	int minimum,k;
	
	minimum = data[0];
	
	for( k = 1; k < 10; k++)
	{
		if(data[k] < minimum)
		{
			minimum = data[k];
		}
	}
	
	return minimum;
}

int mysum(int data[])
{
	int sum,l;
	
	sum = data[0];
	
	for( l = 1; l < 10; l++)
	{
		sum = sum + data[l];
	}
	
	return sum;
}

