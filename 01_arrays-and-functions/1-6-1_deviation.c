#include <stdio.h>
#include <math.h>

double hensachi(double data []);

int main(void)
{
	double data [] = {59, 72, 98, 77, 85, 86, 34, 84, 61, 45};
	double ans;
	
	ans = hensachi(data);
	
	return 0;
}

double hensachi(double data [])
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
	
		printf("%d人目の生徒の偏差値は %lfです\n",i+1,data[i]);
	}
}