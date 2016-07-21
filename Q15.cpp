#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d%d",&a,&b);
   printf("A=%d B=%d\n",a,b);
   a=a^b;
   b=a^b;
   a=a^b;
   printf("A=%d b=%d",a,b);
   return 0;
}
