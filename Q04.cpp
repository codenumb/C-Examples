#include<stdio.h>
int main ()
{
	int a,b;char c;
	printf("type here\n");
	scanf("%d%c%d",&a,&c,&b);
	switch(c)
	{
		case '+':
			printf("%d%c%d=%d",a,c,b,a+b);
			break;
		case '-':
			printf("%d%c%d=%d",a,c,b,a-b);
			break;
		case '*':
			printf("%d%c%d=%d",a,c,b,a*b);
			break;
		case '/':
			printf("%d%c%d=%d",a,c,b,a/b);
			break;
		default:
			printf("invalid operator");
			break;
	}
}
