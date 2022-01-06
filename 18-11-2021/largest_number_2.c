#include<stdio.h>
int main() {
    int a,b,c; 
    printf("Enter three numbers\n"); 
    scanf("%d %d %d", &a, &b, &c); 

    int max = a; 
    max =  b > max  ? b : max; 
    max = c > max  ? c : max;  


    int min = a; 
    min = b < min ? b : min; 
    min = c < min ? c : min;   

    printf("Max among three numbers is %d\n", max); 
    printf("Min among three numbers is %d\n", min); 
    return 0; 

}