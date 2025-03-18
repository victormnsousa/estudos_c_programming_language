#include <stdio.h>

//contador segunda versao

int main()
{	
	double nc;
	
	for (nc = 0; getchar () != EOF; ++nc)
		; //este ponto e vírgula é um null statment
	
	printf("%.0f\n", nc); 
}
