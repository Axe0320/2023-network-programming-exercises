#include <stdio.h>

void swap(int *v1, int *v2){
 int tmp;
 
 tmp = *v1;
 *v1 = *v2;
 *v2 = tmp;
}

int main(void) {
 int a, b; /* 交換する2つの整数*/

 printf("a?:");
 scanf("%d",&a);
 printf("b?:");
 scanf("%d",&b);

 printf("[Before] a=%d, b=%d\n", a, b); /* 交換前のa,bを出力*/
 swap(&a, &b);
 printf("[After] a=%d, b=%d\n", a, b); /* 交換後のa,bを出力*/

 return 0;
}