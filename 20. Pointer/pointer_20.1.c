#include <stdio.h>
#include <math.h>

int main()
{
    int a,*b;
    a=3;
    b=&a;

    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",b);
    printf("%d\n",*b);
	return 0;
}
