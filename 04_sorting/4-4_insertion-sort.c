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
	int i,j,tmp;
	
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
	
	for( i = 1; i < size ; i++ )
		{
			tmp = data[i];
			
			for( j = i - 1; 0 <= j ; j-- )
			{
				if( tmp < data[j] )
				{
					data[j+1] = data[j];
				}
				else
				{
					break;
				}
				
			}
			
			data[j+1] = tmp;
		}
	
	printf("実行後 : ");
	output( data, size ); /* ソート後の状態を表示 */
	
	return 0;
}