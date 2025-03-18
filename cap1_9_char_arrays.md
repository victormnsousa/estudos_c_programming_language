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


