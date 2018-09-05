#include <stdio.h>

int main()
{
    int i,j,sum,a[3][3], b[3][3], c[3][3];

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

    for(i=0;i<9;i++){
        sum=0;
        for(j=0;j<3;j++){
            if(i==0){
                sum=sum+a[i][j]*b[j][i];
                c[0][0]=sum;
            }

            if(i==1){
                i=0;
                sum=sum+a[i][j]*b[j][i+1];
                c[0][1]=sum;
                i=1;
            }

            if(i==2){
                i=0;
                sum=sum+a[i][j]*b[j][i+2];
                c[0][2]=sum;
                i=2;
            }

            if(i==3){
                i=0;
                sum=sum+a[i+1][j]*b[j][i];
                c[1][0]=sum;
                i=3;
            }

            if(i==4){
                i=0;
                sum=sum+a[i+1][j]*b[j][i+1];
                c[1][1]=sum;
                i=4;
            }

            if(i==5){
                i=0;
                sum=sum+a[i+1][j]*b[j][i+2];
                c[1][2]=sum;
                i=5;
            }

            if(i==6){
                i=0;
                sum=sum+a[i+2][j]*b[j][i];
                c[2][0]=sum;
                i=6;
            }

            if(i==7){
                i=0;
                sum=sum+a[i+2][j]*b[j][i+1];
                c[2][1]=sum;
                i=7;
            }

            if(i==8){
                i=0;
                sum=sum+a[i+2][j]*b[j][i+2];
                c[2][2]=sum;
                i=8;
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
