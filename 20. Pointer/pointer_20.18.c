#include <stdio.h>

int main()
{
    int n,*p;
    p=&n;
    scanf("%d",&n);
    if(*p>0){
        printf("positive\n");
    }
    else if(*p<0){
        printf("negative\n");
    }
    else{
        printf("Zero\n");
    }

    return 0;
}
