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


