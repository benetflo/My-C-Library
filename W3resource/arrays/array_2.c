#include <stdio.h>

/*

Write a program in C to read n number of values in an array and display them in reverse order.

Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7

Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2
*/

int main(){

    int n, num = 0;
    printf("Input the number of elements to store in array: ");
    scanf("%d", &n);
    int numbers[n];

    for(int i = 0; i < n; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        numbers[i] = num;
    }

    for(int i = n; i > 0; i--){
        printf("%d ", numbers[i - 1]);
    }
    printf("%c", '\n');
    
    return 0;
}