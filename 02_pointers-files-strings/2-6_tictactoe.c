#include <stdio.h>
#include <string.h>



int main(void)
{
	FILE *fp;
	int i,j,n,row,col,win;
	char G[4][9];
	
	fp = fopen("grid.txt","r");
	if( fp == NULL)
	{
		fprintf(stderr,"Cannot open file\n");
		return -1;
	}
	
	for (j = 0; j < 4; j++)
	{
		for (i = 0; i < 9; i++)
		{
			G[j][i] = fgetc(fp);
			printf("%c",G[j][i]);
		}
	}
	
	
	n = 0;
	win = 0;
	
	while(n != 9)
	{
		printf("Where?\n");
		row = 0;
		col = 0;
		
		while (row == 0 )
		{
			row = 0;
			col = 0;
			
			printf("#row? =");
			scanf("%d",&row);
			
			if(row > 3)
			{
				row = 0;
				col = 10;
				printf("Cannot be placed there!\n");
			}
			else if(row < 1)
			{
				row = 0;
				col = 10;
				printf("Cannot be placed there!\n");
			}
			
			while (col == 0 )
			{
				printf("#col? =");
				scanf("%d",&col);
				
				if(col > 3)
				{
					col = 0;
					printf("Cannot be placed there!\n");
				}
				else if(col < 1)
				{
					printf("Cannot be placed there!\n");
				}
			}
				
			if( G[row][col * 2] != '_')
			{
				printf("Cannot be placed there!\n");
				row = 0;
				col = 0;
			}
		}
		
		if( n % 2 == 0)
		{
			G[row][col * 2] = 'O';
		}
		else
		{
			G[row][col * 2] = 'X';
		}
		
		for (j = 0; j < 4; j++)
		{
			for (i = 0; i < 9; i++)
			{
				printf("%c",G[j][i]);
			}
		}
		

		
		for (j = 1; j < 4; j++)
		{
			if(G[j][2] == G[j][4])
			{
				if(G[j][4] == G[j][6])
				{
					if(G[j][2] == 'O')
					{
						win = 1;
						break;
					}
					else if(G[j][2] == 'X')
					{
						win = 2;
						break;
					}
				}
			}
		}
		
		
		for (i = 2; i < 9; i++)
		{
			if(G[1][i] == G[2][i])
			{
				if(G[2][i] == G[3][i])
				{
					if(G[1][i] == 'O')
					{
						win = 1;
						break;
					}
					else if(G[1][i] == 'X')
					{
						win = 2;
						break;
					}
				}
			}
		}
		
		if(G[1][2] == G[2][4])
		{
			if(G[2][4] == G[3][6])
			{
				if(G[1][2] == 'O')
				{
					win = 1;
				}
				else if(G[1][2] == 'X')
				{
					win = 2;
				}
			}	
		}
		
		if(G[1][6] == G[2][4])
		{
			if(G[2][4] == G[3][2])
			{
				if(G[1][6] == 'O')
				{
					win = 1;
				}
				else if(G[1][6] == 'X')
				{
					win = 2;
				}
			}	
		}
		
		
		if (win == 1)
		{
			printf("The Winner is 0!\n");
			break;
		}
		else if (win == 2)
		{
			printf("The Winner is X!\n");
			break;
		}
		
		n = n + 1;
		}
		
	if (n == 9)
	{
		printf("Draw!\n");
	}
	
	fclose(fp);
	
	return 0;
}


