#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++){
        for(j=i;j<=i+i-1;j++){
            printf("%d",j);
        }
        printf("\n");
    }


}
