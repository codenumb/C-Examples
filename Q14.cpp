#include<stdio.h>
int main()
{
	int x;int i=0;
	int bin[4];
	scanf("%d",&x);
	while(i<4)
	{		
		bin[i++]=(x&0001);
		x>>=1;
	}
	i--;
	while(i>=0)
	printf("%d",bin[i--]);
	return 0;
}
