#include <stdio.h>

double factorial(int n)
{
    int i;
    double sum=1;
    for(i=n;i!=1;i--){

        sum=sum*i;
    }

    return sum;
}
int main()
{
    int n,r;
    double a,b,c;
    scanf("%d%d",&n,&r);

    c=(a=factorial(n))/(b=factorial(n-r));

    printf("\n\npermutation is %.2lf\n\n",c);

    return 0;
}
