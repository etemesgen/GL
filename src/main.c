//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <stdio.h>
#include <math.h>
#include "stdlib.h"
#include <TP_lib.h>

int main(void)
{
	short int LancerDe (void);
	short a;
	long joueur = 0;
	
	do {
		a = LancerDe();
		
		if (a == 2)
			joueur = joueur + 2;
		else if (a == 4)
			joueur = joueur + 4;
		else if (a == 6)
			joueur = joueur + 6;
		else if (a == 3)
			joueur = joueur * 2;
		else if (a == 5)
			joueur = joueur - 2;
	}
	
	while (a!= 1);
	
	return 0;
}
	
		
		
		
			
			
		
	
