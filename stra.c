#include <stdio.h>
#include "str.h"

/* Str_getLength functions by taking in an array  */

size_t Str_getLength(const char pcSrc[]) {
    size_t uLength = 0;
    assert(pcSrc != NULL);
    while (pcSrc[uLength] != '\0')
        uLength++;
    return uLength;
}

/* Copy the string pointed by the array psSrc, to the destination string taken as parameters.  */
char *Str_copy(const char pcSrc[], char pcDst[]) {
    int i;
    length = Str_getLength(pcSrc);
    assert(pcDst != NULL && pcSrc != NULL);
    for (i = 0; i < length + 1; i++) {
        pcDst[i] = pcSrc[i];
}
    return pcDst;

}

/* Prints a new version of the source string with the destination string concatenated to the end. Returns
the modified source string */
char *Str_concat (char psSrc[], const char psDst[]) {
    assert(psDst != NULL && pcSrc != NULL);
    lengthSrc = Str_getLength(psSrc);
    lengthDst = Str_getLength(psDst);
            for (i = 0; i < lengthDst; i++) {
                psSrc[lengthSrc + i] = psDst[i];
        }
    psDst[lengthDst + lengthSrc] = "\0";
    return psSrc;
    }

/* Compares two strings and returns 0 if the strings are equal, <1 if psSrc is less than psDst, and >1 if 
psSrc is greater than psDst*/
int *Str_compare (const char psSrc[], const char psDst[]) {
    assert(psDst != NULL && pcSrc != NULL);
    lengthSrc = Str_getLength(psSrc);
    lengthDst = Str_getLength(psDst);
    int value;
    for (i = 0; i < lengthSrc; i++) {
        for (j = 0; j < lengthDst; j++) {
            if psSrc[i] < psDst[j] {
                return value = -1;
            }
            if psSrc[i] = psDst[j] {
                return value = 0;
            }
            else return value = 1;
        }
        return value;
    }
}

/* Finds the first occurance of the second parameter taken in the first parameter. Returns entire string if no value is searched 
for, returns value if found, returns null if not */
char *Str_search (const char *psDst[], const char *psSrc[]) {
    assert(psDst != NULL && pcSrc != NULL);
    lengthSrc = Str_getLength(psSrc);
    lengthDst = Str_getLength(psDst);
    for (i = 0; i < lengthDst; i++) {
        if (Str_compare(psSrc[i], psDst[i]) = 0){
            startTrace = psDst[i];
            for (j= 0; j < lengthSrc; j++){
                if (Str_compare(psSrc[j+1], psDst[j+1])) {
                    endString = psDst[j+1];
                }
                else (return psDst[endString - startTrace])
            }
            else if (psSrc != 0) {
                return NULL;
            }
        }
        else return psDst;
    }
}
