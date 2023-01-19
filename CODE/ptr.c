#include<stdio.h>
int main(){
	int a[4],*p,i;
	printf("Enter Array: ");
	for(i = 0; i < 4; i++){
		scanf("%d", &a[i]);
	}
	for(p = &a[0]; p < &a[4]; p++){
			printf("%d ",*(p + 1));	
	}
}
