#include <stdio.h>
#include <stdlib.h>

#include<math.h>
#include "Questions.h"



void add_vectors(double vector1[],double vector2[],double vector3[],int size)
{
    /*vector3 should store the sum of vector1 and vector2. 
	You may assume that all three arrays have the size equal to n
	*/
	//write your code below
	 for(int i = 0; i < size; i++)
	        vector3[i] = vector1[i] + vector2[i];
}

double scalar_prod(double vector1[],double vector2[],int size)
{
	// this is the variable holding the scalar product of the two vectors
    double prod=0;

    for(int i = 0; i < size; i++)
    	prod += vector1[i]*vector2[i];

    return prod;
}

double norm2(double vector1[], int size)
{
	//this is the variable holding the L2 norm of the passed vector
    double L2;
    L2 = scalar_prod(vector1, vector1, size);
    L2 = sqrt(L2);
    return L2;
}
