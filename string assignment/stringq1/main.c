#include <stdio.h>

int main()
{
    char sentence[100];
    printf("Enter a sentence: ");
    gets(sentence);
    printf("You Entered: %s\n",sentence);
    return 0;
}
