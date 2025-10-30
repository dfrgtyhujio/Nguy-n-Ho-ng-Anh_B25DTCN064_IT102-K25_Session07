#include <stdio.h>
#include <math.h>

int main() {
	
	int n, i, temp, digit, count = 0, sum = 0;
	
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	
	temp = n; 
	while(temp != 0){
		temp /= 10;
		count++;
	}
	
	temp = n;
	while(temp != 0){
		digit = temp % 10;
		sum += pow(digit,count);
		temp /= 10; 
	}
	
	if(sum == n){
		printf("%d la so Armstrong", n);
	} else {
		printf("%d khong la so Armstrong", n);
	} 
		
	return 0;
}
