#include<stdio.h>
int main() {

    int a,b,c,total;
    int total_marks = 300; 
    float pcent; 

    printf("Enter the marks : \n"); 
    printf("Subject 1 : "); 
    scanf("%d", &a); 

    printf("\nSubject 2 : "); 
    scanf("%d", &b); 

    printf("\nSubject 3 : "); 
    scanf("%d", &c); 

    total = a + b + c; 
    pcent = ((float) total / total_marks) * 100; 

    printf("------------------------------------------\n\nMarkseet\n"); 

    printf("Subject 1 :  %d %s \n",a ,  a >= 60 ? "1st" : a>= 50 && a<=59 ? "2nd" :  a>= 40 && a<=49 ? "3rd" : "fail");
    printf("Subject 2 :  %d %s \n",b ,  b >= 60 ? "1st" : b>= 50 && b<=59 ? "2nd" :  b>= 40 && b<=49 ? "3rd" : "fail");
    printf("Subject 3 :  %d %s \n",c ,  c >= 60 ? "1st" : c>= 50 && c<=59 ? "2nd" :  c>= 40 && c<=49 ? "3rd" : "fail");

    printf("Total : %d  \nPercentage :  %.2f%s \nGrade : %s \n", total, pcent, "%", pcent >= 60 ? "1st" : pcent>= 50 && pcent<=59 ? "2nd" :  pcent>= 40 && pcent<=49 ? "3rd" : "fail"); 


    return 0; 
}

