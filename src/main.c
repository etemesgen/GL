#include <ansi_c.h>


int main(void)
{
	char ligne1[80] =  "nom: triangle_A" ; 
	char ligne2[80] =  "nb points: 3" ; 
	char ligne3[80] =  "cordonnees:   10 20 30 20 30 40 43 53 35 65" ; 
	
	
	char nom_fig[80];
	char nb_points[80];
	char coordonnees[80];
	
	scanf(ligne1, "%s" , nom_fig);
	scanf(ligne2, "%s" , nb_points);
	scanf(ligne3, "%s", coordonnees);
	
	sprintf(ligne1, "%s" , nom_fig);
	sprintf(ligne2, "%s" , nb_points);
	sprintf(ligne3, "%s" , coordonnees);
	

return 0;
}
