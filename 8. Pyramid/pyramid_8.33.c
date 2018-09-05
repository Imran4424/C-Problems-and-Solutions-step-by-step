#include <stdio.h>

int main()
{
	int a,b,c,d,n;
	scanf("%d",&n);
	printf("\n\n");
	for(a=1;a<=n;a++){
		for(c=1;c<=n-a;c++){
			printf(" ");
		}
		for(b=a;b<=a+a-1;b++){

            printf("%d",b);

		}
		if(a>1){
            for(d=a+a-2;d>=a;d--){
                printf("%d",d);
            }
		}
		printf("\n");

	}
    for(a=1;a<=n;a++){
		for(c=1;c<=a;c++){
			printf(" ");
		}
		for(b=n-a;b<=2*n-2*a-1;b++){
			printf("%d",b);
		}
		for(d=n+4-2*a;d>=n-a;d=d--){
			printf("%d",d);
		}
		printf("\n");
	}

    return 0;
}
