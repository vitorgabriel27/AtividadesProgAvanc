## Resposta da questão 09

Caso `x` seja declado como um vetor do tipo char supondo que na máquina uma variável do tipo char ocupa 1 byte, e o endereço de memoria seja 4092, obteremos o seguinte resultado:

~~~c
x + 1 = 4093;
x + 2 = 4094;
x + 3 = 4095;
~~~

Caso `x` seja declado como um vetor do tipo int supondo que na máquina uma variável do tipo int ocupa 2 bytes, e o endereço de memoria seja 4092, obteremos o seguinte resultado:

~~~c
x + 1 = 4094;
x + 2 = 4096;
x + 3 = 4098;
~~~

Caso `x` seja declado como um vetor do tipo float supondo que na máquina uma variável do tipo float ocupa 4 bytes, e o endereço de memoria seja 4092, obteremos o seguinte resultado:

~~~c
x + 1 = 4096;
x + 2 = 409A;
x + 3 = 409E;
~~~

Caso `x` seja declado como um vetor do tipo double supondo que na máquina uma variável do tipo double ocupa 8 bytes, e o endereço de memoria seja 4092, obteremos o seguinte resultado:

~~~c
x + 1 = 409A;
x + 2 = 40A2;
x + 3 = 40AA;
~~~