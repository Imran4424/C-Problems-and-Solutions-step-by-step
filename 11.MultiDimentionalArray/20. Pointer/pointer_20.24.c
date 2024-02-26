#include <stdio.h>

int main()
{
    int n,*p,i,sum=0;
    scanf("%d",&n);
    int a[n];
    p=&a;

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+*p;
        p=p+1;
    }
    printf("sum is %d\n",sum);
    return 0;
}
