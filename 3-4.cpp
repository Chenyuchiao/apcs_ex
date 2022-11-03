#include <stdio.h>

int main() {
    int a, b, product;
    a = 20;
    b = 7;
    // Calculating product
    product = a * b;
    printf("Product = %d\n", product);
             // a = 10000  16
    a = 16 ; // a = 1000   8
             // a =  100   4
             // a =   10   2
             // a =     1  1
    printf("a = %d \n",(a = a >> 1));
    printf("a = %d \n",(a = a >> 1));
    printf("a = %d \n",(a = a >> 1));
    printf("a = %d \n",(a = a >> 1));
    return 0;
}
