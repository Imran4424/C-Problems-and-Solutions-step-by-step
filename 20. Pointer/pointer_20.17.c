#include <stdio.h>

int main()
{
    char str[30],str2[30],*p,*pt;
    int sum=0,sum2=0;
    gets(str);
    gets(str2);

    for(p=&str;*p!='\0';p++){
        sum=sum+*p;
    }

    for(pt=&str2;*pt!='\0';pt++){
        sum2=sum2+*pt;
    }

    printf("sum  is %d\n",sum);
    printf("sum2  is %d\n",sum2);
    printf("\n\n\n");

    if(sum>sum2){
        printf("%s is maximum\n",str);
    }
    else{
        printf("%s is maximum\n",str2);
    }
    return 0;
}
