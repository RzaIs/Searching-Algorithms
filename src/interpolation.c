#include "interpolation.h"

int interpolationIter(char *sString, char cTarget, int nLength)
{
  register int iGuess, iLeft = 0, iRight = nLength -1;

  while (iLeft <= iRight && cTarget >= sString[iLeft] && cTarget <= sString[iRight]) {

    if (sString[iLeft] == sString[iRight]) iGuess = (iLeft + iRight) / 2;
    else {
      iGuess = iLeft + (iRight - iLeft) * (cTarget - sString[iLeft]) / (sString[iRight] - sString[iLeft]);
      if (iGuess < iLeft || iGuess > iRight) iGuess = (iLeft + iRight) / 2;    
    }
    if (sString[iGuess] == cTarget) return iGuess;
    else if (sString[iGuess] < cTarget) iLeft = iGuess + 1;
    else iRight = iGuess - 1;
  }
  return -1;
}

int interpolationRecur(char * sString, char cTarget, int nLength) {
  return _interpolationRecur(sString, cTarget, 0, nLength - 1);
}

int _interpolationRecur(char * sString, char cTarget, int iLeft, int iRight) {
  int iGuess;

  if (sString[iLeft] == sString[iRight]) iGuess = (iLeft + iRight) / 2;
  else {
    iGuess = iLeft + (iRight - iLeft) * (cTarget - sString[iLeft]) / (sString[iRight] - sString[iLeft]);
    if (iGuess < iLeft || iGuess > iRight) iGuess = (iLeft + iRight) / 2;    
  }

  if (sString[iGuess] == cTarget) return iGuess;
  else if (sString[iGuess] < cTarget) return _interpolationRecur(sString, cTarget, iGuess + 1, iRight);
  else return _interpolationRecur(sString, cTarget, iLeft, iGuess - 1);
}