#include<stdio.h>

int main(void){
    int i=3,j=5;
    int *p = &i,*q = &j;

    if (p == &i)
    {
      printf("Resultado: Verdadeiro(%d)\n\n", p == &i  ); 
      // é verdadeiro pois o endereço de memoria que ponteiro "p" aponta é o da variavel "i".
    }else{
        printf("Resultado: Falso(%d)\n\n", p == &i );
    }
    
    printf("*p - *q = %d \n\n",*p - *q );
    //como o em *p está armazenado o valor é i=3 e em *q é j=5 a expressão resultante é 3 - 5 = -2

    printf("**&p = %d \n\n", **&p );
    //a espressão **&p me mostra o valor q está guardado em p que é 3

    printf("3 - *p/(*q) + 7 = %d \n\n", 3 - *p/(*q) + 7 );
    //similarmente ao segundo printf a expressão resultante será 3 - 3/5 + 7 = 10
    
    return 0;
}