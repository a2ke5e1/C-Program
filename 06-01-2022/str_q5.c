// Write a program to check if a string is palindrome or not. 

#include <stdio.h>
#include <stdbool.h>

int main() {
    char str[100], rev[100];
    int i, len;
    bool flag = true;
    printf("Enter a string: ");
    gets(str);
    printf("\n");
    
    len = 0; 
    while (str[len] != '\0') {
        len++;
    }

    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';

    for ( i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            flag = false;
            break;
        }
    }

    if (flag) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }


}