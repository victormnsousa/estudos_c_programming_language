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


