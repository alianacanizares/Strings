
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

/* Prints a new version of the source string with the destination string concatenated to the end. Returns
the modified destination */
char *Str_concat (char psDst[], const char psSrc[]) {
    size_t lengthSrc = Str_getLength(psSrc);
    size_t lengthDst = Str_getLength(psDst);
    size_t i;
    assert(psDst != NULL && psSrc != NULL);
            for (i = 0; i < lengthDst; i++) {
                psDst[lengthDst + i] = psSrc[i];
        }
    psDst[lengthDst + lengthSrc] = '\0';
    return psDst;
    }

/* Compares two strings and returns 0 if the strings are equal, <1 if psSrc is less than psDst, and >1 if 
psSrc is greater than psDst*/
int Str_compare (const char psSrc[], const char psDst[]) {
    size_t lengthSrc = Str_getLength(psSrc);
    size_t lengthDst = Str_getLength(psDst);
    size_t i;
    assert(psDst != NULL && psSrc != NULL);
    for (i = 0; i < lengthSrc; i++) {
        size_t j;
        for (j = 0; j < lengthDst; j++) {
            if (psSrc[i] < psDst[j]) {
                return -1;
            }
            else if (psSrc[i] > psDst[j]) {
                return 1;
            }
        }
    }
    return 0;
}

/* Finds the first occurance of the second parameter taken in the first parameter. Returns entire string if no value is searched 
for, returns value if found, returns null if not */
char *Str_search (const char *psDst[], const char *psSrc[]) {
} /*{
    assert(psDst != NULL && psSrc != NULL);
    size_t lengthSrc = Str_getLength(psSrc);
    size_t lengthDst = Str_getLength(psDst);
    size_t i,j;
    for (i = 0; i < lengthDst; i++) {
        if (Str_compare(psSrc[i], psDst[i]) == 0){
            int startTrace = psDst[i];
            for (int j= 0; j < lengthSrc; j++){
                if (Str_compare(psSrc[j+1], psDst[j+1])) {
                    int endString = psDst[j+1];
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
*/
