#include <stdio.h>
#include <math.h>

void hensachi(double data []);

int main(void)
{
	double data [] = {59, 72, 98, 77, 85, 86, 34, 84, 61, 45};
	
	hensachi(data);
	
	return 0;
}

void hensachi(double data [])
{
	double average,sum,deviation,ans;
	int i;
	
	sum = data[0];
	
	for( i = 1; i < 10; i++)
	{
		sum = sum + data[i];
	}
	
	average = sum / 10;
	
	deviation = 0;
	
	for( i = 0; i < 10; i++)
	{
		deviation = (data[i] - average) * (data[i] - average) + deviation;
	}
	
	deviation = deviation / 10;
	
	deviation = sqrt(deviation);
	
	for( i= 0; i < 10; i++)
	{
		data[i] = (data[i] - average) / deviation * 10 + 50;
		
		if( i == 0)
		{
			printf("The deviation value of the %dst person is %lf\n",i+1,data[i]);
		}
		
		else if( i == 1)
		{
			printf("The deviation value of the %dnd person is %lf\n",i+1,data[i]);
		}
		
		else if( i == 2)
		{
			printf("The deviation value of the %drd person is %lf\n",i+1,data[i]);
		}
		
		else
		{
			printf("The deviation value of the %dth person is %lf\n",i+1,data[i]);
		}
	}
}
