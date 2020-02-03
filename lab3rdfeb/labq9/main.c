#include <stdio.h>
int main()
{
    int a;
    int s=0;
    printf("enter a number:");
    scanf("%d",&a);
    do {
        s=s+a%10;
        a=a/10;}
    while (a>0);
    printf("the sum is %d",s);
    return 0;


}
