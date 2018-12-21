#include <stdio.h>

int main()
{
    int i,n;
    double sum=1;
    scanf("%d",&n);
    for(i=n;i!=1;i--){

        sum=sum*i;
    }
    printf("%.2lf\n",sum);

    return 0;
}
