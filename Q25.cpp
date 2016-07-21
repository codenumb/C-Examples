#include<stdio.h>
int main()
{
	int num,i=0;
	while(num>0)
	{
		num>>=1;
		i++;
	}
	printf("highest set bit is=%d",i);
	return 0;
}
