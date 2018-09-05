#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    printf("\n\n\n");
    for(i=n;i>=1;i--){

        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n\n");
    }
    printf("\n\n\n");
    return 0;
}
