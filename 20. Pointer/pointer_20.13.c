#include <stdio.h>


int main()
{
    float a,b,c,*x,*y;
    scanf("%f%f",&a,&b);

    x=&a;
    y=&b;

    if(*x>*y){
        printf("maximum is %.2f\n",*x);
    }
    else{
        printf("maximum is %.2f\n",*y);
    }

	return 0;
}
