## Resposta da Questão 16

Ao pesquisar na internet mecanismos que possibilitem medir tempos de execução de rotinas
computacionais, encontrei a biblioteca nativa do C/C++ `<time.h>` nessa biblioteca existem recursos para medir tempo em diferentes situações.

Para medir o tempo de execução de um programa eu utilizei , a função `clock()` que faz parte dessa bliblioteca.

para isso criei uma variavel do tipo `clock_t` e a utilizei da seguinte forma:

~~~c 
clock_t t;

t = clock();

 /* código */

t =  clock() - t
printf("Isso me levou %d clicks (%f segundos).\n",t,((float)t)/CLOCKS_PER_SEC);

~~~

Para ambas execuções utilizei um tamanho de alocação de `10000*sizeof(float)`.

A resposta obtida ao executar o código da questão 14 que utiliza o `qsort()` foi a seguinte:

```
Isso me levou 1 clicks (0.001000 segundos).
```


Já a resposta obtida utilizando o código da questão 15 foi a seguinte:
```
Isso me levou 375 clicks (0.375000 segundos).
```
O que nos mostra que utilizando o recurso `qsort()` da biblioteca `<stdlib.h>` o programa compila muito mais rapido.