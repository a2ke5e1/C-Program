#include<stdio.h>
int main() {
    int c; 
    printf("Enter tempereature in Celsius\n");
    scanf("%d", &c); 
    float f =  (c * 1.8 ) + 32; 
    printf("Result : %f", f); 
    return 0; 
}