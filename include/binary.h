#ifndef __BINARY_SEARCH__
#define __BINARY_SEARCH__

#include <stdio.h>
#include <stdlib.h>

// Only for sorted strings
int binaryIter(char * sString, char cTarget, int nLength);
// Only for sorted strings
int binaryRecur(char * sString, char cTarget, int nLength);
int _binaryRecur(char * sString, char cTarget, int iLeft, int iRight);

#endif // __BINARY_SEARCH__