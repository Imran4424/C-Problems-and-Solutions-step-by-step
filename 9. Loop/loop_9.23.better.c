#include <stdio.h>

int main()
{
    int a,num,count=0;
    scanf("%d",&num);

    for(a=2;a<=(num/2);a++){
        if(num%a==0){
            count++;
        }
    }
    if(count==0){
        printf("%d is a prime number\n",num);
    }
    else{
        printf("%d is not a prime num\n",num);
    }
    return 0;
}
