#include <stdio.h>

/*Write a program in C to store elements in an array and print them.

Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......

Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9

*/

int main(){

    int numbers[10];
    numbers[0] = 1;
    for(int i = 1; i < 10; i++){
        numbers[i] = i;
    }

    for(int i = 0; i < 10; i++)
        printf("%d ", numbers[i]);

    return 0;
}