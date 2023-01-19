#include<stdio.h>
int main(){
//	print largest no in array
	int arr[10];
    int max = arr[0];
    int i = 0;
    printf("Enter Array to Find Largest number: ");
    while(i < 10){
    	 scanf("%d", &arr[i]);
    	 printf("\n%d",arr[i]);
    	 i++;
	}
	i= 1;
    while(i < 10){
    	if(arr[i] > max){ //99 > 52
    		max = arr[i];  // 52
		}
		i++;
	}
	printf("\nLargest: %d", max);
}
