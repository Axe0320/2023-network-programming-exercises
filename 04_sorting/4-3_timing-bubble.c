/* measure.c */

#include <stdio.h>
#include <time.h>

int main(void)
{
	unsigned long int start; /* 実行前の時間（ミリ秒）*/
	unsigned long int end; /* 実行後の時間（ミリ秒）*/
	unsigned long int elapsed; /* 実行時間（ミリ秒）*/
	int data[5000];
	int i,j,n,x;
	
	int size = sizeof data / sizeof data [0];
	
	printf("Bubble sorting\n");
	
	for( x = 0 ; x < 10 ; x++)
	{
		if( x == 0)
		{
			printf("%dst\n", x+1);
		}
		else if( x == 1)
		{
			printf("%dnd\n", x+1);
		}
		else if( x == 2)
		{
			printf("%drd\n", x+1);
		}
		else
		{
			printf("%dth\n", x+1);
		}
		
		for( i = 0 ; i < size ; i++)
		{
			data[i] = size - i;
		}
		
		start = clock(); /* 処理前の時間を取得 */
		
		/* **** ここにソーティングの処理を記述する **** */
		
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
		
		/* **** 入出力処理の時間を含めないように注意 **** */
		
		end = clock(); /* 処理後の時間を取得 */
		elapsed = end - start; /* 実行時間算出 */
		
		/* 計測結果の出力 */
		printf("START TIME: %lu\n", start);
		printf("END TIME: %lu\n", end);
		printf("ELAPSED TIME: %lu\n", elapsed);
		
		printf("\n");
	}
	
	return 0;
} 