#include<stdio.h>
#include<math.h>
int main() {
    int a, b, c; 
    printf("Enter the length of the sides of traingle : \n");
    scanf("%d %d %d", &a, &b, &c); 

    int per = a + b + c; 
    printf("Perminter of the triangle :  %d \n", per); 

    float s = per / 2 ; 
    float area = sqrt(s * (s - a) * (s -b ) * (s -c )); 
    printf("Area of the triangle : %f", area); 
    return 0; 
}