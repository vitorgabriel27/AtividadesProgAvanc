#include<stdio.h>

int main(void)
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;
    scanf("%f", &aloha);
    aloha = value;
    printf("%f", aloha);
    coisas[4][4] = aloha[3];
    coisas[5] = aloha;
    pf = value;
    pf = aloha;

    return 0;
}

float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;
