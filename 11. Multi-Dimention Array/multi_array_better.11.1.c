#include <stdio.h>

int main()
{
    int i,j,a[3][3];

    for(i=0;i<3;i++){
        printf(" %d-th row\n",i+1);
        for(j=0;j<3;j++){

            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");
    printf("\t%d  %d  %d\n\n",a[0][0],a[0][1],a[0][2]);
    printf("\t%d  %d  %d\n\n",a[1][0],a[1][1],a[1][2]);
    printf("\t%d  %d  %d\n\n",a[2][0],a[2][1],a[2][2]);

    return 0;
}
