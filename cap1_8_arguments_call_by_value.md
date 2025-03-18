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


