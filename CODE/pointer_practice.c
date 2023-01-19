#include<stdio.h>
//int main(){
	// Sum of elements of array throgh pointer
//	int sum=0, i, a[10], *p;
//	printf("Enter array elements to sum: ");
//	for(p = a; p < (a+5); p++){
//		scanf("%d",p);
//	}
//	for(p = a; p < (a+5); p++){
//		printf("%d ",*p);
//		sum+=*p;
//	}
//
//	for(p = (a+4); p >= (a); p--){
//		printf("%d ",*p);
//	}
//
//}
//


//int add(int a[], int len){
//	int i,sum = 0;
//	for(i = 0; i < 5; i++){
//		sum += a[i];
//	}
//	printf("Sum is: %d",sum);
//}
//
//
//int main(){
//	int a[10] = {1,2,3,4,10};
//	add(a,5);
//}


//int main(){
//	int max, a, b, *pa, *pb;
//	pa = &a;
//	pb = &b;
//	printf("Enter 1s no: ");
//	scanf("%d",pa);
//	printf("Enter 2nd no:");
//	scanf("%d",pb);
//	if(*pa > *pb) printf("Largest No is: %d ",*pa);
//	else printf("Largest No is: %d ",*pb);
//}


//int main(){
//	int a[100], *p, size;
//	printf("Enter Size of an Array: ");
//	scanf("%d",&size);
//	for(p = a; p < (a+size); p++){
//		printf("Enter element- : ",*p);
//		scanf("%d",p);	
//	}
//	
//	for(p = a; p < (a+size); p++){
//		printf("\nElement is- %d: ",*p);	
//	}
////	
////}
//
//int main(){
//	char a[100] = "Maddi", *p,i = 0;
////	p = a;
////	printf("%c",*p);
////	printf("\n%s",p);
//	while(a[i] != '\0'){
//		printf("'%c' ",a[i]);
//			i++;
//	}
//}



//
//int add(int *pa, int*pb){
//	int sum = 0;
//	sum = *pa + *pb;
//	printf("%d", sum);
//}
//
//int main(){
//	int a = 18, b = 2, *pa, *pb;
//	pa = a;
//	pb = b;
//	add(&pa, &pb);
//}


//int main(){
//	int a[5], *p,i;
//	p = (int *)malloc(5 * sizeof(int));
//	printf("Enter element: ");
//	for(p = a; p < (a+5); p++){
//		scanf("%d",p);
//	}
//	for(p = a; p < (a+5); p++){
//		printf("%d ",*p);
//	}
//	for(p = a; p < (a+5); p++){
//		if(*p > *(p+1)){
//			printf("\nLargest: %d",*p);
//			break;
//		}
//	}
//}
//c


//int main(){
//		char a[100], i = 0, *p;
//		printf("Enter String: ");
//		for(p = a; p < 5; p++){
//			scanf("%d", p);
//			i++;
//		}
//		printf("Length of String is: ",i);
//}


int main(){
	int i, fact = 1 ,n , *p = 1;
	printf("Enter no to get factorial of it: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		*p = *p * i;
	}
	printf("%d", *p);
}























































