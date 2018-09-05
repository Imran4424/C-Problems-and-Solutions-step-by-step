#include <stdio.h>

int main()
{
    int i,j,n,a;
    scanf("%d",&n);
    printf("\n\n\n");

    for(i=1;i<=n;i++){
        printf("\t");
        for(a=1;a<=n-i;a++){
        printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}
