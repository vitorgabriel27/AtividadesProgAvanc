## Resposta da Questão 13

Na questão 13 nos foi pedido para utilizar a alocação dinâmnica de memoria, para criar e ordenar um array de valores do tipo float.

O codigo implementado foi o seguinte:

~~~c
#include<stdio.h>
#include<stdlib.h>

// a minha função alocaVet(), faz a alocação dinâmica do vetor 
// onde o vetor irá ter n vezes o tamanho necessario de bytes para armazenar 1 variavel do tipo float
// ou seja, tera um espaço de memória alocado igual a n
void alocaVet(float **v, int n){
    
    *v = (float*)(malloc(n * sizeof(float)));

    
}

//a função vetRecebe() escreve cada elemento nas n posições do meu vetor
void vetRecebe(float *v, int n){

    for(int i = 0; i < n; i++){
        printf("Digite o %d numero que deseja adicionar:  ", i+1);
        scanf("%f", &v[i]);
    }
}

//a função ordenaCresc() ordena os vetores em ordem crescente 
void ordenaCresc(float *v, int n){

    float aux;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(v[i] < v[j]){

                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
        
    }
    
}

//a função imprimeVet() dá um print em cada vetor e mostra para o usuario
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

    //nesse momento a minha função pergunta ao usuario quantos elementos o vetor terá
    printf("Digite a quantidade de valores que deseja armazenar:");
    scanf("%d", &scale);
    alocaVet(&vetor,scale);

    //caso não consiga alocar a memoria o programa me retorna um erro
    if(vetor == NULL){
        return 404;
    }

    //são chamadas as funções, respectivamente, vetRecebe(), ordenaCresc() e imprimeVet()
    vetRecebe(vetor,scale);
    ordenaCresc(vetor, scale);
    printf("\n");
    imprimeVet(vetor,scale);

    //Por ultimo mas não menos importante, o programa libera a memória alocada.
    free(vetor);
    return 0;
}
~~~

.