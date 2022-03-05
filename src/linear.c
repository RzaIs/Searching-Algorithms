#include "linear.h"

int linearIter(char * sString, char cTarget, int nLength) {
  for (register int i = 0; i < nLength; i++) {
    if (sString[i] == cTarget) return i;
  } return -1;
}

int linearRecur(char * sString, char cTarget, int nLength) {
  return _linearRecur(sString, cTarget, nLength, 0);
}

int _linearRecur(char * sString, char cTarget, int nLength, int iStart) {
  if (sString[iStart] == cTarget) return iStart;
  else if (iStart == nLength - 1) return -1;
  else return _linearRecur(sString, cTarget, nLength, iStart + 1);
}