// Input a string from the user and print it using gets() and puts().

#include <stdio.h>
#include <string.h>

int main() {

    // gets input from the user
    char str[100];
    printf("Enter a string: ");
    gets(str);
    puts(str);

}