#include <stdio.h>
#include <stdlib.h>

#include "Questions.h"
#include "math.h"


int is_diag_dom(int mat[][N2]){

    //this is the flag that is returned to tell whether the mat is diagonally
	int isDiag=0;
	
	//write your code below
	//Return 1 if the matrix is diagonally dominant and 0 otherwise
	    int Sumofrow = 0;
	    for(int row = 0; row < N2; row++)
	    {
	    	Sumofrow = 0, isDiag = abs(mat[row][row]);
	        for(int col = 0; col < N2; col++)
	        {
	            Sumofrow += abs(mat[row][col]);

	        }
	        Sumofrow -= isDiag;
	        if(isDiag < Sumofrow)
	            return 0;
	    }
	    return 1;

}
