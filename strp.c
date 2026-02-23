
#include "str.h"

/* Str_getLength functions by taking in an array  */

size_t Str_getLength(const char *pcSrc)
{
   const char *pcEnd;
   assert(pcSrc != NULL);
   pcEnd = pcSrc;
   while (*pcEnd != '\0')
      pcEnd++;
   return (size_t)(pcEnd - pcSrc);
}

/* Copy the string pointed by the array psSrc, to the destination string taken as parameters.  */
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

/* Prints a modified null-terminated version of the destination string with the source string concatenated to the end. Returns
the modified destination */
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
