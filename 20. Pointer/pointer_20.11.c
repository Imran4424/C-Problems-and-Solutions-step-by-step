#include <stdio.h>


int main()
{
    int a,b,c,*x,*y,*z;
    scanf("%d%d%d",&a,&b,&c);

    x=&a;
    y=&b;
    z=&c;

    if(*x<*y){
        if(*x<*z){
            printf("minimum is %d\n",*x);
        }
        else{
            printf("minimum is %d\n",*z);
        }
    }
    else{
        if(*y<*z){
            printf("minimum is %d\n",*y);
        }
        else{
            printf("minimum is %d\n",*z);
        }
    }

	return 0;
}
