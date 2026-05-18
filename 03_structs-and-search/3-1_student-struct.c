#include <stdio.h>

struct gakusei
{
	int gakuban;
	int math;
	int eng;
	int phy;
	float heikin;
};


int main(void)
{
	struct gakusei ns_2nen[3];
	
	int i;
	
	for( i = 0; i < 3; i++)
	{
		printf("学生番号=");
		scanf("%d",&ns_2nen[i].gakuban);
		
		printf("数学の点数=");
		scanf("%d",&ns_2nen[i].math);
		
		printf("英語の点数=");
		scanf("%d",&ns_2nen[i].eng);
		
		printf("物理の点数=");
		scanf("%d",&ns_2nen[i].phy);
		
		ns_2nen[i].heikin = (float)(ns_2nen[i].math + ns_2nen[i].eng + ns_2nen[i].phy) / 3.0;
		
		printf("平均=%f\n\n",ns_2nen[i].heikin);
	}
	return 0;
}