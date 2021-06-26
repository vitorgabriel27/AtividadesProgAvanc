## Resposta da Questão 17

Para implementar uma função que faz a soma de dois vetores, foi elabora o seguite código:

~~~c
//a função que soma vetores como pedido na questão recebe os seguintes parametros
// os nomes dos vetores e o valor do tamanho dos vetores
void somaVet(char nome1[],char nome2[],char nome3[], int n){
    
    float *vetor1,*vetor2,*vetor3;
    pointerC c[] = {nome1,nome2,nome3};
    
    //chamada da função que faz a alocação de memória dinamica para os 3 vetores
    alocaVet(&vetor1,n);
        
        if(vetor1 == NULL){
            printf("Erro na alocação do vetor com nome : %s \n",c[0]);
        }
    
    alocaVet(&vetor2,n);
        
        if(vetor2 == NULL){
            printf("Erro na alocação do vetor com nome : %s \n",c[1]);
        
        }
    alocaVet(&vetor3,n);
        
        if(vetor3 == NULL){
            printf("Erro na alocação do vetor com nome : %s \n",c[2]);
        }
    
    //O usuario insere os valores dos vetores que serão somados
    printf("Insira os elemento do vetor %s: \n", c[0]);
    vetRecebe(vetor1,n);
        
    printf("Insira os elemento do vetor %s: \n", c[1]);
    vetRecebe(vetor2,n);

    //A soma é efetuada e guardada no terceiro vetor
    for(int i = 0; i < n; i++){
        
        vetor3[i] = vetor1[i] + vetor2[i];
    }
    
    // é impresso para o usuario o vetor resultante
    printf("O vetor soma de %s e %s = [ ", c[0],c[1]);
        imprimeVet(vetor3,n);
    printf("] \n");

    //libero a memoria alocada
    free(vetor1);
    free(vetor2);
    free(vetor3);
    return 0;

}
~~~

a chamada para essa função na função `main()` ficou da seguinte forma:
 ~~~c
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

    somaVet(nome1,nome2,nome3,scale); //chamada da função somaVet()

    return 0;

}
 ~~~