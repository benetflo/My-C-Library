#include <stdio.h>
#include <stdlib.h>
/*
Write a program in C to copy the elements of one array into another array.

Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12

Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
*/
int main(){

    size_t n, num;
    printf("Enter the number of elements to be stored in the array: ");
    scanf("%zu", &n);

    int first_arr[n], second_arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter number %d: ", i+1);
        scanf("%zu", &num);
        first_arr[i] = num;
    }

    for(int i = 0; i < n; i++){
        second_arr[i] = first_arr[i];
    }

    printf("The elements stored in the first array are: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", first_arr[i]);
    }
    printf("\nThe elements copied into the second array are: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", second_arr[i]);
    }
    printf("\n");

    return 0;
}
