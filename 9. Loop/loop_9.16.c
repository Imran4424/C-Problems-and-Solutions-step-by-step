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
    double a,b,c,d;
    scanf("%d%d",&n,&r);

    d=(a=factorial(n))/((b=factorial(n-r))*(c=factorial(r)));

    printf("\n\ncombination is %.2lf\n\n",d);

    return 0;
}
