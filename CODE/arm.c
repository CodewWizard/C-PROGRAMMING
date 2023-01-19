#include<stdio.h>
int main(){
	int rem = 0, cnt = 0, i = 0, sum =0;
	int num =153;
	int t = num;
	int f = 1;
	int prd =1;
	while(num > 0){  // 153 > 0
		rem = num % 10;  //5
		cnt++; //2
	num = num / 10;//15
}
 while(i < cnt){ //  1< 2
    	f = t % 10;//  3
    	prd = prd * f; // 3
    	printf("product: %d\n", prd); 
    	i++; //1
    	sum += prd;
	}

printf("sum is: %d", sum);

}
