#include <stdio.h>

int main()
{
    int i,j,k,sum,a[3][3], b[3][3], c[3][3];

    for(i=0;i<3;i++){
        printf(" %d-th row\n",i+1);
        for(j=0;j<3;j++){

            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");

    for(i=0;i<3;i++){
        printf(" %d-th row\n",i+1);
        for(j=0;j<3;j++){

            scanf("%d",&b[i][j]);
        }
    }
    printf("\n\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=0;
            for(k=0;k<3;k++){
                sum=sum+a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
    }
    printf("\n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\t%d",c[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
