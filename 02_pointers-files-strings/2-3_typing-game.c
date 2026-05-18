#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	char typing[8];
	char data[6][8] = {"apple", "banana", "orange", "lemon", "peach", "melon"};
	int i, n, answer;
	srand((unsigned int)time(NULL));
	
	for(i = 0; i < 3; i++)
	{
		n = rand() % 6;
		
		printf("%s\n",data[n]);
		answer = 1;
		
		while(answer != 0)
		{
			printf("Plese enter the same word.\n");
			scanf("%s",typing);
			
			answer = strcmp(typing, data[n]);
			
			if(answer == 0)
			{
				printf("OK\n");
			}
			else
			{
				printf("MISS\n");
			}
		}
	}
	
	printf("SUCCESS\n");
	return 0;
}