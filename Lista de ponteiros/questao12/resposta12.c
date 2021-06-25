#include<stdio.h>


typedef float (*operacao)(float,int);

//-----------------------------------------------------------------------
 float multiplica(float a, int b){
     return a*b;
 }
 float divide(float a, int b){
     return a/b;
 }

//-----------------------------------------------------------------------
float opera(float a, int b, operacao p){
    return op(a,b);
}
//-----------------------------------------------------------------------
int main(){
    float a = 3.7;
    int b = 6;

    printf("O valor %f multiplicado por %d é igual a %f",a,b,opera(a,b,multiplica));
    printf("O valor %f dividido por %d é igual a %f",a,b,opera(a,b,divide));
}