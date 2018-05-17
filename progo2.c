#include <stdio.h>

int main(){
   int s=0;

   printf("Teclea un valor entre 1 y 9\n");
   scanf("%d", &s);
   
   switch(s){
   case 9:
    s=s+8;

   case 8:
    s=s+7;

   case 7:
    s=s+6;

   case 6:
    s=s+5;

   case 5:
    s=s+4;

   case 4:
    s=s+3;

   case 3:
    s=s+2;

   case 2:
    s=s+1;

   case 1:
    s=s;

   }

    printf("El valor de la suma es: %d\n", s);
return 0;

}
