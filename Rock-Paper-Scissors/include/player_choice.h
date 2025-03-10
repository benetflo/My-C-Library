#ifndef PLAYER_CHOICE_H
#define PLAYER_CHOICE_H

#include <stdio.h>

extern const char *choices[3]; //declared in main

char* player_choice(const char *choices[3]){
    
    for(int i = 0; i < 3; i++){
        printf("%s ", choices[i]);
    }
    printf("?\n");

    static char choice[9]; // survives outside function
    scanf("%8s", choice);

    return choice; 
}


#endif