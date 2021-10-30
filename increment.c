#include<stdio.h>
int main() {
    int a, b, x, y; 
    a = 10; 
    b = ++a; 
    printf("%d %d\n", b , a); 
    x = 10; 
    y = x++; 
    printf("%d %d\n",y , x); 
    return 0; 
}