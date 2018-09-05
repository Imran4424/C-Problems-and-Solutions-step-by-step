#include <stdio.h>

int main()
{
    int n,*p,d,sum=0,*pt;
    p=&n;
    pt=&d;
    scanf("%d",&n);

    while(*p>=1){
        *pt=*p%10;
        *p=*p/10;
        sum=sum+*pt;
    }
    printf("sum of digit is %d\n",sum);

    return 0;
}
