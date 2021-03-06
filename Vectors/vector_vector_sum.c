#include "vector.h"

// Vector Vector Summation ElementWise
/*
 * V = [1,2,3,4]
 * W = [5,6,7,8]
 *
 * Vector_Vector_Sum = [1+5,2+6,3+7,4+8] = [6,8,10,12]
 *
 */

void vector_vector_sum (double *vector1, double *vector2, double *vector_result, int lenght) {

	int h; // For Loop Variable
	
	
	#pragma omp parallel for private(h)
	for (h = 0; h < lenght; h++) {

		vector_result[h] = vector1[h] + vector2[h];

	}

}


