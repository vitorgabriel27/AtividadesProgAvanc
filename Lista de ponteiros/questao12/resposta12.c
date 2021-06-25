#include<stdio.h>


// definimos um tipo e esse tipo é um ponteiro que aponta para uma função do tipo float e recebe um float e um int
typedef int (*geometria)(int);

//funções que serão chamadas através da utilização dos ponteiros

 int triangulo(int a){
     return printf("é um triangulo");
 }
 int retangulo(int a){
     return printf("é um retangulo");
 }
 int pentagono(int a){
     return printf("é um pentagono");
 }

//agora vamos criar a função que chama o as funções através do ponteiro que definimos
int forma(int l, geometria p){
    return p(l);
}

//agora vamos criar nossa função main

int main(){
    
    int l, *pl = &l;

    scanf("Digite o numero de lados da sua forma: %i", l);
    printf("%d",l);

    if(l == 3){
        printf("A forma geometrica eh: %d", forma(l,triangulo));
    }
    /*else{
        if(l == 4){
            printf("A forma geometrica eh: ", forma(l,retangulo));
        }else{
            printf("A forma geometrica eh: ", forma(l,pentagono));
        }
    }*/
   return 0;
}