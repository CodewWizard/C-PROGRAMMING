#include<stdio.h>
#include<stdlib.h>

int main(){
//	Malloc - memory allocation 
int i,j;
	// int *ptr = (int *)malloc(5 * sizeof(int));
	// printf("Enter Elements\n");
	// for(i = 0; i < 5; i++){
	// 	scanf("%d",(ptr + i));	
	// }
	
	// printf("\nElements of Array\n");
	// for(j = 0; j < 5; j++){
	// 	printf("%d ", *(ptr + j));
	// }
	
	//Calloc - Contigeous of memory
	
	int *ptr2 = (int *)calloc(5, sizeof(int));
		printf("Enter Elements\n");
	for(i = 0; i < 5; i++){
		scanf("%d",(ptr2 + i));	
	}
	
	// printf("\nElements of Array:\n");
	// for(j = 0; j < 5; j++){
	// 	printf("%d ", *(ptr2 + j));
	// }

	// malloc() - it contains always garbage value 
	// calloc() - it contains always 0 (zero) 

//	Realloc - Reallocation of memory
	int *ptr3 = (int *)realloc(ptr2, 8 * sizeof(int));
		printf("\nEnter Elements for increased array\n");
	for(j = 5; j < 8; j++){
		scanf("%d",(ptr3 + j));	
	}
		printf("\nElements of an Increased Array:\n");
	for(i = 5; i < 8; i++){
		printf("%d ",*(ptr3 + i));	
	}
	printf("\nAll Elements of array\n");
	for(j = 0; j < 8; j++){
		printf("%d ", *(ptr3 + j));
	}
	
	free(ptr3);
}
