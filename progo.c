#include <stdio.h>

int main(){
    char c;
    puts("Dame un caracter\n");
    c=getchar();
    
    if(c>='a' && c<='z' || c>='A' && c<='Z')
      printf("Es una letra");

    if(c>='a' && c<='z')
         printf("Es una minuscula");
        else
          if(c>='A' && c<='Z')
             printf("Es una mayuscula");          
               else
                 if(c>='0' && c<='9')
                  printf("Es digito");
                   else
                     printf("No es letra ni digito");
    

   
return 0;
}
