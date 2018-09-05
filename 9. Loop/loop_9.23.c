#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=1;i<=100;i++){
        if(n%n==0 && n%1==0 && i!=n && i!=1){
            if(n%i!=0 && n%2!=0 && n%3!=0){
                printf("this is prime number\n");
            }
            else if(n%2==0 || n%3==0 || n%5==0 || n%7==0){
                printf("this is not primne number\n");
            }
        }

    }


    return 0;
}
