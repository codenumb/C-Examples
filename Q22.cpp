#include<stdio.h>
int main()
{
	int num,temp=0;
	scanf("%d",&num);
	num&=0001;
	if(num==1)
	printf("LSB is set");
	else
	printf("LSB is not set");
	return 0;
}
