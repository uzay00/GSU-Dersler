// ========================
// gcc YildizCiz.c -o YildizCiz.out
// ./YildizCiz.out
// ========================

# include <stdio.h>
// ========================
//(base) Uzays-MacBook-Pro:Code uzaycetin$ gcc YildizCiz.c -o YildizCiz.out
//(base) Uzays-MacBook-Pro:Code uzaycetin$ ./YildizCiz.out
//*
//**
//***
//****
//*****
//******

void ciz(int N){
	for (int i = 0;i<N;i++){
		printf("*");
	}
	printf("\n");
}

void ucgenciz(int N){
	for (int i = 1;i<=N;i++){
		ciz(i);
	}
}
// ========================
//(base) Uzays-MacBook-Pro:Code uzaycetin$ ./YildizCiz.out
//                  *
//                 **
//                ***
//               ****
//              *****
//             *******
//            ********
//           *********
void tersciz(int N, int k){
	for (int i = 0;i<N;i++){
		if (i < k){
			printf(" ");
		}
		else{
			printf("*");
		}
		
	}
	printf("\n");
}
void tersucgenciz(int N){
	for (int i = N-1;i>=0;i--){
		tersciz(N, i);
	}
}
// ========================
int main(){
	tersucgenciz(20);

	return 0;
}