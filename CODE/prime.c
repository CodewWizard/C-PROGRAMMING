#include<stdio.h>
int main(){
	int user,j = 1,i = 2,f = 0;
	printf("Enter Number to check prime or not: ");
	scanf("%d", &user); //4
	while(user > j){  //4 > 2
		if((user % i) == 0){ 
			f = 1;	
			break;
		}
		j++;
	}
	if(f == 1) printf("Not Prime");
	else printf("Its Prime");

}
