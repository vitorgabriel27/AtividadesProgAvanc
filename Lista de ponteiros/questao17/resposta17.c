#include<stdio.h>
#include<stdlib.h>

typedef void (*pointerF)(float *p);
typedef void (*pointerC)(char *c[]);

 void alocaVet(float **v, int n){
    
    *v = (float*)(malloc(n * sizeof(float)));
    printf(v);
    
}

void vetRecebe(float *v, int n){

    for(int i = 0; i < n; i++){
        printf("Digite o %d elemento do vetor:  ", i+1);
        scanf("%f", &v[i]);
    }
}

void imprimeVet(float *v, int n){

    for (int i = 0; i < n; i++)
    {
        printf(" %.2f ", v[i]);
    }
    

}

void somaVet(char nome1[],char nome2[],char nome3[], int n){
    
    float *vetor1,*vetor2,*vetor3;
    pointerF *v[3];
    v[0] = vetor1;
    v[1] = vetor2;
    v[2] = vetor3;
    pointerC c[] = {nome1,nome2,nome3};

    

    for(int i = 0 ;i < 3; i++){
        alocaVet(&v[i],n);
        if(v[i] == NULL){
            printf("Erro na alocação do vetor com nome : %s \n",c[i]);
        return 404;
        }
    }

    for(int i = 0 ;i < 2; i++){
        printf("Insira os elemento do vetor %s: \n", c[i]);
            vetRecebe(v[i],n);
            printf("\n %f \n",v[i]);
        
    }
   

    for(int i = 0; i < n; i++){
        
        vetor3[i] = vetor1[i] + vetor2[i];
    }
    
    printf("O vetor soma de %s e %s = [ ", c[0],c[1]);
    imprimeVet(v[2],n);
    printf("] \n");

    free(vetor1);
    free(vetor2);
    free(vetor3);
    return 0;

}

int main(void){

    int scale = 0;
    char nome1[20],nome2[20],nome3[20];

    printf("Insira o nome do vetor 1: ");
    scanf("%s", &nome1);
    printf("Insira o nome do vetor 2: ");
    scanf("%s", &nome2);
    printf("Insira o nome do vetor 3: ");
    scanf("%s", &nome3);

    printf("Insira o tamanho dos vetores: ");
    scanf("%d", &scale);

    somaVet(nome1,nome2,nome3,scale);

    return 0;

}