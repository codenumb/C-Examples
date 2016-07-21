#include<stdio.h>
int main()
{
	int num,n;
	printf("enter number and bit\n");
	scanf("%d %d",&num,&n);
	num>>=n-1;
	num&=0x01;
	printf("%dth bit=%d",n,num);
	return 0;
}
