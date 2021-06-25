## Resposta da Questão 03

Das expressões abaixo:

```
    p = i;
    q = &j;
    p = &*&i;
    i = (*&)j;
    i = *&j;
    i = *&*&j;
    q = *p;
    i = (*p)++ + *q;
    
```

As expressões ilegais são: 

`p = i` , pois p é um ponteiro e um ponteiro deve receber o valor de endereço da variavel i;

`i = (*&)j` , ilegal pois o & não está referenciando nada;

`q = *p` , é ilegal pois a q é um ponteiro e está recebendo um valor de conteúdo e não um valor de endereço.
