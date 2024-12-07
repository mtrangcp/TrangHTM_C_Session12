#include <stdio.h>
#include <stdbool.h>

bool checkPerfect( int n ){
	if ( n < 6 ){
		return false;
	}   
	int sum = 1;
	for ( int i = 2; i< n; i++){
		if ( n%i == 0){
			sum += i;
		}
	}
	if ( sum != n ){
		return false;
	}
	return true;
}

int main(){
	int n ,m;
	printf("Nhap so bat ki: ");
	scanf("%d", &n);
	printf("Nhap so bat ki: ");
	scanf("%d", &m);
	
	if ( checkPerfect(n) == false ){
		printf("\nSo %d k phai so hoan hao!", n);
	}else{
		printf("\nSo %d la so hoan hao!", n);
	}
	if ( checkPerfect(m) == false ){
		printf("\nSo %d k phai so hoan hao!", m);
	}else{
		printf("\nSo %d la so hoan hao!", m);
	}
	
	return 0;
}
