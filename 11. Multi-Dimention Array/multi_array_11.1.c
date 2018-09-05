#include <stdio.h>

int main()
{
    int a[3][3];

    a[0][0]=4;
    a[0][1]=7;
    a[0][2]=3;
    a[1][0]=8;
    a[1][1]=5;
    a[1][2]=9;
    a[2][0]=1;
    a[2][1]=2;
    a[2][2]=6;

    printf("\t%d  %d  %d\n\n",a[0][0],a[0][1],a[0][2]);
    printf("\t%d  %d  %d\n\n",a[1][0],a[1][1],a[1][2]);
    printf("\t%d  %d  %d\n\n",a[2][0],a[2][1],a[2][2]);

    return 0;
}
