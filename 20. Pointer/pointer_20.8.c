#include <stdio.h>


int main()
{
    int a,b,c,*x,*y;
    scanf("%d%d",&a,&b);

    x=&a;
    y=&b;

    if(*x>*y){
        printf("maximum is %d\n",*x);
    }
    else{
        printf("maximum is %d\n",*y);
    }

	return 0;
}
