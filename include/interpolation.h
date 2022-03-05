#ifndef __INTERPOLATION_SEARCH__
#define __INTERPOLATION_SEARCH__

#include <stdio.h>
#include <stdlib.h>

int interpolationIter(char * sString, char cTarget, int nLength);
int interpolationRecur(char * sString, char cTarget, int nLength);
int _interpolationRecur(char * sString, char cTarget, int iLeft, int iRight);

#endif // __INTERPOLATION_SEARCH__