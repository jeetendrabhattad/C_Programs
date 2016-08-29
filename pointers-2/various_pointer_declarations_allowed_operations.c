/* Pointers
 * Copyright (C) 2013 Jeetendra Bhattad <bhattad.jeetendra@gmail.com>
 *
 * various pointer declarations demo:
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
void NonConstPointerPointingToConstData()
{
	const char* ptr ="Hello";
	printf("%s start \n", __FUNCTION__);
	printf("Data = %s\n", ptr);
	//trying to change constant data
	//gives :-  error: assignment of read-only location ‘*(ptr + 2u)’
	//ptr[2] = 'j';

	//trying to perform non constant pointer arithmetic is allowed
	ptr++;
	printf("Data After Increementing Pointer = %s\n", ptr);
	//changing non constant pointer to point other location is allowed
	ptr = "Hi";		
	printf("Data after pointing to another location = %s\n", ptr);
	printf("%s end \n\n", __FUNCTION__);
}

void ConstantPointerPointingToConstData()
{
	const char* const ptr = "Hello";
	
	printf("%s start \n", __FUNCTION__);
	printf("Data = %s\n", ptr);
	//trying to change constant data
	//gives :-  error: assignment of read-only location ‘*(ptr + 2u)’
	//ptr[2] = 'j';

	//trying to perform constant pointer arithmetic
	//gives :- error: increment of read-only variable ‘ptr’
	//ptr++;

	//changing constant pointer to point other location
	//gives :- error: assignment of read-only variable ‘ptr’
	//ptr = "Hi"; 
	printf("Data = %s\n", ptr);
	printf("%s end \n\n", __FUNCTION__);
			
}

void ConstantPoinerPointingToNonConstData()
{
	char string[] = "Hello Universe";
	char *const ptr = string;

	printf("%s start \n", __FUNCTION__);
	printf("Data = %s\n", ptr);
	//trying to change non constant data is allowed
	ptr[2] = 'j';

	//trying to perform constant pointer arithmetic
	//gives :- error: increment of read-only variable ‘ptr’
	//ptr++;

	//changing constant pointer to point other location
	//gives :- error: assignment of read-only variable ‘ptr’
	//ptr = "Hi"; 
	printf("Data = %s\n", ptr);
	printf("%s end \n\n", __FUNCTION__);
}

void NonConstantPointerToNonConstData()
{
	char string[] = "Hello Universe";
	char * ptr = string;

	printf("%s start \n", __FUNCTION__);
	printf("Data = %s\n", ptr);
	//trying to change non constant data is allowed
	ptr[2] = 'j';
	printf("Data After Modification = %s\n", ptr);

	//trying to perform non constant pointer arithmetic
	ptr++;
	printf("Data After Increementing Pointer = %s\n", ptr);

	//changing non constant pointer to point other location
	ptr = "Hi"; 
	printf("Data After changing the location = %s\n", ptr);
	printf("%s end \n\n", __FUNCTION__);

}

void SimulatePointerDeclarations()
{
	NonConstPointerPointingToConstData();
	ConstantPointerPointingToConstData();
	ConstantPoinerPointingToNonConstData();
	NonConstantPointerToNonConstData();
}

int main()
{
	printf("\n");
	SimulatePointerDeclarations();
	return 0;
}
