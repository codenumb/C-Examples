#include<stdio.h>
int main()
{
	char num[8];int pos;int i=0,temp;
	printf("enter the binary bi_numb\n");
	scanf("%s",&num);
	printf("enter the pos\n");
	scanf("%d",&pos);
	pos--;
	temp=!(num[pos]-48);
	num[pos]=temp+48;
		printf("%s",num);
return 0;
}

