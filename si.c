#include<stdio.h>

int main(){
    float p,r,t, si;

    //Enter the principle value 
    scanf("%f", &p);
    printf("Enter the principle value : %f \n", p);

    //Enter the rate of interest
    scanf("%f", &r);
    printf("Enter the rate of interest: %f \n", r);
    scanf("%f", &t);

    //ENter the amount of time (in years)
    printf("Enter the amount of time(in years): %f \n", t);

    //Find the simple interest
    si = (p * r * t)/100;
    printf("The simple interest is: %f", si);
    return 0;

}