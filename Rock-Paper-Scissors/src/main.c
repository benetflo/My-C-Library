#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "player_choice.h"
#include "player_win.h"

const char *choices[3] = {"ROCK", "PAPER", "SCISSORS"}; 

int* player_score = 0;
int* pc_score = 0;

int main(){

    srand(time(NULL));
    int random_index;
    const char* pc_choice;
    const char* p_choice;
    
    while(1){
        random_index = rand() % 3;
        
        pc_choice = choices[random_index];
        p_choice = player_choice(choices);
        
        player_win(player_score, pc_score, p_choice, pc_choice);

    return 0;   
    }
}