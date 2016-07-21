#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	x&=0001;
	x>0?printf("odd"):printf("even");
	return 0 ;
}
