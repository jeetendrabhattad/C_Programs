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

#ifndef _FUNCTION_POINTER_H
#define _FUNCTION_POINTER_H

#include <stdio.h>
struct Calculator;

// typedef results into creating a data-type with name OPERATION which can be later used to create function pointers which can point to a function which takes 1 argument of type struct Calculator * const & returns integer.
typedef int (*OPERATION)(struct Calculator* const);

struct Calculator
{
	int a;
	int b;
	OPERATION addPtr;
	OPERATION subPtr;
	OPERATION divPtr;
	OPERATION mulPtr;
};
// initializes function pointers to respective functions.
void init(struct Calculator* const);
#endif
