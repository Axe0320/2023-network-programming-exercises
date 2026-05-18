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
	int i,j,n;
	
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
		for( j = size - 1; i < j ; j-- )
		{
			if( data[j] < data[j-1])
			{
				n = data[j];
				data[j] = data[j-1];
				data[j-1] = n;
			}
		}
	}
	
	printf("実行後 : ");
	output( data, size ); /* ソート後の状態を表示 */
	
	return 0;
}