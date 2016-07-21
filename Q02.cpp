#include<stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	printf("Max=%d",a);
	else
	printf("Max=%d",b>c?b:c);
	return 0;
}
