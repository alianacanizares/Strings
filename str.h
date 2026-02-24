#include <stdio.h>
#include <stddef.h>
#include <assert.h>

#ifndef STR_INCLUDED
#define STR_INCLUDED

/* Str_getLength functions by taking in an array and returns the length of the array exluding null */

size_t Str_getLength(const char pcSrc[]);

/* X */

char *Str_copy(char pcDst[], const char pcSrc[]);

/* X */

char *Str_concat (char psDst[], const char psSrc[]);

/* X */

int Str_compare (const char psSrc[], const char psDst[]);

/* X */
/*
char *Str_search (const char *psDst[], const char *psSrc[]);
*/

/* Str_getLength functions by taking in an array  */

size_t Str_getLength(const char *pcSrc);

/* Copy the string pointed by the array psSrc, to the destination string taken as parameters.  */
char *Str_copy(char *pcDst, const char *pcSrc);

/* Finds the first occurance of the second parameter taken in the first parameter. Returns entire string if no value is searched 
for, returns value if found, returns null if not */
char *Str_search (const char *pcDst, const char *pcSrc);


#endif