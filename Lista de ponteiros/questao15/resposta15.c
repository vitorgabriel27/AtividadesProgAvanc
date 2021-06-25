#include<stdio.h>
#include<stdlib.h>

typedef void (*pointerF)(float *p,int q);

void alocaVet(float **v, int n){
    
    *v = (float*)(malloc(n * sizeof(float)));
    
}

void swap(float *a, float *b) {
        float temp;      

        temp = *a;
        *a = *b;
        *b = temp;
}

void _sort(float *vetor, int tamanho, void (*pointerF)(float *p,float *q)) {
    
    for (int i = 0; i < tamanho;i++) {
        for (int j = 0; j < tamanho; j++) {
                if(vetor[i] < vetor[j]){
                    (*pointerF)(&vetor[i],&vetor[j]);
                }
            }
        }
}

void vetRecebe(float *v, int n){

    for(int i = 0; i < n; i++){
        printf("Digite o %d numero que deseja adicionar:  ", i+1);
        scanf("%f", &v[i]);
    }
}

void imprimeVet(float *v, int n){

    for (int i = 0; i < n; i++)
    {
        printf(" %.2f ", v[i]);
    }
    

}

int main(void)
{
    pointerF *pF;
    float *vetor;
    int scale;

    pF = swap;

    printf("Digite a quantidade de valores que deseja armazenar:");
    scanf("%d", &scale);
    alocaVet(&vetor,scale);

    if(vetor == NULL){
        return 404;
    }

    vetRecebe(vetor,scale);
    _sort(vetor, scale,pF);
    printf("\nVetor ordenado: [");
    imprimeVet(vetor,scale);
    printf("]");

    free(vetor);
    return 0;
}

