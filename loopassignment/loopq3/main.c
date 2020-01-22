#include <stdio.h>

int main()
{
    int n;
    int a;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
        a=a+i;
    }
    printf("the sum is %d\n",a);
    return 0;
}
