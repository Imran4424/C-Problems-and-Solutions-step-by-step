#include <stdio.h>


int main()
{
    int a,b,c,*x,*y,*z;
    scanf("%d%d%d",&a,&b,&c);

    x=&a;
    y=&b;
    z=&c;

    if(*x>*y){
        if(*x>*z){
            if(*y>*z){
                printf("medium is %d\n",*y);
            }
            else{
                printf("medium is %d\n",*z);
}
        }
        else{
            printf("medium is %d\n",*x);
        }
    }
    else{
        if(*y>*z){
            if(*x>*z){
                printf("medium is %d\n",*x);
            }
            else{
                printf("medium is %d\n",*z);
            }
        }
        else{
            printf("medium is %d\n",*y);
        }
    }

	return 0;
}
