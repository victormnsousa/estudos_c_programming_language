#include <stdio.h>

/* print Fahrenheit-Celsius table
	for fahr = 0 , 20, ...., 300 */
main(void)
{
int fahr, celsius; //nomeamos os inteiros
int lower, upper, step;

lower = 0; //menor valor da escala
upper = 300; //maior valor da escala
step = 20; // valor de salto da escala

fahr=lower;
while (fahr <= upper)
	{
	celsius = 5 * (fahr-32) / 9;
	printf(" %3d\t , %6d\n", fahr, celsius);
	fahr = fahr + step;
	}
}
