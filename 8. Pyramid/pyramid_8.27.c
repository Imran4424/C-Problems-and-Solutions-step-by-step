#include <stdio.h>

int main()
{
    int i,j,n,a;
    scanf("%d",&n);
    printf("\n\n\n\n");

    for(i=1;i<=n;i++){
        printf("\t");
        for(a=1;a<=n-i;a++){
        printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c ",64+i);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        printf("\t");
        for(a=1;a<=n-i;a++){
            printf(" ");
        }
        for(j=i;j>=1;j--){
            printf("%c ",64+i);
        }
        printf("\n");
    }
    printf("\n\n\n\n");
    return 0;
}
