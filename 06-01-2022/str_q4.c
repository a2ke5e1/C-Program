// Count numbers to words in a sentence. 

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a sentence: ");
    gets(str);
    printf("\n");

    int len = strlen(str);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    printf("Number of words in sentence is: %d\n", count + 1);
    return 0;
} 