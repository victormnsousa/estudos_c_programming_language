# The C Programming Language - 2nd Edition (OCR) - Brian W. Kernighan / Dennis M. Ritchie

# Préfácio
O mundo dos computadores passou por uma revolução desde a publicação de _The C Programming Language_, em 1978; 
~~~C
main() 
duas décadas depois() 
    { 
    mega computadores (++ mega computadores)
    (computadores pessoais >= mainframes de décadas atrás) 
    }
~~~ 

E neste período a linguagem C também mudou. Foi muito mais longe do que suas origens como linguagem do sistema operacional Unix; 

A crescente popularidade do C, as mudanças que ocorreram no decorrer dos anos e a criação de compiladores por grupos terceiros, combinados, demonstraram a necessidade de uma definição mais contemporanêa da linguagem;

Afinal, em 1983 foi criado a definição da linguagem; 

Na segunda edição, os autores mantém a breviedade do livro. O C não é uma linguagem grande e não combinaria com um livro grande. 

# Préfácio da Primeira Edição 

O C é uma linguagem de programação de uso genérico com ferramentas de sintaxe, controle de fluxo e dados moderno e uma vasta variedade de operadores; 

O C não é uma linguagem de alto nível e nem uma linguagem grandiosa; e não não tem nenhuma área de aplicação específica; 

Mas ela é livre de restrições e pode ser mais conveniente e efetiva para muitas tarefas do que outras supostas mais poderosas linguagens; 

O C foi originalmente desenhado para a implementação do sistema operacional Unix; O sistema operacional, o compilador, e a maioria dos programas do Unix, incluindo o software para preparação do livro, foram escritos em C; 

Estre livro foi criado para apoiar o leitor em como programar em C; Ele contém um tutorial introdutório; capítulos das principais funções e um manual de referência; Quase tudo é baseado em leitura, escrita e revisão de exemplos; 

O livro também não é uma introdução à programação; é necessário ter certa familiaridade com os conceitos básicos de programação, como _variables_, assignment statements_, _loops_  e _functions; 

Um programador iniciante consegue, com o apoio de um colega ou professor, ler todo o livro; 

Em nossa experiência, a linguagem C provou ser prazerosa, expressiva e versátil para uma variedade de programas; é fácil de aprender, e servirá sempre bem conforme a sua experiência aumentar; 

## 1.1 Getting Started 

A única maneira de aprender uma nova linguagem de programação é escrever programas; E o primeiro programa é sempre "Hello, World!"; 

~~~C
#include <stdio.h> 
main()      
{ 
printf("hello, world\n"); 
} 
~~~

Um programa em C, independente de seu tamanho, consiste em _functions_ e _variables_; Uma função contém _statements_, que especificam as operações a serem feitas; e as variáveis armazenam valores usados; 

A função _main_ é especial; o seu programa começa a ser executado ali; isso significa que todo programa deve ter _main_ em algum lugar; 

O _main_ vai geralmente chamar outras _functions_ para ajudar em seu trabalho - algumas que você escreveu e outras de bibliotecas providas por você;

A primeira linha do programa **#include <stdio.h>** diz para o compilador incluir a informação da devida biblioteca; 

Um método de comunicar dados entre _functions_ é chamar a função para prover uma lista de valores, chamados _arguments_; 

Os _statements_ da funçaõ estão sempre entre as { } chaves e no caso do Hello, World é somente uma ; 

Uma função é declarada nomeando-a, seguida por um parentesis com uma lista de argumentos; 

## 1.2 Variáveis e expressões aritméticas 

Agora vamos lidar com novas ideias: _comments_, _declarations_, _variables, _arithmetic expressions_, _loops_ e _formatted output_: 

*Programa conversor de Celsius-Fahrenheit
~~~C
#include <stdio.h> 
main()
{ 
int fahr, celsius; 
int lower, upper, step; 

lower = 0 /*menor limite da escala*/ 
upper = 300 /*limite máximo */
step = 20 /* tamanho da etapa única da escala*/

fahr = lower; 

while (fahr <= upper)
    { 
    celsius = 5 * (fahr -32) / 9; 
    printf("%d\t%d\n", fahr, celsius); 
    fahr = fahr + step; 
    } 
} 
~~~

* As linhas que dentro de astericos e barra */ são comentários*; eles são ignorados pelo compilador; 

* Em C, todas as variáveis devem ser declaradas antes de ser usadas; geralmente, no começo da função e antes de qualqeur instrução executável; Uma _declaration_ anuncia as propriedades das variáveis; consiste em um nome e uma lista de variáveis; 

* O tipo **int** declara um número inteiro; ao contrário de **float** que significa que o número pode ter uma parte fracionária; 

| Tipo | Propriedade | \n 
|-----| ------------|
| int | inteiro |\n
| float | números reais |\n 
| char | character(caractere) |\n 
| short | short intenger(inteiro curto) |\n 
| long | long integer (inteiro longo) |\n
| double | número real de dupla precisão |\n 

* os programas começam com uma _assignment statements_ ou instruções de atribuição; 

* O _loop_ _while_ opera da seguinte maneira: A condição em parentesis é testada. Se for verdadeira, as instruções são executadas; A condição é testada novamente e, se for verdadeira, é exexecutada novamente; 

* Quando o teste se torna falso (fahr é maior do que upper, no caso), o loop termina e a exercução parte para a próxima instrução; 

* **printf("%d\t%d\n", fahr, celsius); 
 
**%d** especifica o argumento como inteiro; **\t** impõe a distância de um tab; os operadores são correspondidos, respecitivamente, pelas variáveis nas vírgulas; 

* A primeira versão do programa tinha alguns problemas, então vamos reescrevê-lo: 

~~~C
#include <stdio.h>
{ 
float fahr, celsius; 
float lower, upper, step; 

lower = 0;
upper = 300; 
step = 20; 

fahr = lower; 
    while (fahr <= upper)
    {
    celsius = (5.0/9.0) * (fahr-32.0); 
    printf(%3.0f %6.1f\n", fahr, celsius); 
    fahr = fahr + step; 
    }       
}  
~~~

O programa é parecido, mas fahr e celsius foram declarados como _float_ e a fórmula foi escrita de maneira mais natural; 

Não foi possível escrever 5/9 porque a divisão levaria a um travamento do programa; o resultado não é um número inteiro; 

Em uma operação de inteiros, o resultado é inteiro; em uma operação entre número real (float) e int, o resultado é convertido para _float_;

O **%3.0f** indica que o número deve ter saída de três caracteres; e o **%6.1f** indica que a saída deve ter no máximo seis caracteres e um digito como ponto decimal.

A saída seria:

0 -17.8
20 -6.7
40  4.4
....

| especificação/caractere de escape | saída | 
| ---------------------------------| ------| 
| %d | print as decimal integer/inteiro decimal| \n
| %6d | print as decimal integer, com pelo menos seis caracteres de largura |\n 
| %f | print as floating point | \n 
| %6f | print as floating point, com pelo  6 characters wide | \n
| %.2f | print as floating point, 2 characters depois do decimal | \n 
| % 6.2f | print as floating point, at least 6 wide, 2 after decimal | \n 

printf também reconhece %o de octal, %x de hexa, %c de caractere, %c de caractere string e %% para ele mesmo; 

## 1.3 The for statement 
 
Existem muitas maneiras de criar um programa, vamos tentar uma variação do conversor de temporatura: 

~~~C
#include <stdio.h> 
main ()
    {    
    int fahr; 
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr -32));
    } 
~~~

A escolha entre _while_ e _for_ é arbitrária, baseada em qual parece ser mais clara; O _for_ é normalmente apropriado para _loops_ na qual a inicialização e o increment são instruções únicas e relacioadas, pois é mais compacto do que o _while_ e mantém o controle do loop em um local; 

página 17 


# 1.4 Symbolic Constants 

É uma boa prática de computação não jogar números ao léu em nossos programas; 

A linha #define cria um _symbolic name_ ou _symbolic constant_ para um string de caracteres:

**#define _name replacement list_**: nesta ocasião, toda aparição de _name_ será substituída pelo correspondente _replacement text_; 

~~~C

#include <stdio.h> 

#define LOWER 0 /* Limite minímino da tabela */
#define UPPER 300 /* Limite máximo da tabela */ 
#define STEP 20 /* Tamanha da escala */ 

main() 
{ 
int fahr; 

for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf ("%3d %6.qf\n", fahr, (5.0/9.0)*(fahr-32)); 
} 

~~~

No programa acima, as quantidades LOWER, UPPER e STEP são contantes símbólicas e não variáveis; Assim, não podem aparecer em declarações; 

As constantes simbólicas são convencionalmente escritas em caixa alta para serem diferenciadas de variáveis; Não se usa ponto e vírgula na linha #define; 

## 1.5 Character Input and Output

O modelo de entrada e saída suportado pela biblioteca padrão é muito simples; Independe de sua origem e destino , eles vão ser tratados como caracteres; 

Um _text stream_ é a sequência de caracteres dividios em linhas; cada linha consiste em zero ou mais caracteres seguidos pelo caractere da nova linha; 

A biblioteca apresenta uma série de funções para ler e escrever caracteres; _getchar_ e _putchar_ são as mais simples; 

Toda vez que é convocada, _getchar_ lê o _next input character_ do texto e retorna o seu valor; 

**c = getchar();**

A variável c contém o próximo caracterer de entrada;

A função _putchar_ imprime um caracter toda vez que é chamada; 

**putchac(c);**

### 1.5.1 File Copying

O programa mais simples que poderíamos criar com o _getchar_ e _putchar_ seria copiar uma entrada e mostrar a saída de todos caracteres digitados; 

~~~
read a character
    while (character is not end-of-file indicator)
        output the character just read
        read a character
~~~

~~~C
#include <stdio.h> 
main()
{ 
    int c; 
    
    c = getchar(); 
    while (c != EOF)
        {
        putchar(c);
        }
} 
~~~

Em c, **!=** significa "não é igual a"; 

O que parece um caractere no teclado é, como tudo em computação, armazenado como padrões de bit. O tipo _char_ é especificamente feito para armazenar este tipo de data, mas qualquer número inteiro pode ser usado; 

Em nosso programa, usamos **int** por uma razão importante; O problema é encontrar o fim da entrada dos dados válidos; A solução é _getchar_ retornar um valor que não tenha mais nenhuma entrada e que não possa ser confundido com nenhum caractere; 

Este valor é chamado **EOF** para "end of file/fim do arquivo"; Nós declaramos c como um tipo grande o suficiente para suportar qualquer valor que _getchar_ retornar;

Nós não podemos usar _char_ porque _c_ precisar ser grande o suficiente para suportar _EOF_ em adição a qualquer _char_ possível; 

_EOF_ é um inteiro definido em _<stdio.h>_ e o seu número preciso não é importante para nós, porque nunca será o mesmo do que qualquer valor de _char_; 

Mas o programa de copiar e colar seria escrito diferente por um programador mais experiente:

~~~C
#include <stdio.h> 

main()
{
    int c; 

    while (( c = getchar()) != EOF)
        putchar(c); 
} 
~~~

O parantesis em volta da instrução com a condição é necessário; A _precedence_ de **!=** é maior do que de **=**; por isso, sem os partensis o teste seria feito antes da declaração; 

### 1.5.2 Character Counting 

O Programa contador de caracteres é similiar ao programa de cópia:

~~~C
#include <stdio.h> 

main()
{ 
    long nc;
    
    nc = 0; 
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc); 
} 
~~~

**++nc** apresenta o novo _operador_ *++*, que significa _increment by one_; 

Era possível, portanto, escrever ** nc = nc + 1**, mas *++nc** é mais preciso; 

O **++** e o **--** podem ser sufixos e prefixos, mas por enquanto ficaremos nos prefixos; 

Os programas contadores de caracteres acumulam a informação em tipos _long_ e não tipos _int_; _longs_ tem pelo menos 32 bits

Nós também poderiamos usar um _double_; e agora, vamos usar também a declaração _for_ ao invés de _while_ para demonstrar outra maneira de escrever o loop: 

~~~C

#include <stdio.h> 

{ 
    double nc; 
    
for (nc = 0; getchar() != EOF; ++nc)
        ; 
    printf("%.0f\n", nc); 
} 

~~~

**printf** utiliza o **%f** para _float_ e _double_; 

**%.0f** suprime a saída do ponto decimal e da parte fracional que é zero; 

O corpo do loop _for_ é vazio porque todo o trabalho é realizado no teste e incremento; mas as regras gramaticais de C exigem que o _for_ tenha um corpo; por isso, o ponto e vírgula isolado, chamado: _null statement_; 

Ele é colocado em uma linha diferente para torná-lo visível; 

### 1.5.3 - Line counting

O próximo programa é um contador de linhas; como comentamos anteriormente, a biblioteca padrão garante que o texto de entrada apareça como uma sequência de linhas, todas terminadas por uma nova linha. Assim, contar linhas é simplesmente contar novaslinhas:

~~~C
#include <stdio.h> 

main()
{ 

    int c, nl; 

    nl = 0; 

    while ((c = getchar()) != EOF) 
    if (c == '\n')
            ++nl; 
    printf("%d\n", nl); 
} 
~~~

O corpo do _while_ agora consiste em um _if_, que controla o incremetno _++nl_; a instrução _if_ teste a condição do parantesis; se for verdadeira, ele a executa a instrução seguinte; 

Em C, **==** é a notação para "é igual a"; diferente de *=* que é utilizado para atribuição; novatos em C, costumam escrever **=** quando deveriam utilizar *==*; cuidado; 

Atenção para _strings_ vs _characters_; Em aspas simples representam o valor integral do valor numérico do caractere na linguagem da máquina; portanto **'A'** representa **65**, exemplo; 

### 1.5.4 Word Counting

O próximo programa é um contador de palavras; ele considera que é uma sequência de caracteres que não seja um espaço, um tab ou uma nova linha: 

~~~C 

#include <stdio.h>

#define IN 1 //Inside a word
#define OUT 0 //Outside a word

main()
{ 
    int c, nl, nw, nc, state; 
    
    state = OUT; 
    nl = nw = nc = 0; 
    while ((c = getchar()) !=EOF) 
    {
    nc++
    if (c =='\n')
        +nl;
    if (c == ' ' || c == '\n' || x = '\t')
        state = OUT;
    else if (state == OUT)
        {
        state = IN; 
        ++nw; 
        }
    } 
printf("%d %d %d\n", nl, nw, nc);
} 
~~~

Toda vez que este programa encontra o primeiro caractere de uma palavra, ele conta mais uma palavra; 

A variável _state_ grava o que está dentro de uma palavra; "not in a word" está assinginado com o valor _OUT_; Nós preferimos simbólicas constantes _IN_ e _OUT_ para valores literais como 1 e 0 porque eles deixam o programa mais legível; 

Pode não fazer diferença em programas pequenos, mas é essencial em programas maiores, e permite também alterações mais fáceis nos programas; 

A linha ** nl = nw = nc = 0;** seta todas as variáveis em zero; Uma atribuição é uma expressão com o valor e atribuições associados da direita para esquerda, como se tivessmos escrito: **nl (nw = (nc = 0)); ** ; 

O operador **||** signifca **ou/or**; 

**if (c == ' ' || c == '\n' || c = '\t');** diz " se c é um vazio ou c é uma nova linha ou c é um tab"; 

**\t** é uma representação visível da tecla tab; 

**&&** é o correspondente de "E/AND"; e tem procedência maior; 

Estas expressões são validadas da esquerda para direita; E eles param assim que é descobertas verdadeiras ou falsas; afinal, se c é um vazio, não é uma nova linha; 

O programa também apresenta um _else_ que especifíca uma ação alternativa se a condição da instrução _if_ for falsa; 

A forma geral é 

~~~C
if (expressão)
    instrução 1
else
    instrução 2
~~~

Apenas uma das instrução  associadas ao _if-else_ é performada. Se a _expressão_) for  verdadeira, a _instrução 1_ é executada; Se não, a _instrução 2_ é executada; 

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

## 1.8 Arguments - Call by Value

_Call by value_ é uma responsabilidade e não um ativo. Normalmente é mais comum em programas compactos com menos variáveis, porquê paramêtros podem ser tratados variáveis locais nas chamadas. Um exemplo de _power_:

~~~C
int power (int base, int n)
{
    int p; 

    for (p = 1; n > 0; --n)
        p = p * base;
    return p; 
} 
~~~

O paramêtro n é usado como uma variável temporária e seu contator negativo até se tornar zero; não existe mais razão para a variável _i_. Não importando o que é feito do _n_ dentro de _power_ não tem efeito para o argumento que _power_ foi originalmente chamada. 

Quando necessário, é possível adminstrar para uma função para modificar uma variável em uma chamada de rotina. A chamada deve fornecer o _endereço_ da variável para ser configurado (tecnicamente, um _pointer) para variável_), e a função convocada deve declarar o paramêtro para ser apontado e acessar a variável indiretamente por ela. Vamos ver mais pointer no capítulo 5. 

O caso para arrays é diferente. Quando o nome de uma array é usada como um argumento, o valor passado para a sua função é a sua locação ou endereço do começo da array - não existe a possibilidade de copiar elementos de uma array. Ao subscrever este valor, a função pode acessar e alterar qualquer argumento da array. Este é o tópico da próxima seção; 

## 1.9 Character Arrays 
 
O tipo mais comum de array em C é o array de caracteres; Para ilustrar este uso e funções para manipulá-las, vamos escrever um programa que lê o trecho de um t exto e mostra o mais longo. 

~~~C
while (theres'n no another line)
    if (it's longer than the previous longest)
        (save it)
        (save its length) 
print longest line
~~~

Este raciocínio deixa claro que o programa se divide naturalmente em duas partes; Uma obtém a nova linha e a outra salva, o restante controla o processo; 

Como as coisas se dividem tão bem, seria legal escrevê-lo assim. Vamos primeiro escrever a função _getline_ para preencher a próxima linha de entrada. Nós vamos tentar fazer a função ser útil em outros contextos; No minímo, _getline_ deve retornar um sinal de final de arquivo; um design mais útil seria retornar o tamanho da linha ou zero se o final da linha for encontrado; 

Zero é um fim de arquivo aceitável porque nunca é um tamanho de linha válido; Toda linha de texto tem pelo menos um caractere; 

Quando encontrarmos uma linha que é maior do que a maior linha prévia, ela deve ser salva em algum lugar; isto sugery uma segunda função: _copy_, para copiá-la para um lugar seguro; 

E finalmente, precisamos de um programa main para controlar _getline_ e _copy_, aqui está o resultado:

~~~C

#include <stdio.h> 
#define MAXLINE 1000 /* maximum input line lenght */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
main ()
{
    int len; /* current line lenght */
    int max; /*maximum lenght seen so for */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /*longest line saved here */
    
    max =0;
    while ((len = getline (line, MAXLINE)) > 0)
        if (len > max)
        {
        max = len;
        copy(longest, line);
        } 
    if (max > 0 /* there was a line */
        printf("%s", longest);
    return 0;
} 

/* getline: read a line into s, return length */

int getline (char s[], int lim)
{ 
    int c, i;

    for ( i=0; i < lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') 
    {
    s[i] = c;
    ++i;
    } 
    s[i] = '\0';
    return i;
} 
/* copy: copy 'from' int 'to'; assume to is big enough */ 

void copy(char to[], char from[])
{
    int i; 
    
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
} 

~~~

As Funções _getline_ e _copy_ão declaradas no começo do programa; 

_main_ e _getline_ comunicam por um par de argumentos e um valor de retorno. Em _getline_, os argumentos são declarados pela linha: **int get line(char s[], int lim);** , que especifica que o primeiro argumento, **s**, e um array, e o segundo, **lim** é um inteiro; 

A finalidade de fornecer o tamanho de um array na declaração é reservar espaço de armazenamento; O comprimento de um array _s_ não é necessário em _getline_ uma vez que seu tamanho é definido em _main_. _getline_ usa _return_ para enviar um valor de volta ao chamador, assim como a função _power_ fez. Esta linha também declara que _getline_ retorna um _int_;como _int_ é o tipo de retorno padrão, poderia ser omitido;

 Algumas funções retornam um valor utilizável, outras, como _copy_, são usadas apenas seu efeito e não retornam valor; o tipo de retorno de _copy_ é _void_; cujo estado explicita que nenhum valor é retornado; 

_getline_ coloca o caracater _'\0'_ ( o caractere nulo, cujo valor é zero) no final do array que está criando; para marcar o fim do string de caracteres; Esta conversão também é usada na linguagem C: quando uma string constante como **"hello\n"** aparece em um programa C, é armazenada como um array de caracteres contendo caracteres no string e terminando com '\0' para marcar o fim; 

O_ i _%s%_ formato especificado em _printf_ espera o argumento correspondente ser um string representado nesta forma. _copy_ também baseia-se no fato que o argumento de entrada é terminado com um _'\o'_ e copia este caractere para a saída; 

Vale mencioar que este programa, apesar de pequeno, contém problemas de design; O que _main_ faria se encontrasse uma linha maior do que seu limite? Eles foram ignorados por uma questão de breviedade da explicação; 

## 1.10 External Variables and Scope 


