#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef void (*pointerF)(float *p,int q);

void alocaVet(float **v, int n){
    
    *v = (float*)(malloc(n * sizeof(float)));
    
}

void swap(float *a, float *b) {
        
    float temp;      
        
        if( a < b){
            temp = *a;
            *a = *b;
            *b = temp;
        }
        
}

void _sort(float *vetor, int n, void (*pointerF)(float *p,float *q)) {
    
    for (int i = 0; i < n;i++) {
        for (int j = 0; j < n; j++) {
                
                (*pointerF)(&vetor[i],&vetor[j]);
                
            }
        }
}

void vetRecebe(float *v, int n){

    for(int i = 0; i < n; i++){
        v[i] = i + 1.1;
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
    clock_t t;
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
    t = clock();

    
    _sort(vetor, scale,pF);
    printf("\nVetor ordenado: [");
    //imprimeVet(vetor,scale);
    printf("]\n\n");

    free(vetor);

    t = clock() - t;
    printf("Isso me levou %d clicks (%f segundos).\n",t,((float)t)/CLOCKS_PER_SEC);
    return 0;
}

