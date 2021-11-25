#include<stdio.h>
int main() {

    int max; 
    printf("Enter a number"); 
    scanf("%d", &max); 
   
    int sum = 0;
    for (int i = 1; i<=max; i++) {
        sum+=i; 
    } 

    printf("%d\n", sum); 

    return 0; 

}