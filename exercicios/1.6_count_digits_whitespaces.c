/*
 * 1.6_count_digits_whitespaces.c
 * 
 * Copyright 2025 victor <victor@victor-MS-7C96>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

//count digits, white space, others


#include <stdio.h>

int main(void)
{
	int c, i, nwhite, nother;
	int ndigit[10];
	
	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;
		
	while (( c = getchar()) != EOF)
			if (c >= '0' && c <= '9')
			++ndigit [c-'0'];
			else if (c == ' ' || c == '\n' || c == '\t')
				++nwhite;
			else
				++nother;
				
			printf ("digits=");
			for (i = 0; i < 10; ++i)
				printf(" %d", ndigit[i]);
			printf(", white space = %d, other = %d\n",
			nwhite, nother);
}

