#include <stdio.h>

int main()
{
    int i;
    int a;
    for(i=9;i<=300;i++){
        if (i%7==0 & i%63!=0){
            a=a+i;
        }
    }
    printf("The sum is %d\n",a);
    return 0;
}
