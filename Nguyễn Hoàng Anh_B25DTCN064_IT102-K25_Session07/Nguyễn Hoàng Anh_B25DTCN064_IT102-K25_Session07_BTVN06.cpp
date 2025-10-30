#include <stdio.h>

int main(){
	
	int n, i, reverse = 0;
	
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	
	while(n > 0){
		i = n % 10;
		reverse = reverse * 10 + i;
		n /= 10;
	}
	
	printf("So dao nguoc: %d", reverse);
	
	return 0;
} 
