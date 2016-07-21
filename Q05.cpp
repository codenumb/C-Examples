#include<stdio.h>
#include<math.h>
int main ()
{
	char a[10];int i,count=-1,power=-1,dec=0;
	scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    	count++;
    for(;count>=0;count--)
    {   power++; 
    	switch(a[count])
    	{
    		case 'a':			
    		dec+=10*pow(16,power);
         	break;
         	case 'A':			
    		dec+=10*pow(16,power);
         	break;
         	case 'b':			
    		dec+=11*pow(16,power);
         	break;
         	case 'B':			
    		dec+=11*pow(16,power);
         	break;
         	case 'c':			
    		dec+=12*pow(16,power);
         	break;
         	case 'C':			
    		dec+=12*pow(16,power);
         	break;
         	case 'd':			
    		dec+=13*pow(16,power);
         	break;
         	case 'D':			
    		dec+=13*pow(16,power);
         	break;
         	case 'e':			
    		dec+=14*pow(16,power);
         	break;
			case 'E':			
    		dec+=14*pow(16,power);
         	break;
			case 'f':			
    		dec+=15*pow(16,power);
         	break;
         	case 'F':			
    		dec+=15*pow(16,power);
         	break;
         	default:
         	dec+=(a[count]-48)*pow(16,power);//  -48 from ascii table 
         	break;
		}
	}
	printf("DEC=%d",dec);
return 0;
}
