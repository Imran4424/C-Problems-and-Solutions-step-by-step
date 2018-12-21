#include <stdio.h>

int main()
{
    int n,d,a[900],i=0;
    scanf("%d",&n);
    printf("\n");

    while(n>0){
        d=n%2;
        n=n/2;
        a[i]=d;
        i=i+1;
    }
    for(i=i-1;i>=0;i--){
        printf("%d",a[i]);
    }

    printf("\n");

    return 0;
}
