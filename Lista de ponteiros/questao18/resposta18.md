## Resposta da Questão 18

Para resolução do exercicio primeiro foi necessario criar as funções que alocam a memoria das matrizes de forma dinâmica:

~~~c

float **alocaMat(float **m, int nl,int nc){
    
    //faz a alocação primeiro do bloco auxiliar
    m = (float **)(malloc(nl * sizeof(float)));
    //depois faz a alocação das colunas
    m[0] = (float *)(malloc(nc*nl*sizeof(float)));
    
    for (int i = 1; i < nl; i++){
        //guarda os endereços das colunas 
        m[i] = m[i-1] + nc;
    }
    return m;
    //me retorna a matriz já com a memoria alocada
}

~~~

Após esse passo criei as funções que escreve e imprime os valores da minha matriz:

~~~c
void matRecebe(float **m, int nl,int nc){

    for(int i = 0; i < nl; i++){
        for (int j = 0; j < nc; j++){
            printf("\n Digite o valor que deseja adicionar na linha %d e coluna %d:  ", i+1,j+1);
            scanf("%f", &m[i][j]);
            //elemento por elemento linha(i) x coluna(j)
        }
        
    }
}


void imprimeMat(float **m, int nl, int nc){

     for(int i = 0; i < nl; i++){
        for (int j = 0; j < nc; j++){
            
            printf(" %.2f ", m[i][j]);
        }
        printf("\n");
        
    }
    

}
~~~

Logo em seguida criei a função que realiza o produto entre as matrizes

~~~c
void prodMat(float **mA, float **mB, float **mC, int nlA, int ncA, int ncB){
    
    float temp;
    
    for(int i = 0; i < nlA; i++){
        for (int j = 0; j < ncB; j++){
            
           temp = 0;
           //faz o produto alternado o valor da coluna para a matriz A
           // e o valor da linha para matriz b
           for (int k = 0; k < ncA; k++){
               //faz a soma entre os produtos da mA[i][k] e da mB[k][j]
               temp += mA[i][k]*mB[k][j];
               //Exemplo: mA[1][1]*mB[1][1]+mA[1][2]*mB[2][1] + ... + mA[1][n]*m[n][1]
           }
           //após o loop guarda na matriz C o resultado do elemento
           mC[i][j] = temp;
        }
        
    }

}

~~~
Logo após foi implementada a função que libera a memória alocada

~~~c
void liberaMat(float **m){
    
    free(m[0]);
    //libera as colunas primeiro
    free(m);
    //libera o bloco auxiliar
}
~~~

A função `main()` ficou da seguinte forma:
~~~c
int main(void)
{
    float **matA = NULL, **matB = NULL,**matC = NULL;
    int nlinhaA, ncolunaA,ncolunaB;

    printf("Digite a quantidade de linhas da matriz A :");
    scanf("%i", &nlinhaA);
    printf("\n\nDigite a quantidade de colunas da matriz A :");
    scanf("%i", &ncolunaA);
    printf("\n\nDigite a quantidade de colunas da matriz B :");
    scanf("%i", &ncolunaB);

    matA = alocaMat(matA,nlinhaA,ncolunaA);
    matB = alocaMat(matB,ncolunaA,ncolunaB);
    matC = alocaMat(matC,nlinhaA,ncolunaB);
        

    matRecebe(matA,nlinhaA,ncolunaA);

    printf("\n ----------- MATRIZ A ---------------- \n");
    imprimeMat(matA,nlinhaA,ncolunaA);
    printf("\n");

    matRecebe(matB,ncolunaA,ncolunaB);

    printf("\n ----------- MATRIZ B ---------------- \n");
    imprimeMat(matB,ncolunaA,ncolunaB);
    printf("\n");

    prodMat(matA,matB,matC,nlinhaA,ncolunaA,ncolunaB);

    printf("\n ----------- MATRIZ C ---------------- \n");
    imprimeMat(matC,nlinhaA,ncolunaB);
    printf("\n");


    
    liberaMat(matC);
    liberaMat(matB);
    liberaMat(matA);
    return 0;
}
~~~