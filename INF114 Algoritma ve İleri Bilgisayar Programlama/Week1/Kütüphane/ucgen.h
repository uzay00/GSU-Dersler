// ========================
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