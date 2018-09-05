#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,*x,*y;
    scanf("%d%d",&a,&b);

    x=&a;
    y=&b;

    printf("sum is %d\n",*x+*y);
	return 0;
}
