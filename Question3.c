#include <stdio.h>
#include <stdlib.h>

#include "Questions.h"

void diag_scan(int mat [][N3], int arr []){
	int first_row= 0; //coordinates of element where diagonal scan starts
	int first_col = 0;
	int next_row = 0; //coordinates of next element in diagonal scan
	int next_col = 0;
	int i = 0; //used as index for arr

	for (first_row = 0; first_row < N3; first_row++)
	{
		first_col = 0; // starts at 0
		arr[i] = mat[first_row][first_col]; // adding first element of the scan to arr
		i++;
		next_row = first_row - 1; //next_row to the next row up
		next_col = first_col + 1; //next_col to the next column right

			while (next_row >= 0)
			{
				arr[i] = mat[next_row][next_col];
				next_row--; //moves up a row
				next_col++; //moves right a column
				i++;
			}
		}
	first_row = N3-1; // first_row will be the last next_row

	for (first_col = 1; first_col < N3; first_col++)
	{
		arr[i] = mat[first_row][first_col];
		i++;
		next_row = first_row - 1;
		next_col = first_col + 1;

		while (next_col < N3)
		{
			arr[i] = mat[next_row][next_col];
			next_row--;
			next_col++;

			i++;
		}
	}

	
}
