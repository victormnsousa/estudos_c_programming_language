# 1.7 Functions

Uma função fornece uma maneira conveniente de encapsular alguma computação, que pode ser usada sem preocupação com sua implementação; 

Com uma função bem desenhada, é possível ignorar _como_ um trabalho é feito, sabendo que _o que_ é feito, é suficiente; 

O C torna a criação de funções fácil, conveniente e eficiente; e você verá com frequência pequenas funções definidas e convocadas apenas uma vez simplesmente por clarificar uma parte do código; 

Até agora, usamos funções como _printf_, _getchar_ e _putchar_ que foram fornecidas por nós; 

Vamos ilustrar as mecânicas da definição de função escrevendo: **power(m,n)**: 

~~~C
#include <stdio.h> 

int power (int m, int n);
// test power function
main()
    { 
    int i; 
    for (i = 0; i < 10; ++i) 
        printf("%d %d $d\n", i, power(2,i) power (-3,i); 
    return 0;
    }    
//power: raise base to n-th power; n >=0 
    
int power (int base, int n) 
    {     
    int i, p;

    p = l; 
    for (i = 1; i <= n; ++i)
        p = p * base; 
    return p:
    }     
~~~

A definição de função tem a sua forma: 

~~~C
tipoderetorn nome-da-função(paramêtro, declaração, se existir)
    {
    declaração
    instrução
    }    
~~~

As definições de funções podem aparecer em qualquer ordem; em uma fonte ou mais de uma, mas não podem ser divididas entre arquivos; 

Se o programa estiver em diferentes arquivos você terá que fazer outras tarefas para compilar; mas vamos assumir por enquanto  que a função está no mesmo arquivo; 
Em nosso programa, a função _power_ é convocada duas vzes por main, na linha: **printf("$d $d\n", i, power(2,i), power(-3,i));** 

A primeira linha de _power_ **int power (int base, int n)** declarar o tipo de paramêtro e nomes, e o tipo de resultado que a função retorna; 

## 1.7 Functions

Uma função permite uma maneira conveniente de encapsular alguma computação, que pode ser usada sem preocupação com a sua implementação; assim, é possível ignorar _como_ um trabalho é feito, sabendo _o que_ ele faz já é o suficiente;

C torna as funções simples, convenientes e eficientes; você vai ver muitas vezes uma função ser definida e chamada apenas uma vez, somente porque clarifica uma parte do código;

Até agora, só usamos funções como _printf_, _getchar_ e _putchar_ que foram fornecidas para nós; chegou a hora de escrevermos nossas próprias funções;

Vamos ilustrar os mecanismos da função ao escrever função _power(m,n)_ para criar um inteiro _m_ em um positivo inteiro power _n_; Assim, o valor de _power(2,5)_ é 32; Esta função não é a mais prática para exponentes, pois somente lida com pequenos inteiros positivos, mas é boa para a ilustração; (a biblioteca padrão também contém a função pow(x,y) que computa x elevado y;

~~~C
#include <stdio.h>

int power (int m, int n);

/* testa a função power */
main()
{
    int i;
    
    for ( i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
} 
/* power: elevado base para n-th power; n >= 0 */
int power (int base, int n)
{
    int i, p;

    p = l;
    for (i = 1; i <=n; ++i)
    p = p * base;
    return p;
} 
~~~

A definição de uma função tem a seguinte forma: 
~~~C
return-type function-name(parameter declaration, if any)
{ 
    declaration
    statements
} 
~~~
~~~C
tipo-do-retorno nome-da-função(declaração de paramêtros, se existir)
{
    declaração
    instrução/comando
} 
~~~

As definições da função podem aparecer em qualquer ordem e, em um arquivo fonte ou vários, mas nenhuma função pode ser dividida entre arquivos; Se o programa fonte aparecer em diversos arquivos, vocÊ vai ter que declarar mais para compilar e carregar do que se aparecer somente uma vez;

Trata-se de uma questão de sistema operacional e não um atributo de linguagem; Por agora, vamos assumir que as funções estão no mesmo arquivo;

A função _power_ foi chamada duas vezes por _main_, na linha: 

**printf("%d %d %d\n", i, power(2,i), power(-3,i));**

Cada chamada transmite dois argumentos para _power_, e toda vez retorna um inteiro para ser formatado e imprimido na tela; Em uma expressão _power(2,1)_ é um inteiro assim como _2_ e _1_ são; nem todas funções produzem valores inteiros, será abordado no cap 4;

A primeira linha de _power_: **int power (int base, int n)** declara os tipos de paramêtros e nomes, e o tipo de resultado que a função retorna; 

Os nomes usados por _power_ para seus paramêtros são locais da função e não são visíveis para nenhuma outra função: outras rotinas podem usar os mesmos nomes sem conflitos; isto também vale para as variáveis _i_ e _p_: o _i_ em _power_ não é relacionado ao _i_ em _main_; 

Nós vamos normalmente utilizar um paramêtro para a variável nomeada no paretesis listado na função. As vezes os termos _formal argument_ e _actual argument_ são usados para a mesma distinção; 

O valor que _power_ computa é retornado para _main_ pelo _return_: declaração. Qualquer expressão deve seguir _return_:

**return expression;**

Uma função não necessita retornar um valor; E uma função chamada pode ignorar o valor retornada por uma função; 

Vocẽ deve ter notada que tem um _return_ no final de _main_; Como _main_ é uma função como qualquer outra, pode retornar um valor para sua chamada, que é o ambiente que o programa foi executado;

Normalmente, por convenção, o retorno zero implica terminação normal; e valores diferentes de zero unusuais ou condições de erro; nós havíamos omitido estas informações até aqui, mas passaremos a utilizá-las agora; 

A declaração: **int power(int base, int n);** logo depois de _main_ diz que _power_ é a função que expera dois argumentos _int_ e retorna um _int_; 

Esta declaração é chamada de _function prototype_, o que tem a ver com a definição e uso de _power_; É um erro, se a definição de uma função ou qualquer uso dela não concordarem com o protótipo; 

Nomes de paramêtros são opcionais em uma função protótipo, então ele poderia ter sido escrito: **int power(int, int);**bons nomes, porém, são bons recursos de documentação; 

Estas são novas convenções, diferentes das originais, que permitem que os compiladores encontrem os erros mais facilmente; 


