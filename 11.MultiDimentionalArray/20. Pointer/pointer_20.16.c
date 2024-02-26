#include <stdio.h>


int main()
{
    char a,b,c,*x,*y;
    scanf("%c %c",&a,&b);

    x=&a;
    y=&b;

    if(*x>*y){
        printf("maximum is %c\n",*x);
    }
    else{
        printf("maximum is %c\n",*y);
    }

	return 0;
}
