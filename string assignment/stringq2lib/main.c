#include <stdio.h>
#include<string.h>
int main()
{
    int a;
    char string[20];
    printf("Enter a string: ");
    scanf("%s",string);
    a=strlen(string);
    printf("Length of the string is %d\n",a);
    return 0;
}
