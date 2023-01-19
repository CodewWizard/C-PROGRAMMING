#include<stdio.h>
int main(){
	int *ptr, var = 29;
	ptr = &var;
	printf("Value of var is (*ptr): %d\n",*ptr);
	printf("Address of ptr means address of var stored in ptr (ptr): %d\n", ptr);
	printf("Address of ptr is (ptr): %d\n", &ptr);
	printf("Address of var is (&var): %d",&var);

}
