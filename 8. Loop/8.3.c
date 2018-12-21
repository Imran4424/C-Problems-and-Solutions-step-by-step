#include <stdio.h>

int main()
{
    int n,d;
    scanf("%d",&n);
    printf("\n");

    while(n>0){
        d=n%10;
        n=n/10;
        printf("%d",d);
    }
    printf("\n");

    return 0;
}
