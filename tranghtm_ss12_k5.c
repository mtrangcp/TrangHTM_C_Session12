#include <stdio.h>
#include <stdbool.h>

bool checkElement( int n ){
	if ( n < 2 ){
		return false;
	}
	
	for ( int i = 2; i< n; i++){
		if ( n%i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n ,m;
	printf("Nhap so bat ki: ");
	scanf("%d", &n);
	printf("Nhap so bat ki: ");
	scanf("%d", &m);
	
	if ( checkElement(n) == false ){
		printf("\nSo %d k phai so nguyen to!", n);
	}else{
		printf("\nSo %d la so nguyen to!", n);
	}
	if ( checkElement(m) == false ){
		printf("\nSo %d k phai so nguyen to!", m);
	}else{
		printf("\nSo %d la so nguyen to!", m);
	}
	
	return 0;
}
