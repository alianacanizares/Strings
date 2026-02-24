
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
char *Str_copy(char pcDst[], const char pcSrc[]) {
    size_t length = Str_getLength(pcSrc);
    size_t i;
    assert(pcDst != NULL && pcSrc != NULL);
    for (i = 0; i < length + 1; i++) {
        pcDst[i] = pcSrc[i];
}
    return pcDst;

}

/* Prints a modified null-terminated version of the destination string with the source string to the end. Returns
the modified destination */
char *Str_concat (char pcDst[], const char pcSrc[]) {
    size_t lengthSrc = Str_getLength(pcSrc);
    size_t lengthDst = Str_getLength(pcDst);
    size_t i;
    assert(pcDst != NULL && pcSrc != NULL);
            for (i = 0; i < lengthSrc; i++) {
                pcDst[lengthDst + i] = pcSrc[i];
        }
    pcDst[lengthDst + lengthSrc] = '\0';
    return pcDst;
    }

/* Compares two strings and returns 0 if the strings are equal, <0 if psSrc is less than psDst, and >0 if 
psSrc is greater than psDst*/
int Str_compare (const char pcSrc[], const char pcDst[]) {
    size_t i = 0;
    assert(pcDst != NULL && pcSrc != NULL);
    while (pcSrc[i] != '\0' && pcDst[i] != '\0') {
            if (pcSrc[i] < pcDst[i]) {
                return -1;
            }
            else if (pcSrc[i] > pcDst[i]) {
                return 1;
            }
            i++;
    }
    if (pcSrc[i] == pcDst[i]) {
        return 0;
    }
    else if (pcSrc[i] < pcDst[i]) {
        return -1;
    }
    else return 1;
}

/* Finds the first occurance of the second parameter taken in the first parameter. Returns entire string if no value is searched 
for, returns value if found, returns null if not */
/*char *Str_search (const char pcDst[], const char pcSrc[]) {
    size_t i = 0;
    size_t lengthDst = Str_getLength(pcDst);
    assert(psDst != NULL && psSrc != NULL);
    if (pcSrc[0] == '\0') {
        return psDst;
    }
    else for (i = 0; i < lengthDst; i++) {
        if (Str_compare(pcSrc[i], pcDst[i]) == 0) {
            
        }
    }


    return psDst;
}*/

