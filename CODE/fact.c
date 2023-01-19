#include<stdio.h>
int main(){
	int user, prd = 1, i = 1;
	printf("Enter no: ");
	scanf("%d",&user);
	i = 1;
	while(user >= i){  //4 >= 4
		prd *= i;  //24
		i++;
	}
	printf("Factorial: %d",prd);
}
