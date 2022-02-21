// ========================
// gcc match.c -o match.out
// ./match.out
// ========================


# include <stdio.h>
// ==============================
// TAKEN FROM https://www.geeksforgeeks.org/binary-search/
//
// A iterative binary search function. It returns
// location of x in given array arr[l..r] if present,
// otherwise -1
// ==============================
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
  
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
  
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
  
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
  
    // if we reach here, then element was
    // not present
    return -1;
}

// ========================
int main(){
	int vals[] = {-78, -75,-15,-8,-3,-1,5,9, 15, 15, 78, 94, 193};
	int N = sizeof(vals)/sizeof(vals[0]);

	printf("\nf(Houses)\tf(Customer)");
	for (int i = 0; i < N; i++){
		for (int j = i + 1; j < N; j++){
			if (vals[i] + vals[j] == 0){
				printf("\n\t%d\t\t%d\t --- [Match Found!]",vals[i], vals[j]);
			}
		}
	}

    printf("\nf(Houses)\tf(Customer)");
    for (int i = 0; i < N; i++){
        int j = binarySearch(vals, i+1, N - 1, -vals[i]); // start for i+1 not 0
        if (j != -1)
            printf("\n\t%d\t\t%d\t --- [Match Found!]",vals[i], vals[j]);
    }  



	
















	printf("\n(5/2) = %d, (1/2) = %d", (5/2), (1/2));
	return 0;
}