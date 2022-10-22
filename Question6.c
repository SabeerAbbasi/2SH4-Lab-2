#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"


void efficient(const int source[], int val[], int pos[], int size){
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		if(source[i] != 0)
		{
			val[index] = source[i];
			pos[index] = i;
			index++;
		}
	}
	

}

void reconstruct(int source[], int m, const int val[], const int pos[], int n){
	for(int i = 0; i<m; i++)
	{
		source[i] = 0;
	}
	for(int i = 0; i<n; i++)
	{
		int index_source = pos[i];
		source[index_source] = val[i];
	}
    
	

}
