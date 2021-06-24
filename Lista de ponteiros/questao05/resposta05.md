## Resposta da Questão 05

Ao compilar e executar o codigo em c, obtemos o seguinte resultado: 

```
contador/valor/valor/endereco/endereco

 i = 0 vet[0] = 1.1 *(f + 0) = 1.1 &vet[0] = 61FF04 (f + 0) = 61FF04
 i = 1 vet[1] = 2.2 *(f + 1) = 2.2 &vet[1] = 61FF08 (f + 1) = 61FF08
 i = 2 vet[2] = 3.3 *(f + 2) = 3.3 &vet[2] = 61FF0C (f + 2) = 61FF0C
 i = 3 vet[3] = 4.4 *(f + 3) = 4.4 &vet[3] = 61FF10 (f + 3) = 61FF10
 i = 4 vet[4] = 5.5 *(f + 4) = 5.5 &vet[4] = 61FF14 (f + 4) = 61FF14

 ```
 O que está acontecendo nesta execução é que a cada o iteração do comando de repetição for, o valor exibido em `vet[i]` é o valor guardado naquela posição do vetor, já o segundo valor apresentado resultado de `*(f + i)` tambem é o esperado pois o ponteiro esta guardando o endereço e o valor derreferencia do vetor.

 Logo após, os comandos `&vet[i]` e `(f + i)` nos mostram o endereço de memoria em que o vetor está guardando as informações, como o ponteiro f aponta para o vetor o valor mostrado é o mesmo endereço de memoria, que como mostrado conforme andamos no vetor em cada posição o endereço tambem anda 1 casa que tem o valor igual 4 bits, por isso o endereço cresce de 4 em 4.