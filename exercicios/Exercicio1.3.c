/*
 * Exercicio1.3.c
 * 
 * Copyright 2024 victor <victor@victor-MS-7C96>
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


#include <stdio.h>

int main(void)
{
	{
	printf("Fahr \t Celsius\n");
	}
float fahr, celsius;
float lower, upper, step;

lower = 0;
upper = 300;
step = 20; 

fahr = lower;
while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

