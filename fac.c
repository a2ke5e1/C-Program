#include<stdio.h>


int fac(int n) {
    return go(n-1, n); 
}

int go(int i, int j ) {
    if (j == 0 || j == 1) {
        return 1; 
    }
    return j * go(i-1, i); 
}

int main() {

    printf("%d\n", fac(5)); // 12 is the maximum limit.
    return 0; 
}
