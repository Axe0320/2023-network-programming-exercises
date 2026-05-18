#include <stdio.h>
#include <stdlib.h>

double mymean(int n,double data[]);

int main(void)
{
	FILE *fp;
	int i,n;
	double *data;
	char num[32];
	double mean;
	
	fp = fopen("data.txt","r");
	if( fp == NULL)
	{
		fprintf(stderr,"Cannot open file\n");
		return -1;
	}
	
	fscanf(fp,"%s",num);
	
	n = atoi(num);
	
	data = (double *)malloc(sizeof(double)*n);
	
	for( i = 0; i < n ; i++ )
	{
		fscanf(fp,"%s",num);
		
		data[i] = atof(num);
	}
	
	mean = mymean(n,data);
	
	printf("Average = %lf\n",mean);
	
	fclose(fp);
	
	free(data);
	
	return 0;
}

double mymean(int n,double data[])
{
	double sum,ans;
	int s;
	
	sum  = 0.0;
	
	for (s = 0; s < n; s++)
	{
		sum = sum + data[s];
	}
	
	ans = sum / (double)n;
	
	return ans;
}
	
	
	
	