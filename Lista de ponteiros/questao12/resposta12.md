## Resposta da Questão 11

### O que é um ponteiro para função?

Um ponteiro para uma função é quando definiminos um ponteiro que apontará para uma função, ou seja, um ponteiro que estará guardando o endereço de memória de uma função, e ao chamar esse ponteiro o operador de conteúdo irá executar a função chamada e me retornar o resultado daquela função.

Exemplo:

~~~c
#include<stdio.h>


// definimos um tipo e esse tipo é um ponteiro que aponta para uma função do tipo float e recebe um float e um int
typedef float (*operacao)(float,int);

//funções que serão chamadas através da utilização dos ponteiros

 float multiplica(float a, int b){
     return a*b;
 }
 float divide(float a, int b){
     return a/b;
 }

//agora vamos criar a função que chama o as funções através do ponteiro que definimos
float opera(float a, int b, operacao p){
    return op(a,b);
}

//agora vamos criar nossa função main

int main(){
    float a = 3.7;
    int b = 6;

    printf("O valor %f multiplicado por %d é igual a %f",a,b,opera(a,b,multiplica));
    printf("O valor %f dividido por %d é igual a %f",a,b,opera(a,b,divide));
}

~~~

Desse modo utilizamos um ponteiro que faz chamada a uma função.