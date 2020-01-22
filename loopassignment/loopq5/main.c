#include <stdio.h>

int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int a=i*i*i;
        printf("the cube of %d is %d\n",i,a);
    }
    return 0;
}
