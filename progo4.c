#include <stdio.h>

int main(){
    int a,b;

    printf("Teclea dos numeros\n");
    scanf("%d%d", &a, &b);
    
    (a>b)? puts("El primer numero es mayor al segundo"): puts("O son iguales o el segundo es mayor al primero");

return 0;
}
