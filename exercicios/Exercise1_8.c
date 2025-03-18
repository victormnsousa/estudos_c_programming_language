#include <stdio.h>

// Exercício de contador de espaços, tabs e newlines

int main(void)
{
  int c, vazios, tabs, newlines;
  vazios = tabs = newlines = 0;
  
  while((c = getchar()) != EOF)
	{
	if(c == ' ')
	++vazios;
	else if(c == '\t')
	++tabs;
	else if(c == '\n')
	++ newlines;
	}
	printf( "Vazios: %d\n Tabs: %d\n Newlines: %d\n", vazios, tabs, newlines);
}

