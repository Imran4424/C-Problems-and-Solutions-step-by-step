#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    printf("\n\n\n");
    for(i=n;i>=1;i--){
        //printf("\t");
        for(j=i;j<=i+i-1;j++){
            printf("%d ",j+1);
        }
        printf("\n\n");
    }
    printf("\n\n\n");
    return 0;
}

