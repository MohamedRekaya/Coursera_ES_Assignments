/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <C programming file implementation >
 *
 * <This file includes the main function, with all the functions definitions of the header file with all the varaiables declarations and definitions>
 *
 * @author <Mohamed Rekaya>
 * @date <19-8-2021 >
 *
 */



#include <stdio.h>
#include "stats.h"
#include <stdlib.h>

/* Size of the Data Set */
#define SIZE (40)


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  int min, max, mean, median;

  /* Statistics and Printing Functions Go Here */
  min = find_minimum(test, SIZE);
  max = find_maximum(test, SIZE);
  mean = find_mean(test, SIZE);
  print_array(test, SIZE);
  printf("The array data set after sorting\n");
  sort_array(test, SIZE);
  print_array(test, SIZE);
  median = find_median(test, SIZE);
  printf("The array data set statistics\n");
  print_statistics(min, max, mean, median);


}

/* Add other Implementation File Code Here */
void print_statistics(int min, int max, int mean, int median){
	printf("The minimum of this array data set is: %d\n", min);
	printf("The maximum of this array data set is: %d\n", max);
	printf("The mean of this array data set is: %d\n", mean);
	printf("The median of this array data set: %d\n", median);
}
void print_array(unsigned char arr[], int len){
	printf("The array data set is as following from the zeor index\n");	
	for(int i=1; i<=len; i++){
		printf("%d \t", arr[i-1]);
		if( i%10 == 0)
			printf("\n");	
		
	}
	printf("\n");

}
int find_minimum(unsigned char arr[], int len){
	int min = arr[0];
	for (int i=1; i<len; i++){
		if( arr[i] < min)
			min = arr[i];
	}
	return min;
}
int find_maximum(unsigned char arr[], int len){
	int max = arr[0];
	for ( int i=1; i<len; i++){
		if( arr[i] > max)
			max = arr[i];
	}
	return max;
}
int find_mean(unsigned char arr[], int len){
	int sum=0, mean;
	for ( int i=0; i<len; i++){
		sum+=arr[i];
	}
	mean = sum/len;
	return mean;
}
void sort_array(unsigned char arr[], int len){
	int comp (const void *ptr1, const void *ptr2){
		return -(*(unsigned char*)ptr1 - *(unsigned char*)ptr2);
	}
	qsort(&arr[0], len, sizeof(unsigned char), comp);
}
int find_median(unsigned char arr[], int len){
	int median;
	sort_array(arr, len);
	if( len/2==0)
		median = arr[len/2-1];
	else
		median = (arr[((len-1)/2)-1]+arr[((len+1)/2-1)])/2;
	return median;
} 



































