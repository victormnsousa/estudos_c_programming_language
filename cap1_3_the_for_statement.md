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


