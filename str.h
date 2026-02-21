
#ifndef STR_INCLUDED
#define STR_INCLUDED

/* Str_getLength functions by taking in an array and returns the length of the array exluding null */

size_t Str_getLength(const char pcSrc[]);

/* X */

char *Str_copy(const char pcSrc[], char pcDst[]);

/* X */

char *Str_concat (char psSrc[], const char psDst[]);

/* X */

int *Str_compare (const char psSrc[], const char psDst[]);

/* X */

char *Str_search (const char *psDst[], const char *psSrc[]);

#endif