#include <userint.h>
#include <ansi_c.h>

int main(void)
{
	char chaine[100] = "je m'appelle Lea Dupont et j'ai 19 ans";
	scanf("%s", chaine);

	
	unsigned long int phrase[100]; 
	char prenom [100];
	unsigned char age[100];
	
	sscanf(chaine,"%lu %lu %lu %s %s %lu %lu %lu %lu %u %*s", phrase, prenom, age); 
	MessagePopup(chaine, "je m'appelle Lea Dupont et j'ai 19 ans");
	
	
	
	return 0;
}

