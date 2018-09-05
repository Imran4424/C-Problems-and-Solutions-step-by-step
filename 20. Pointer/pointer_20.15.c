#include <stdio.h>


int main()
{
    double a,b,c,*x,*y;
    scanf("%lf%lf",&a,&b);

    x=&a;
    y=&b;

    if(*x>*y){
        printf("maximum is %.2lf\n",*x);
    }
    else{
        printf("maximum is %.2lf\n",*y);
    }

	return 0;
}
