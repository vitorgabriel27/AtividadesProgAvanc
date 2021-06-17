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

p = i, pois p é um ponteiro e um ponteiro deve receber o valor dereferencia da variavel i;

i = (*&)j, ilegal pois o & não está referenciando nada;

q = *p, é ilegal pois a q é um ponteiroe está recebendo um valor inteiro e não um valor derreferencia.
