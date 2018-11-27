#include "my_header.h"
#include <stdlib.h>
#define SEUIL 18
#define SEUILB -100
#define SEUILH 200
#define N 5

void main(void)
{

   unsigned char e,d,o;
   unsigned char n2;
   unsigned char constante_symbolique;

   unsigned char bin [10]={ 2,4,8,16,32,64,128,240,56,19};
   int sat[10]={ rand() - RAND_MAX/2, rand() - RAND_MAX/2, rand() - RAND_MAX/2,rand() - RAND_MAX/2,rand() - RAND_MAX/2,rand() - RAND_MAX/2,rand() - RAND_MAX/2,rand() - RAND_MAX/2,rand() - RAND_MAX/2,rand() - RAND_MAX/2};
   int dist[10]={ 10,20,30,40,55,66,77,88,99,100};
   int a[5]={1,5,9,8,11};
   int b[N];
   int miroir[12]={0,2,4,6,8,10,};


for(e=0; e<10; e++)
 {
       if (bin[e] > SEUIL)

           bin[e] =1;

       else
           bin[e]=0;
     }

for (d=0;d<10; d++)
   {
       if ( sat[d] > SEUILH)
           sat[d] =SEUILH;
	   
       else if (sat[d] <SEUILB)
           sat[d]= SEUILB;
	   
       else
       sat[d]=sat[d];
   }

    for(o=0;o<9; o++)
    {
        dist[9-o] = dist[9-o]-dist[8-o] ;
    }
	
    for (N=0;N<5;N++)
    {
       b[N]=a[4-N];
    }
	
    for (n2=0;n2<6;n2++)
    {
        miroir[11-n2]=miroir[n2];
    }
}

