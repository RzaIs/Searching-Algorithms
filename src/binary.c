#include "binary.h"

int binaryIter(char * sString, char cTarget, int nLength) {
  register int iMiddle, iLeft = 0, iRight = nLength - 1;
  
  while (iLeft <= iRight) {
    iMiddle = (iLeft + iRight) / 2;

    if (sString[iMiddle] == cTarget) return iMiddle;
    else if (sString[iMiddle] < cTarget) iLeft = iMiddle + 1;
    else iRight = iMiddle - 1;
  }
  return -1;
}

int binaryRecur(char * sString, char cTarget, int nLength) {
  return _binaryRecur(sString, cTarget, 0, nLength - 1);
}

int _binaryRecur(char * sString, char cTarget, int iLeft, int iRight) {
  int iMiddle = (iLeft + iRight) / 2;

  if (sString[iMiddle] == cTarget) return iMiddle;
  else if (sString[iMiddle] < cTarget) return _binaryRecur(sString, cTarget, iMiddle + 1, iRight);
  else if (sString[iMiddle] > cTarget) return _binaryRecur(sString, cTarget, iLeft, iMiddle - 1);
  else return -1;
}
