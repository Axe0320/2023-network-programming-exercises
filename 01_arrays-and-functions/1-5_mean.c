#include <stdio.h>

double mymean(double data []);

int main(void)
{
	double ans;
	double data [] = {38.1, 14.2, 51.3, 5.4, 12.5, 39.6, 27.7, 19.8, 81.9, 62.1};
	
	ans = mymean(data);
	
	printf("平均値は%lfです\n",ans);
	return 0;
}

double mymean(double data [])
{
	double average,sum;
	int i;
	
	sum = data[0];
	
	for( i = 1; i < 10; i++)
	{
		sum = sum + data[i];
	}
	
	average = sum / 10;
	
	return average;
}


