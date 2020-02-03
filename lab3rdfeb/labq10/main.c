#include <stdio.h>
#include <math.h>
int main()
{
    double x1=27.7172;
    double x2=28.2096;
    double y1=85.3240;
    double y2=83.9856;
    double d;
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("The euclidean distance between Pokhara and Kathmandu is %lf\n",d);

    return 0;
}
