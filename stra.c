
#include "str.h"


size_t Str_getLength(const char pcSrc[]) {
    size_t uLength = 0;
    assert(pcSrc != NULL);
    while (pcSrc[uLength] != '\0')
        uLength++;
    return uLength;
}

char *Str_copy(char pcDst[], const char pcSrc[]) {
    size_t length = Str_getLength(pcSrc);
    size_t i;
    assert(pcDst != NULL && pcSrc != NULL);
    for (i = 0; i < length + 1; i++) {
        pcDst[i] = pcSrc[i];
}
    return pcDst;

}

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


char *Str_search (const char pcDst[], const char pcSrc[]) {
    size_t i = 0;
    size_t lengthDst = Str_getLength(pcDst);
    assert(psDst != NULL && psSrc != NULL);

}

