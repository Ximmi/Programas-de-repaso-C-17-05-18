#include <stdio.h>

int main(){
   char c;
   printf("Teclea una vocal o digito");
   c=getchar();

   switch(c){
   case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'o': case 'O': case 'u': case 'U':
   puts("Es una vocal\n");
   break;
  
   case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
   puts("Es un digito\n");
   break;
}

}
