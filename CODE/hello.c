#include<stdio.h>
int main(){
	//Conditional Operator
//      int a = 5, b = 8, max = 0;
////      max = a > b ? printf("a is greater") : printf("b is greater");
//      max = a > b ? printf("%d",a) : printf("%d",b);

//Comma operator
//	int a = 8, b = 7, c = 9;
//	int sum = 0;
//	sum = ( a = 8, b = 7, c = 9, a+b+c );
//	printf("%d", sum);

//sizeof Operator

int var;
int a = 3;
printf("Size of varible a = %d\n", sizeof(a));
printf("Size of int %d\n" ,sizeof (int)) ;
printf("Size of float %d\n",sizeof(float));
printf( "Size of var = %d\n" ,sizeof (var)) ;
printf("Size of an integer constant = %d\n",sizeof(45));
}
