#include <stdio.h>

int main()
{
    int i,j,a[3][3], b[3][3], c[3][3];

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

    c[0][0]=a[0][0]+b[0][0];
    c[0][1]=a[0][1]+b[0][1];
    c[0][2]=a[0][2]+b[0][2];
    c[1][0]=a[1][0]+b[1][0];
    c[1][1]=a[1][1]+b[1][1];
    c[1][2]=a[1][2]+b[1][2];
    c[2][0]=a[2][0]+b[2][0];
    c[2][1]=a[2][1]+b[2][1];
    c[2][2]=a[2][2]+b[2][2];

    printf("\t%d  %d  %d\n\n",c[0][0],c[0][1],c[0][2]);
    printf("\t%d  %d  %d\n\n",c[1][0],c[1][1],c[1][2]);
    printf("\t%d  %d  %d\n\n",c[2][0],c[2][1],c[2][2]);

    return 0;
}
