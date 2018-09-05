#include <stdio.h>
#include <math.h>

int main()
{
    int x,y;
    double r;
    scanf("%d%d",&x,&y);

    r=pow(x,y);
    printf("%.3lf\n",r);

    return 0;
}
