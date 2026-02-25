#include <stdio.h>
#include <stddef.h>
#include <assert.h>


#ifndef STR_INCLUDED
#define STR_INCLUDED

/* Str_getLength functions by taking in an array and returns the length of the array exluding null */
size_t Str_getLength(const char pcSrc[]);

/* Copy the string pointed by the array psSrc, to the destination string psDst including the terminating character.
Returns the destination string.   */
char *Str_copy(char pcDst[], const char pcSrc[]);

/* Prints a modified null-terminated version of the destination string with the source string concatenated. Returns pointer
to dst. */
char *Str_concat (char psDst[], const char psSrc[]);

/* Compares two strings and returns 0 if the strings are equal, <0 if psSrc is less than psDst, and >0 if 
psSrc is greater than psDst. Returns int value. */
int Str_compare (const char psSrc[], const char psDst[]);

/* Finds the first occurance of the second parameter taken in the first parameter. Returns entire string if no value is searched 
for, returns value if found, returns null if not */
/*
char *Str_search (const char *psDst[], const char *psSrc[]);
*/

/* Str_getLength functions by taking in an array and returns the length of the array exluding null */
size_t Str_getLength(const char *pcSrc);

/* Copy the string pointed by the array psSrc, to the destination string taken as parameters. Returns pointer to destination */
char *Str_copy(char *pcDst, const char *pcSrc);

/* Prints a modified null-terminated version of the destination string with the source string concatenated to the end. Returns
the modified destination */
char *Str_concat (char *pcDst, const char *pcSrc);

/* Compares two strings and returns 0 if the strings are equal, <0 if psSrc is less than psDst, and >0 if 
psSrc is greater than psDst. Returns int value. */
int Str_compare (const char *pcSrc, const char *pcDst);

/* Finds the first occurance of the second parameter taken in the first parameter. Returns entire string if no value is searched 
for, returns value if found, returns null if not */
char *Str_search (const char *pcDst, const char *pcSrc);


#endif