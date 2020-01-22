#include <stdio.h>

int main()
{
    int a;
    int b=0;
    int c;
    printf("enter 10 numbers:");
    for(int i=1;i<=10;i++){
        scanf("%d",&a);
        b=b+a;
    }
    c=b/10;
    printf("the sum is %d and average is %d\n",b,c);
    return 0;
}
