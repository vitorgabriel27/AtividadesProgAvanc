## Resposta Questão 07

Se tivessemos a declaração `int mat[4], *p, x;` e tentassemos executar as expressões abaixo :

```
p = mat + 1;
p = mat++;
p = ++mat;
x = (*mat)++;
```

As expressões validas seriam `p = mat + 1` e `x = (*mat)++`.