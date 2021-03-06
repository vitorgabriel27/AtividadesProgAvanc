## Resposta da  Questão 04

O codigo apresentado na questão 04, possui as seguintes variaveis:

~~~c
    int valor;
    int *p1;
    float temp; 
    float *p2;
    char aux;
    char *nome =  "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;
~~~

Na parte a do código temos: 
~~~c
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf(" %d \n", valor);
~~~

O valor impresso é o valor esperado 20, pois ao atribuir o endereço ao ponteiro `p1 = &valor`, o a variavel valor será alterada, pois o ponteiro aponta para esta variavel.

Na parte b do código temos: 
~~~c
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("temp: %.1f \n", temp);

~~~
Similarmente a parte anterior, o ponteiro p2 está apontando para a variavel temp, e ao modificar o valor de *p2, altera-se tambem o valor de temp, sendo impresso o novo valor 29.0.

Na parte c do código temos: 
~~~c
    p3 = &nome[0];
    aux = *p3;
    printf("aux: %c \n", aux);

~~~
Neste caso o ponteiro p3 guarda o endereço em que está a primeira posição da cadeia de caracteres, e a variavel aux recebe o valor em char guardado no endereço, que é o caractere "P".

Na parte d do código temos: 
~~~c
    p3 = &nome[4];
    aux = *p3;
    printf("aux: %c \n", aux);

~~~
Neste caso o ponteiro p3 guarda o endereço em que está na quinta posição da cadeia de caracteres, e a variavel aux recebe o valor em char guardado no endereço, que neste caso é o caractere "e".

Na parte e do código temos: 
~~~c
    p3 = nome;
    printf("*p3 = %c \n", *p3);

~~~
Neste caso o ponteiro p3 recebe o ponteiro nome , ou seja, o endereço da cadeia de caracteres de "nome", e o valor em char guardado no endereço caso é o caractere "P".

Na parte f do código temos: 
~~~c
    p3 = p3 + 4;
    printf("*p3 = %c \n", *p3);

~~~
Neste caso o ponteiro anda quatro posições na cadeia de caracteres "nome" que está referenciada, e o valor em char impresso no endereço caso é o caractere "t" referente a `&nome[4]`.

Na parte g do código temos: 
~~~c
    p3 --;
    printf("*p3 = %c \n", *p3);

~~~
Neste caso o ponteiro que estava guardando o endereço da quarta posição na cadeia de caracteres "nome" que está referenciada, e o valor em char impresso no endereço caso é o caractere "t" referente a `&nome[4]`.

Na parte h do código temos: 
~~~c
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("Idade: %d \n", idade);

~~~
Neste caso o vetor possui três valores nas 3 primeiras possições, o ponteiro `p4` recebe o vetor, e a variavel idade recebe o conteudo armazenado no vetro, entretanto "idade" irá nos mostrar apenas o valor armazenado na primeira posição do vetor .

Na parte i do código temos: 
~~~c
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);

~~~
Neste caso o ponteiro p5 irá receber o endereço de p4 + 1, ou seja, irá andar uma posição na memoria que equivale a 4 bits. Desse modo o que será guardado na variavel `idade` e impresso será o valor armazenado em `vetor[1]` que é 45.

Na parte j do código temos: 
~~~c
    p4 = p5 + 1;
    idade = *p4;
    printf("Idade: %d \n", idade);

~~~
Já neste caso o ponteiro p4 irá receber o endereço de p5 + 1 que é o mesmo que p4 + 2, ou seja, irá andar duas posições na memoria que equivale a 4 bits. Desse modo o que será guardado na variavel `idade` e impresso será o valor armazenado em `vetor[2]` que é 27.

Na parte l do código temos: 
~~~c
    p4 = p4 - 2;
    idade = *p4;
    printf("Idade: %d \n", idade);
~~~
Já neste caso o ponteiro p4 irá receber o endereço de p4 - 2 como anteriormente armazenamos o valor de p4 + 2 nesse momento p4 será decrementado e receberá o seu endereço inicial, ou seja, irá voltar duas posições na memoria que equivale a 4 bits. Desse modo o que será guardado na variavel `idade` e impresso será o valor armazenado em `vetor[0]` que é 31.

Na parte m do código temos: 
~~~c
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);
~~~
Nesta etapa o ponteiro p5 irá receber o endereço de `&vetor[2]-1`, p5 receberá endereço de um nivel a menos, ou seja, irá voltar uma posição em relação `vetor[2]` na memoria que equivale a 4 bits. Desse modo o que será guardado na variavel `idade` e impresso será o valor armazenado em `vetor[1]` que é 45.

Na parte n do código temos: 
~~~c
    p5++;
    printf("%d \n", *p5);
~~~
Nesta etapa o ponteiro p5 será incrementado, p5 receberá endereço de uma posição acima, ou seja, irá andar uma posição para frente na memoria que equivale a 4 bits. Desse modo o que será guardado na variavel `idade` e impresso será o valor armazenado em `vetor[2]` que é 27.