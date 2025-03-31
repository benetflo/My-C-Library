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


void* reverse_arr(void* arr, size_t elementSize, size_t arr_len){
    
    
    if(elementSize == sizeof(int)){
        int* int_arr = (int*)arr;
        int temp[arr_len];
        int x = arr_len - 1;
        for(int i = 0; i < arr_len; i++){
            temp[i] = int_arr[x];
            x--; 
        }
        for(int i = 0; i < arr_len; i++){
            int_arr[i] = temp[i];
        }
        return int_arr;        
    }
}



int main(){

    int test[4] =  {1,2,3,4};
    int* simon = reverse_arr(test, sizeof(test[0]), 4);

    for(int i = 0; i < 4; i++){
        printf("%d ", simon[i]);
    }
    printf("\n");
    
    return 0;
}