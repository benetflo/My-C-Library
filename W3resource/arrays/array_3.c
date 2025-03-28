#include <stdio.h>
#include <stdlib.h>
/*

Write a program in C to find the sum of all elements of the array.

Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8

Expected Output :
Sum of all elements stored in the array is : 15


*/

double sum_of_elements(void* arr, size_t elementSize, size_t arr_len){
     
    double count = 0.0;

    if(elementSize == sizeof(int)){
        int* int_arr = (int*)arr;
        for(int i = 0; i < arr_len; i++){
            count += int_arr[i];
        }
    }else if(elementSize == sizeof(float)){
        float* float_arr = (float*)arr;
        for(int i = 0; i < arr_len; i++){
            count += float_arr[i];
        }
    }else if(elementSize == sizeof(double)){
        double* double_arr = (double*)arr;
        for(int i = 0; i < arr_len; i++){
            count += double_arr[i];
        }
    }else{
        return 0.0;
    }
    return count;
}


int main(){

    int n, num;
    printf("Enter the number of elements to be stored in the array: ");
    scanf("%d", &n);
    int numbers[n];
    for(int i = 0; i < n; i++){
        printf("Enter number: %d", i + 1);
        scanf("%d", &num);
        numbers[i] = num;
    }
    size_t result = elements_in_arr(numbers, sizeof(int), n);
    printf("Sum of all elements stored in the array is: %zu\n", result); 

    return 0;
}