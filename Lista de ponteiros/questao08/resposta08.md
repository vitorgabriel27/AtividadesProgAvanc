## Resposta da Questão 08

```
 int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ",*(vet+i));
  }
}

```
O programa acima imprime na tela os valores armazenados dentro do meu array, ao executar o programa imprimirá os valores: 4 9 13.

```
 int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ",vet+i);
  }
}
```
Já esse programa imprime, em hexadecimal, o endereço de memória de cada posição do meu vetor, os endereços impressos ao executar o codigo na minha maquina foram: 
`61FF10 61FF14 61FF18`
