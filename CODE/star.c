#include<stdio.h>
//int main(){
//	int i, j, cnt = 2;
//	for(i = 2; i <= 6; i++){   //5<=6
//	cnt = i;                   //  5
//		for(j = 2; j <= i; j++){ //  4<=5
//			printf("%d ", cnt);  //  7
//            	cnt++;          //  7
//		}
//		printf("\n");
//	}
//}
//
//// 2
//// 3 4
//// 4 5 6
//// 5 6 7

int main(){
	int i, j, cnt = 1;
	for(i = 0; i <= 5; i++){   //
	cnt = i;                   //
		for(j = 0; j <= i; j++){ //
			printf("%d ", cnt);  //
            	cnt--;          // 
		}
		printf("\n");
	}
}
