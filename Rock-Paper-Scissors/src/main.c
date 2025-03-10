#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char *choices[3] = {"ROCK", "PAPER", "SCISSORS"}; 

char* player_choice(char *choices[3]){
    
    for(int i = 0; i < 3; i++){
        printf("%s ", choices[i]);
    }
    printf("?\n");

    static char choice[9]; // survives outside function
    scanf("%8s", choice);

    return choice; 
}

int player_score = 0;
int pc_score = 0;

int main(){

    srand(time(NULL));
    int random_index;
    char* pc_choice;
    char* p_choice;
    
    while(1){
        random_index = rand() % 3;
        
        pc_choice = choices[random_index];
        p_choice = player_choice(choices);
        

        if (strcmp(p_choice, choices[0]) == 0 && strcmp(pc_choice, choices[2]) == 0 ||
            strcmp(p_choice, choices[1]) == 0 && strcmp(pc_choice, choices[0]) == 0 ||
            strcmp(p_choice, choices[2]) == 0 && strcmp(pc_choice, choices[1]) == 0){
            printf("You won!\n");
            player_score++;
        }else if(strcmp(p_choice, pc_choice) == 0){
            printf("It's a tie!\n");
        }else{
            printf("You lost!\n");
            pc_score++;
        }
        
        printf("Player score: %i\n", player_score);
        printf("PC score: %i\n", pc_score);
    }

    return 0;
}