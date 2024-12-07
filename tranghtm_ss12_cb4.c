#include <stdio.h>

int findMax( int arr[], int n ){
	int max = arr[0];
	for ( int i = 1; i< n; i++){
		if ( arr[i] > max ){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int array[9] = {23,11,78,66,77,-9,-7,0,13};
	
	printf("\nPhan tu max trong mang: %d", findMax(array, 9));
	
	return 0;
}
