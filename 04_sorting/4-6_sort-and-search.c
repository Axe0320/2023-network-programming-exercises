#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

/* 関数のプロトタイプ宣言 */
void output( int data[], int size );
int Bsearch( int data[], int size, int n );
void output2( int n, int ans );

int main(void)
{
	int data[SIZE];
	int size = SIZE;
	int i,j,k,l,n,min;
	int ans;
	
	srand((unsigned int)time(NULL));
	
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
		
		l = data[i];
		data[i] = data[k];
		data[k] = l;
	}
	
	printf("実行後 : ");
	output( data, size ); /* ソート後の状態を表示 */
	
	printf("Search Number?:");
	scanf("%d", &n);
	
	/* 二分探索を行うBsearch関数を呼び出し */
	ans = Bsearch( data, size, n );
	
	output2( n, ans );
	
	return 0;
}

void output( int data[], int size )
{
	int i;
	
	for( i = 0; i < size ; i++ )
	{
		printf("%d ", data[i]);
	}
	
	printf("\n");
}

int Bsearch( int data[], int size, int n )
{
	int left,right,m;
	
	left = 0;
	right = size - 1;
	
	while( left <= right)
	{
		m = (left + right) / 2;
		
		if( data[m] == n)
		{
			return m;
		}
		else if( data[m] < n) 
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

void output2( int n, int ans )
{
	if( ans == -1 )
	{ /* 見つからなかったら-1 */
		printf("%d is not found.\n", n);
	}
	else
	{ /* 見つかったら配列の番号 */
		printf("%d is found in data[%d].\n", n, ans);
	}
}