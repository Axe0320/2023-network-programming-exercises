#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct SecretNumbers
{
	int num[3];
	int hit;
	int ball;
}s;

struct PredictNumbers
{
	int num[3];
	int guessCount;
}p;

int main(void)
{
	srand((unsigned int)time(NULL));
	
	int i;
	
	p.guessCount = 0;
	
	s.num[0] = 11;
	s.num[1] = 12;
	s.num[2] = 13;
	
	for( i = 0; i < 3; i++)
	{
		s.num[i] = rand() % 9 + 1;
		
		if(s.num[0] == s.num[1])
		{
			i = i - 1;
		}
		else if(s.num[1] == s.num[2])
		{
			i = i - 1;
		}
		else if(s.num[0] == s.num[2])
		{
			i = i - 1;
		}
	}
	
	while(1)
	{
		printf("Plese predict and ener 3 numbers.\n");
		
		s.hit = 0;
		s.ball = 0;
		
		for( i = 0; i < 3; i++)
		{
			printf("num%d=",i + 1);
			scanf("%d",&p.num[i]);
		}
		
		p.guessCount++;
		
		for( i = 0; i < 3; i++)
		{
			if(s.num[i] == p.num[i])
			{
				s.hit++;
			}
			else if(s.num[i] == p.num[0])
			{
				s.ball++;
			}
			else if(s.num[i] == p.num[1])
			{
				s.ball++;
			}
			else if(s.num[i] == p.num[2])
			{
				s.ball++;
			}
		}
		
		if(s.hit == 3)
		{
			printf("Congratulations! You guessed all the numbers in %d attempts.\n",p.guessCount);
			
			break;
		}
		else
		{
			printf("hit=%d,ball=%d\n\n",s.hit,s.ball);
		}
	}
	return 0;
}