#include "my_header.h"
#include "TP_lib_suite.h"


int main (void)
{
	unsigned char combinaison_g[6];
	unsigned char combinaison_j[6] = {48,39,5,17,8,2};
	unsigned char i;
	unsigned char e;
	unsigned char nombres_valeurs = 0;
	unsigned char c;
	unsigned char meilleur_score = 0;
	
	for (c=0; c<100; c++)
	{
	    initialiserTirage();
	
	for (e=0; e<6; e++)
	{
		combinaison_g[e] = tirerNumero();
	}
	
	    for (i=0; i<6; i++)
		{
			for (e=0; e<6; e++)
			{
				if(combinaison_g[i] == combinaison_j[e])
			    {
				    nombres_valeurs = nombres_valeurs + 1;
	            }
			}
			
       }
	   
	   if(meilleur_score < nombres_valeurs)
				{
					meilleur_score = nombres_valeurs;
				}
				
	   			nombres_valeurs = 0;
	}
	
	return 0;
}
