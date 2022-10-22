#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Questions.h"

void letter_freq(const char word[], int freq[]){
	int character;
	    while (*word) {
	        character = (*word++) - 'A';
	        if (character < 26 || (character -= ('a' - 'A')) < 26)
	            freq[character]++;
	    }
}
