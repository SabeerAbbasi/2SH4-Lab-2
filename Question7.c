#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"


void addEff(int val1[], int val2[], int val3[], int pos1[], int pos2[], int pos3[], int k1, int k2){

	 int NonZero = k2 + k1; //non zero elements
	 int count = 0;

	    for (int i = 0; i < NonZero; i++)
	    {
	        pos3[i] = 0;
	        val3[i] = 0;
	    }


	  int sumOfVec = 0; // stores the sums of vectors;

	    for (int i = 0; i < k1; i++)// vector 1
	    {
	        for (int j = 0; j < k2; j++)// vector 2
	        {
	            if (pos1[i] == pos2[j])
	            {
	                sumOfVec = val1[i]+val2[j];
	                if (sumOfVec != 0)
	                {
	                    val3[count] = sumOfVec;
	                    pos3[count] = pos1[i];
	                    count++;
	                    sumOfVec = 0;
	                }

	            }
	        }
	    }

	    int maxDupe = count; // get the maximum duplications

	      for (int i = 0; i  < k1; i++)
	      {
	           int isUnique = 1;
	           for (int j = 0; j < maxDupe; j++)
	           {
	               if (pos1[i] == pos3[j])
	               {
	                  isUnique = 0;
	                  break;
	               }
	            }
	               if (pos3[count] == 0 && isUnique == 1)
	               {
	                   pos3[count] += pos1[i];
	                   val3[count] += val1[i];
	                   count++;
	               }
	        }

	        for (int i = 0; i  < k2; i++)
	        {
	            int isUnique = 1;
	            for (int j = 0; j < maxDupe; j++)
	            {
	                if (pos2[i] == pos3[j])
	                {
	                   isUnique = 0;
	                   break;
	                 }
	             }
	             if (pos3[count] == 0 && isUnique == 1)
	             {
	                pos3[count] += pos2[i];
	                val3[count] += val2[i];
	                count++;
	              }
	        }

	      int temp = 0;
	      int temp2 = 0;

	        for (int i = 0; i < count-1; i++)
	        {
	            for (int j = i+1; j < count; j++)
	            {
	                 if (pos3[i] > pos3[j])
	                 {
	                    temp =  val3[i];
	                    temp2 = pos3[i];
	                    val3[i] = val3[j];
	                    pos3[i] = pos3[j];
	                    val3[j] = temp;
	                    pos3[j] = temp2;
	                  }

	              }

	         }
}

