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
#include <assert.h>
#include "calculator.h"

static int add(struct Calculator* const this)
{
	assert(this!=NULL);
	return this->a+this->b;
}

static int sub(struct Calculator* const this)
{
	assert(this!=NULL);
	return this->a-this->b;
}

static int mul(struct Calculator* const this)
{
	assert(this!=NULL);
	return this->a*this->b;
}

static int div(struct Calculator* const this)
{
	assert(this!=NULL);
	assert(this->b!=0);
	return this->a/this->b;
}

void init(struct Calculator* const this)
{
	this->addPtr = add;
	this->subPtr = sub;
	this->divPtr = div;
	this->mulPtr = mul;	
}	










