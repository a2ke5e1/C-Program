#include<stdio.h>   
#include<conio.h>
#define PI 22/7
int main()   
{  
    float radius, area;  
    printf("Enter radius of circle\n");  
    scanf("%f", & radius);  
    area = PI * radius * radius;  
    printf("Area of circle : %0.4f\n", area);  
    printf("Press any key to exit.");
    getch();  
    return 0;  
}