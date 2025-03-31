#include <stdio.h>
#include <string.h>
#include "Bstring.h"




// FUNCTION TO GET LENGTH OF C-STRING. '\0' NOT INCLUDED
size_t str_len(const char* string){

	size_t count = 0;

	for(int i = 0; string[i] != '\0'; i++){
		count++;
	}

	return count;
}

// FUNCTION TO GET AMOUNT OF OCCURENCIES OF 'c' IN STRING
size_t str_ocurr(const char* string, char c){

	size_t count = 0;

	for(int = 0; string[i] != '\0', i++){
		if(string[i] == c){
			count++;
		}
	}

	return count;
}

// FUNCTION TO CHECK IF 'c' IN STRING
size_t str_has_char(const char* string, char c){

	for(int i = 0; string[i] != '\0'; i++){
		if(string[i] == c){
			return 1;
		}
	}
	return 0;
}
