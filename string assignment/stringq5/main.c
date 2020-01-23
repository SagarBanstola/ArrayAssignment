#include <stdio.h>

int main()
{
    char string[200];
    int length=0;
    printf("Enter a sentence:");
    gets(string);
    for(int i=0;i<=200;i++){
        if(string[i]==' '){
            length++;
        }
    }
    printf("Number of words in the give sentence is: %d\n",length);
    return 0;
}
