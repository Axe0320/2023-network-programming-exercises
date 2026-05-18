#include <stdio.h>
#include <stdlib.h>

int fortune();

int main(void)
{
	int lack;
	
	lack = fortune();
	
   if( lack == 0 )
   {
      printf("Worst luck\n");
   }
   else if( lack == 1 )
   {
      printf("Bad luck\n");
   }
   else if( lack == 2 )
   {
      printf("Good luck\n");
   }
   else if( lack == 3 )
   {
      printf("Better luck\n");
   }
   else
   {
      printf("Excellent luck\n");
   }
   
   return 0;
}

int fortune()
{
	unsigned int seed;
	int t,n;
	
	printf("Seed? = ");
	scanf("%d", &seed);
	srand(seed);
	
	n = rand() % 1000 + 1;
		
   if( n < 136 )
   {
      t = 0;
   }
   else if( n < 351 )
   {
      t = 1;
   }
   else if( n < 651 )
   {
      t = 2;
   }
   else if( n < 866 )
   {
      t = 3;
   }
   else
   {
      t = 4;
   }
   
   return t;
}