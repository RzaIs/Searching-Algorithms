#ifndef __LINEAR_SEARCH__
#define __LINEAR_SEARCH__

#include <stdio.h>
#include <stdlib.h>

int linearIter(char * sString, char cTarget, int nLength);
int linearRecur(char * sString, char cTarget, int nLength);
int _linearRecur(char * sString, char cTarget, int nLength, int iStart);

#endif // __LINEAR_SEARCH__