#include <stdio.h>

int main() {
   
   int vettore[200];
   int num = 2;
   int i;
   
   // Scrittura vettore
   
   for (i=0; i<=3; i++)
   {
   vettore[i] = num;
   num +=2;
   }
   // Lettura vettore
   
   for(i=0; i<=3; i++)
   {
   printf("vettore[%d] = %d\n",i, vettore[i]);
   }
   return 0;
   
   }
