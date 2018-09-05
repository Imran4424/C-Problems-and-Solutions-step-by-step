#include <stdio.h>

int digitalsum(int n)
{
     int d,sum=0;

    while(n>0){
        d=n%10;
        n=n/10;
        sum=sum+d;
    }
    return sum;
}
int main()
{
    int num,s,r;
    scanf("%d",&num);

    s=digitalsum(num);
    r=digitalsum(s);

    printf("\n\n digital root is %d\n",r);

    return 0;
}
