#include <stdio.h>

int main() {
    int a, b, i, j, prime;

    printf("Nhap a, b: ");
    scanf("%d %d", &a, &b);

    printf("Cac so nguyen to trong khoang [%d, %d] la:\n", a, b);

    for(i = a; i <= b; i++) {
        if(i < 2) continue;
        
        prime = 1;
        
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }
        
        if(prime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
