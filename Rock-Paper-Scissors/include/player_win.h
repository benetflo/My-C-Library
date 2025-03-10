#ifndef PLAYER_WIN_H
#define PLAYER_WIN_H

#include <stdio.h>
#include <string.h>

extern const char *choices[3]; // declared in main


static inline void player_win(int *player_score, int *pc_score, const char *p_choice, const char *pc_choice) {
    if ((strcmp(p_choice, choices[0]) == 0 && strcmp(pc_choice, choices[2]) == 0) ||
        (strcmp(p_choice, choices[1]) == 0 && strcmp(pc_choice, choices[0]) == 0) ||
        (strcmp(p_choice, choices[2]) == 0 && strcmp(pc_choice, choices[1]) == 0)) {
        printf("You won!\n");
        (*player_score)++;
    } else if (strcmp(p_choice, pc_choice) == 0) {
        printf("It's a tie!\n");
    } else {
        printf("You lost!\n");
        (*pc_score)++;
    }

    printf("Player score: %i\n", *player_score);
    printf("PC score: %i\n", *pc_score);
}

#endif // PLAYER_WIN_H
