#include <stdio.h>
#include <stddef.h>
/**
 * print_array - prints an array of integers
 * @array: pointer to the start of the array
 * @size: size of the array (number of elements)
 *
 * Return: nothing
 */
int binary_search(int *array, size_t size, int value){
	int *p = array + size-1,mil,index,*q = array,i;
	if (array == NULL){
		return -1;
	}
		
	
	while(p != array){
	
	  printf("Searching in array:");
	  for(i = array - q;i <= p-q ; i++){
		  if (i == p-q){
			  printf(" %d",*(q+i));
			  break;
		  }
		  printf(" %d,",*(q+i));
	 }
	 printf("\n");
	 
         mil = (p - array)/2;
	 
	 if (*(array+mil)== value){
            index = array + mil - q;
	    return index;
	 }
	 else  if(*(array+mil) < value){
		 array = array +  mil + 1;
		 
	 }
	 else{
		p =  array +  mil -1;
		 
	 }
	}
	 printf("Searching in array: ");
         printf("%d\n",*(array));
	 if(*p == value){
            index = array + mil - q;
	    return index ;
	 }
	 return -1;
}
