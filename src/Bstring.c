#include <stdio.h>
#include <string.h>
#include "Bstring.h"




// FUNCTION TO GET LENGTH OF C-STRING. '\0' NOT INCLUDED
size_t strlen(const char* string){

	size_t count = 0;

	for(int i = 0; string[i] != '\0'; i++){
		count++;
	}

	return count;
}


