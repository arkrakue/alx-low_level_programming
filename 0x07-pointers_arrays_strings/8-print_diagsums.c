#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square metrix
 * @a: input square matrix
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int r_c;
	int frt_diag;
	int scn_diag;
	int dimen;

	dimen = size * size;
	for (r_c = 0; r_c < dimen; r_c += size + 1)
		frt_diag = a[r_c] + frt_diag;
	for (r_c = size - 1; r_c < dimen - 1; r_c += size - 1)
		scn_diag = a[r_c] + scn_diag;
	printf("%d, %d\n", frt_diag, scn_diag);
}
