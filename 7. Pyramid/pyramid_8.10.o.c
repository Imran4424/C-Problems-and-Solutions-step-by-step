#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    printf("\n\n\n");
    for(i=1;i<=n;i++){
        printf("\t");
        for(j=1;j<=i;j++){
            printf("%c ",64+j);
        }
        printf("\n\n");
    }
    printf("\n\n\n");
    return 0;
}
