#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    printf("\n\n\n");
    for(i=n;i>=1;i--){
        //printf("\t");
        for(j=1;j<=i;j++){
            if(i%2==1){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n\n");
    }
    printf("\n\n\n");
    return 0;
}

