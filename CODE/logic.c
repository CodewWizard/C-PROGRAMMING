//Multiply 2 positive numbers without useing * operator
#include<stdio.h>
int main()
{
	int a,b,i;
	int result=0;
	printf("Enter two numbers to be multiplied ");
	scanf("%d %d", &a, &b);
	for(i=1;i<=b;i++){ //2<=3
		result=result+a; //4	
	}
//	printf("%d * %d %d\n",a,b,result);
printf("%d", result);
}
