#include <stdio.h>

int main(void)
{
	FILE *fp;
	int i,j;
	char data[64][49];
	
	fp = fopen("ascii_art.txt","r");
	if( fp == NULL)
	{
		fprintf(stderr,"Cannot open file\n");
		return -1;
	}
	
	for (j = 0; j < 49; j++)
	{
		for (i = 0; i < 64; i++)
		{
			data[i][j] = fgetc(fp);
			printf("%c",data[i][j]);
		}
		
		printf("\n");
	}
	
	fclose(fp);
	
	return 0;
}