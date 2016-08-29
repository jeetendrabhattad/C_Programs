/* Encapsulation in C
 * Copyright (C) 2013 Jeetendra Bhattad <bhattad.jeetendra@gmail.com>
 *
 * Encapsulation in C:
 *
 * This is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 */

#include <stdio.h>
#include "calculator.h"

void SimulateCalculator()
{
	struct Calculator calc;
	// a, b & 4 function pointers
	int choice;
	
	init(&calc);

	printf("\n Enter the two numbers:-");
	scanf("%d %d", &calc.a, &calc.b);		
	printf("\n 1. Add\n 2. Sub\n 3. Mul\n 4. Div\n");
	printf("\n Enter your choice:-");	
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("Result of Addition %d\n",calc.addPtr(&calc));
			break;
		case 2:
			printf("Result of Subtraction %d\n",calc.subPtr(&calc));
			break;
		case 3:
			printf("Result of Multiplication %d\n",calc.mulPtr(&calc));
			break;
		case 4:
			printf("Result of Division %d\n",calc.divPtr(&calc));
			break;
	}
}

int main()
{
	SimulateCalculator();
}
