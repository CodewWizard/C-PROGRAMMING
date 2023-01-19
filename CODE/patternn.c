#include<stdio.h>
//1
//0 1
//1 0 1
//0 1 0 1 
//1 0 1 0 1
//
// int main(){
// 	int i, j, cnt = 1;
// 	for(i = 1; i <= 5; i++){ 
// 		cnt = 1;   //2 <= 5
// 		for(j = 1; j <= i; j++){  //1 <= 2
// 			printf("%d ",cnt); 
// 			cnt = 1;  // 1
// 		}
// 		printf("\n");
// 		cnt = 0;
// 	}
// }

//*
//**
//***
//****
// *****
int main(){
	int i, j;
	for(i = 0; i < 5; i++){
		for(j = 0; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
}


//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5

//int main(){
//	int i, j, cnt = 1;
//	for(i = 0; i < 5; i++){
//		for(j = 0; j <= i; j++){
//			printf("%d",cnt);
//		}
//		printf("\n");
//		cnt++;
//	}
//}


//1 
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5

//int main(){
//	int i, j, cnt = 1;
//	for(i = 1; i <= 5; i++){
//		for(j = 1; j <= i; j++){
//			printf("%d ",cnt);
//			cnt++;
//		}
//		printf("\n");
//		cnt = 1;
//	}
//}


//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15

//int main(){
//	int i, j, cnt = 1;
//	for(i = 1; i <= 5; i++){
//		for(j = 1; j <= i; j++){
//			printf("%d ",cnt);
//			cnt++;
//		}
//		printf("\n");
	//}
//}


//2
//3 4
//4 5 6
//5 6 7 8
//6 7 8 9 10

//int main(){
//	int i, j, cnt =2;
//	for(i = 2; i <= 6; i++){
//		cnt = i;
//		for(j = 2; j <= i; j++){
//			printf("%d ", cnt);
//			cnt++;
//		}
//		printf("\n");
//	}
//}


// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1


//int main(){
//	int i, j, cnt =5;
//	for(i = 5; i >= 1; i--){
//		cnt = 5;
//		for(j = 5; j >= i; j--){
//			printf("%d ",cnt);
//			cnt--;
//		}
//		printf("\n");
//	}
//}



// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1


//int main(){
//	int i,j,cnt = 5;
//	for(i = 5; i >= 1; i--){
//		for(j = 5; j >= i; j--){
//			printf("%d ",cnt);
//		}
//		printf("\n");
//		cnt--;
//	}
//}



// * * * * *
// * * * *
// * * *
// * * 
// *

//int main(){
//	int i, j;
//	for(i = 1; i <= 5; i++){
//		for(j = 5; j >= i; j--){
//			printf("* ");
//		}
//		printf("\n");
//	}
//} 



// 5 5 5 5 5
// 4 4 4 4
// 3 3 3
// 2 2
// 1

//int main(){
//	int i,j,cnt = 5;
//	for(i = 5; i >= 1; i--){
//		for(j = 1; j <= i; j++){
//			printf("%d ",cnt);
//		}
//		printf("\n");
//		cnt--;
//	}
//}


// 1 2 3 4 5
// 1 2 3 4
// 1 2 3 
// 1 2
// 1

//int main(){
//	int i,j,cnt = 1;
//	for(i = 5; i >= 1; i--){
//		cnt = 1;
//		for(j = 1; j <= i; j++){
//			printf("%d ",cnt);
//			cnt++;
//		}
//		printf("\n");
//	}
//}



// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5

//
//int main(){
//	int i,j,cnt = 5;
//	for(i = 5; i >= 1; i--){
//		cnt = 5;
//		for(j = 1; j <= i; j++){
//			printf("%d ",cnt);
//			cnt--;
//		}
//		printf("\n");
//	}
//}


// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 2 2
// 1
	
	
//int main(){
//	int i,j,cnt = 1;
//	for(i = 5; i >= 1; i--){
//		for(j = 1; j <= i; j++){
//			if(i == 2){
//				printf("2 ");
//			}
//			else if(i == 1){
//			  printf("1 ");		
//			}
//			else{
//				printf("%d ",cnt);
//			}
//		}
//		printf("\n");
//		cnt++;
//	}
//}	



//         *
//        **
//       ***
//      ****
//     *****
	

//int main(){
//	int i,j,cnt = 1,k;
//	for(i = 5; i >= 1; i--){   // 5 >= 1 
//		for(j = 1; j <= i-1; j++){  // 2 <= 4 
//			printf(" ");           
//		}
//		for(k = 5; k >= j; k--){
//			printf("*");
//		}
//		printf("\n");
//	}
//}



//     *
//    * *
//   * * *
//  * * * *
// * * * * *


// int main(){
// 	int i,j,k;  
// 	for(i = 5; i >= 1; i--){   // 5 >= 1 
// 		for(j = 1; j <= i-1; j++){  // 4 <= 4 
// 			printf(" ");           
// 		}
// 		for(k = 5; k >= j; k--){   //4 >= 4
// 			printf(" *");
// 		}
// 		printf("\n");
// 	}
// }



// waitok mummy ali?haa
