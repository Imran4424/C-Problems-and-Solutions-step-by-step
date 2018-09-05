#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%2==1){
                if(j%2==1){
                    printf("0 ");
                }
                if(j%2==0){
                    printf("1 ");
                }
            }
            if(i%2==0){
                if(j%2==1){
                    printf("1 ");
                }
                if(j%2==0){
                    printf("0 ");
                }

            }
        }
        printf("\n");
    }


}
