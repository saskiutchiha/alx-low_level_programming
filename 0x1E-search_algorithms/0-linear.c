#include <stdio.h>
#include <stddef.h>
int linear_search(int *array, size_t size, int value){
	size_t i ;
	int ret ;
	if (array == NULL){
            return -1;
	}
	for(i = 0;i<size;i++){
		if (*(array + i) == value){
			ret = i;
			return ret;
		}
		
	}
	return -1;
}
