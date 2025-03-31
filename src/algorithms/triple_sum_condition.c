#include <stdio.h>

// Write a program to compute the sum of the two input values. If the two values are the same, then return triple their sum.

enum DataType { INT, FLOAT, DOUBLE };


double triple_sum_con(void* a, void* b, size_t byte_size, enum DataType type){

	double sum = 0;
	if(&type == "INT" && byte_size == sizeof(int)){
		int* x = (int*)a;
		int* y = (int*)b;
		if(&x == &y){
			sum = (x * y);
		}

	}else if(&type == "FLOAT" && byte_size == sizeof(float)){
		;
	}else if(&type == "DOUBLE" && byte_size == sizeof(double)){
		;
	}
	return sum;
}


int main(){

	int* u = 2;
	int* o = 2;

	int k = triple_sum_con(u, o, sizeof(int), INT);
	printf("%d\n", k);

	return 0;
}
