#include <stdio.h>

int main()
{
    int a,n,num,count;
    scanf("%d",&n);
    for(num=2;num<=n;num++){
        count=0;
        for(a=2;a<=(num/2);a++){
            if(num%a==0 ){
                count++;
            }
        }
        if(count==0){
            printf("%d \n",num);
        }
    }
    return 0;
}
