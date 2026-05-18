/* sort_template.c */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void output( int data[], int size )
{
	int i;
	
	for( i = 0; i < size ; i++ )
	{
		printf("%d ", data[i]);
	}
	
	printf("\n");
}

int main(void)
{
	int data[SIZE];
	int size = SIZE;
	int seed;
	int i,j,k,n,min;
	
	printf("Seed?=");
	scanf("%d", &seed);
	srand(seed);
	
	for( i = 0; i < size ; i++ )
	{
		data[i] = rand()%100+1;
	}
	
	printf("実行前 : ");
	output( data, size ); /* 初期状態を表示 */
	
	/* *** この位置にソート処理を記述する *** */
	for( i = 0; i < size - 1 ; i++ )
	{
		min = data[i];
		k = i;
		
		for( j = i + 1; j < size ; j++ )
		{
			if( data[j] < min)
			{
				min = data[j];
				k = j;
			}
		}
		
		n = data[i];
		data[i] = data[k];
		data[k] = n;
	}
	
	printf("実行後 : ");
	output( data, size ); /* ソート後の状態を表示 */
	
	return 0;
}