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


