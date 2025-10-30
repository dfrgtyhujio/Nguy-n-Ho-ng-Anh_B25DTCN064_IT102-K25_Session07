#include <stdio.h>

int main() {
    int n, i, original, reverse = 0;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    original = n;

	while(n > 0){
		i = n % 10;
		reverse = reverse * 10 + i;
		n /= 10;
	}

    if(original == reverse) {
        printf("%d la so doi xung.\n", original);
    } else {
        printf("%d khong phai la so doi xung.\n", original);
    }

    return 0;
}
