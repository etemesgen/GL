#include <math.h>
#include "stdlib.h"

#define RAND_MAX 32767

int main(void)
{
	int n = 1;
	long s1 = 0;
	int a = ((rand())%10)+1;
	int e = 0;
	int som = 0;
	
	int b = 0;
	int c = 1;
	int mul = 0;
	
	while (s1 < 9876)
	{
		s1 = s1 + 3 * n;
		n = n+1;
	}
	
	while (e < 12)
	{
		som = som + a;
		e = e+1;
		a = ((rand()%10)+1);
	}
		 
	while (b < 20)
	{
		if (c%3 == 0 || c%7 == 0)
		{
			mul = mul + c;
			c = c+1;
			b = b+1;
		}
		else
			c = c+1;
	}
	
	return 0;
}	
