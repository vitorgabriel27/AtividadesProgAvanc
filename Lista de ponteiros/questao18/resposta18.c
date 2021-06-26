#include<stdio.h>
#include<stdlib.h>

void alocaMat(float **m, int nl,int nc){
    
    m = malloc(nl * sizeof(float));
    
    for (int i = 1; i < nl; i++){

        m[i] = malloc(nc*sizeof(float));
    }
    
}


void matRecebe(float **m, int nl,int nc){

    for(int i = 0; i < nl; i++){
        for (int j = 0; j < nc; j++){
            printf("\n Digite o valor que deseja adicionar na linha %d e coluna %d:  ", i+1,j+1);
            scanf("%.2f", &m[i][j]);
        }
        printf("\n");
        
    }
}


void imprimeMat(float **m, int nl, int nc){

     for(int i = 0; i < nl; i++){
        for (int j = 0; j < nc; j++){
            
            printf(" %.2f ", &m[i][j]);
        }
        printf("\n");
        
    }
    

}

void prodMat(float **mA, float **mB, float **mC, int nlA, int ncA, int ncB){
    
    float temp;
    
    for(int i = 0; i < nlA; i++){
        for (int j = 0; j < ncB; j++){
            
           mC[i][j] = 0;
           for (int k = 0; k < ncA; j++){

               temp += mA[i][k]*mB[k][j];
           }
           mC[i][j] = temp;
           temp = 0;
        }
        
    }

}

int main(void)
{
    float **matA, **matB,**matC;
    int nlinhaA, ncolunaA,nlinhaB,ncolunaB;

    printf("Digite a quantidade de linhas da matriz A :");
    scanf("%d", &nlinhaA);
    printf("\n\nDigite a quantidade de colunas da matriz A :");
    scanf("%d", &ncolunaA);
    printf("\n\nDigite a quantidade de linhas da matriz B :");
    scanf("%d", &nlinhaB);
    printf("\n\nDigite a quantidade de colunas da matriz B :");
    scanf("%d", &ncolunaB);

    alocaMat(&matA,nlinhaA,ncolunaA);
         if(matA == NULL){
            return 404;
        }
    alocaMat(&matB,nlinhaB,ncolunaB);
        if(matA == NULL){
            return 404;
        }
    alocaMat(&matC,nlinhaA,ncolunaB);
        if(matA == NULL){
            return 404;
        }

    matRecebe(matA,nlinhaA,ncolunaA);

    printf("\n ----------- MATRIZ A ---------------- \n");
    imprimeMat(matA,nlinhaA,ncolunaA);
    printf("\n");

    matRecebe(matB,nlinhaB,ncolunaB);

    printf("\n ----------- MATRIZ B ---------------- \n");
    imprimeMat(matB,nlinhaB,ncolunaB);
    printf("\n");

    prodMat(matA,matB,matC,nlinhaA,ncolunaA,ncolunaB);

    printf("\n ----------- MATRIZ C ---------------- \n");
    imprimeMat(matC,nlinhaA,ncolunaB);
    printf("\n");


    
    for (int i = 0; i < nlinhaA; i++)
    {
        free(matC[i]);
    }
    free(matC);

    for (int i = 0; i < nlinhaA; i++)
    {
        free(matB[i]);
    }
    free(matB);
    
    for (int i = 0; i < nlinhaA; i++)
    {
        free(matA[i]);
    }
    free(matA);
    return 0;
}