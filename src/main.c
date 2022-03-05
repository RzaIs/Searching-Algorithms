#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linear.h"
#include "binary.h"
#include "interpolation.h"

int main(int argc, char ** argv)
{
	char * sString = argv[1];
	int nSize = strlen(argv[1]);

	// int index1 = linearIter(sString, 'a', nSize);
	// int index2 = linearRecur(sString, 'b', nSize);

	// int index1 = binaryIter(sString, 'g', nSize);
	// int index2 = binaryRecur(sString, 'l', nSize);
	
	int index1 = interpolationIter(sString, '8', nSize);
	int index2 = interpolationRecur(sString, '8', nSize);


	printf("%d %d\n", index1, index2);

	return 0;
}