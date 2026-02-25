
#include "str.h"

size_t Str_getLength(const char *pcSrc)
{
   const char *pcEnd;
   assert(pcSrc != NULL);
   pcEnd = pcSrc;
   while (*pcEnd != '\0')
      pcEnd++;
   return (size_t)(pcEnd - pcSrc);
}

char *Str_copy(char *pcDst, const char *pcSrc) {
   char *pcStart = pcDst;
   assert(pcDst != NULL && pcSrc != NULL);
      while (*pcSrc != '\0') {
        *pcDst = *pcSrc;
        pcSrc++;
        pcDst++;
      }
      *pcDst = '\0';

    return pcStart;
}


char *Str_concat (char *pcDst, const char *pcSrc) {
   char *pcStart = pcDst;
   assert(pcDst != NULL && pcSrc != NULL);
   while (*pcDst != '\0') {
      pcDst++;
   }
   while (*pcSrc != '\0') {
   *pcDst = *pcSrc;
   pcDst++;
   pcSrc++;
   }
   *pcDst = '\0';

   return pcStart;
} 

int Str_compare (const char *pcSrc, const char *pcDst) {
   assert(pcDst != NULL && pcSrc != NULL);
   while (*pcSrc != '\0' && *pcDst != '\0') {
      if (*pcSrc < *pcDst) {
         return -1;
      }
      else if (*pcSrc > *pcDst) {
         return 1;
      }
      pcSrc++;
      pcDst++;
   }

   if (*pcSrc == *pcDst) {
      return 0;
   }
   else if (*pcSrc < *pcDst) {
      return -1;
   }
   else return 1;
}

/* Finds the first occurance of the second parameter taken in the first parameter. Returns entire string if no value is searched 
for, returns value if found, returns null if not */
char *Str_search (const char *pcDst, const char *pcSrc) {
   const char *startTrace;
   const char *fLoopDst;
   const char *fLoopSrc;
   assert(pcDst != NULL && pcSrc != NULL);
   if (*pcSrc == '\0') {
      return (char *)pcDst;
   }
   while (*pcDst != '\0') {
      if (*pcSrc == *pcDst) {
         startTrace = pcDst;
         fLoopDst = pcDst;
         fLoopSrc = pcSrc;
         while (*fLoopDst != '\0' && *fLoopDst != '\0') {
            if(*fLoopDst == *fLoopSrc) {
               fLoopDst++;
               fLoopSrc++;
            }
            else {
               return (char *)startTrace;
            }
         }
      pcDst++;
      }
   }
   return NULL;
}