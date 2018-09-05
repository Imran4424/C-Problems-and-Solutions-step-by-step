#include <stdio.h>

int main()
{
    int i,j,n,k=0;
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=n;i++){
        if(i>1){
            k=j-1;
        }
        for(j=k+1;j<=k+i;j++){
            printf("%6d",j);

        }
        printf("\n");
    }
    return 0;
}
