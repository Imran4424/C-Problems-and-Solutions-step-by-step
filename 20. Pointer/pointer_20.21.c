#include <stdio.h>

int main()
{
    int i,*p,sum=1;
    scanf("%d",&i);
    p=&i;

    for( ;*p>=1;*p=*p-1){
        sum=sum*(*p);
    }
    printf("factorial is %d\n",sum);

    return 0;
}
