#include<stdio.h>
int main()
{
	int num,temp=0;
	scanf("%d",&num);
	num>>=3;
	num&=0001;
	if(num==1)
	printf("MSB is set");
	else
	printf("MSB is not set");
	return 0;
}
