#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void alocaVet(float **v, int n){
    
    *v = (float*)(malloc(n * sizeof(float)));

    
}

void vetRecebe(float *v, int n){

    for(int i = 0; i < n; i++){
        v[i] = i + 1.1;
    }
}

int comparador(const void *a, const void *b){
    if (*(int*)a > *(int*)b) {
      return 1;
   } else if (*(int*)a < *(int*)b) {
      return -1;
   } else {
      return 0;
   }
}

void imprimeVet(float *v, int n){

    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", v[i]);
    }
    

}

int main(void)
{
    clock_t t;
    float *vetor;
    int scale;

    

    printf("Digite a quantidade de valores que deseja armazenar:");
    scanf("%d", &scale);
    alocaVet(&vetor,scale);

    if(vetor == NULL){
        return 404;
    }

    vetRecebe(vetor,scale);
    t = clock();

    
    qsort(vetor, scale, sizeof(float),comparador);
    

    printf("\nVetor ordenado = [ ");
    //imprimeVet(vetor,scale);
    printf("]\n\n");

    free(vetor);

    t = clock() - t;
    printf("Isso me levou %d clicks (%f segundos).\n",t,((float)t)/CLOCKS_PER_SEC);
    return 0;
}