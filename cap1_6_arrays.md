# 1.6 Arrays

Vamos escrever um programa que conta o número de aparições de cada digito e de espaços vazios (blank, tab e newline) para ilustral aspectos importantes do C; 

Existem 20 categoria de entradas, então é conveniente usar um array para suporter as ocorrências de cada digito;

~~~C

#include <stdio.h> 

/* contador de digitos, espaços em branco e outros */

main()
{ 
    int c, i, nwhite, nother; 
    int ndigit(10); 

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0; 
    
    while ((c = getchar()) != EOF)
        if ( c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite; 
        else
            ++nother;

    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother); 
} 
~~~

**int ndigit[10];** declara o _ndigit_ como um array de 10 inteiros; Inscrições de arrays sempre começam em 0 no C; 

Este programa é baseado nas propriedades da representaçaõ dos caracteres dos digitos;

Então, o teste **if (c >= '0' && c <= '9')** determina que o caractere em _c_ é um digito. 

Se for número/digito, o valor é **c - '0'**; 

Por definição, _chars_ são apenas pequenos inteiros, então, variáveis e constantes de _char_ são idênticas;então **c-'0'** é uma expressão inteira com o valor entre 0 e 9 correspondente ao caractere '0' a '9', armazenado em _c_; 

A decisão se o cáractere é um digito, espaço em branco, ou outro coisa é feita com as sequência; 

~~~C
if (c >='0' && c <='9')
    ++ndigit[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
        ++nwhite
    else
        ++nother; 
~~~

Por isso, o padrão abaixo acontece frequentemente em programa como uma maneira de expressão decisões múltiplas; As condições são validades em ordem, do topo, até alguma _condição_ ser satisfeita; A partir do momento que a parte correspondente da _instrução_ é executada, toda construção é finalizada;  

~~~C
if (condition1)
    statement1
else if (condition2) 
    statement2
    ....
    ....
else
    statementn
~~~

Se nenhum condição é alcançada, a _instrução_ após o final _else_ é executada se estiver presente. Se o final _else_ e a _instrução_ estiverem omissas nenhuma ação acontece;


