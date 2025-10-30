#include <stdio.h>

int main() {
    int n, a, b;
    
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    printf("Cac cap so (a, b) thoa man a^3 + b^3 = %d:\n", n);

    for(a = 0; a * a * a <= n; a++) {
        for(b = 0; b * b * b <= n - a * a * a; b++) {
            if(a * a * a + b * b * b == n) {
                printf("(%d, %d)\n", a, b);
            }
        }
    }

    return 0;
}
