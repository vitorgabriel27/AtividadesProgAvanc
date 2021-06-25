#include<stdio.h>
#include<stdlib.h>

void alocaVet(float **v, int n){
    
    *v = (float*)(malloc(n * sizeof(float)));

    
}

void vetRecebe(float *v, int n){

    for(int i = 0; i < n; i++){
        printf("Digite o %d numero que deseja adicionar:  ", i+1);
        scanf("%f", &v[i]);
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
    float *vetor;
    int scale;

    printf("Digite a quantidade de valores que deseja armazenar:");
    scanf("%d", &scale);
    alocaVet(&vetor,scale);

    if(vetor == NULL){
        return 404;
    }

    vetRecebe(vetor,scale);

    qsort(vetor, scale, sizeof(float),comparador);

    printf("\n");
    imprimeVet(vetor,scale);

    free(vetor);
    return 0;
}