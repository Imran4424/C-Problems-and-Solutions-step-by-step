#include <stdio.h>


int main()
{
    double a,b,c,*x,*y;
    scanf("%lf%lf",&a,&b);

    x=&a;
    y=&b;

    printf("sum is %.3lf\n",(*x)/(*y));
	return 0;
}
