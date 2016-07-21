#include<stdio.h>
int main()
{
	int num,temp;
	scanf("%d",&num);
	temp=num;
	num&=0x0f;temp&=0xf0;
	printf("flipped number=%d",(num<<4)|(temp>>4));
	return 0;
}
