#include <stdio.h>

struct gakusei
{
	int gakuban;
	int math;
	int eng;
	int phy;
	float heikin;
};

int Bsearch( struct gakusei ns_2nen[], int n );
void output( struct gakusei ns_2nen[], int ans );

int main(void)
{
	struct gakusei ns_2nen[20];
	
	int i,n,ans;	
	
	
	FILE *fp;
	
	fp = fopen("gakusei.txt","r");
	if(fp == NULL)
	{
		fprintf(stderr, "File Error\n");
		return -1;
	}
	
	for( i = 0 ; i < 20 ; i++ )
	{
		fscanf(fp, "%d", &ns_2nen[i].gakuban);
		fscanf(fp, "%d", &ns_2nen[i].math);
		fscanf(fp, "%d", &ns_2nen[i].eng);
		fscanf(fp, "%d", &ns_2nen[i].phy);
		
		ns_2nen[i].heikin = (float)(ns_2nen[i].math + ns_2nen[i].eng + ns_2nen[i].phy) / 3.0;
	}
	
	
	printf("Search Gakuban?:");
	scanf("%d", &n);
	
	ans = Bsearch( ns_2nen, n );
	
	output( ns_2nen, ans );
	
	fclose(fp);
	
	return 0;
}

int Bsearch( struct gakusei ns_2nen[], int n )
{
	int left,right,m;
	
	left = 0;
	right = 19;
	
	while( left <= right)
	{
		m = (left + right) / 2;
		
		if( ns_2nen[m].gakuban == n)
		{
			return m;
		}
		else if( ns_2nen[m].gakuban < n) 
		{
			left =  m + 1;
		}
		else
		{
			right = m - 1;
		}
	}
	
	return -1;
}

void output( struct gakusei ns_2nen[], int ans )
{
	if( ans == -1 )
	{
		printf("Not Found.\n");
	}
	else
	{
		printf("Average = %f\n", ns_2nen[ans].heikin);
	}
}