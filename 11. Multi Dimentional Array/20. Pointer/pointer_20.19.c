#include <stdio.h>

int main()
{
    int i,*p;

    p=&i;
    scanf("%d",&i);
    switch(*p){
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        case 4:
            printf("four\n");
            break;
        case 5:
            printf("five\n");
            break;
        case 6:
            printf("six\n");
            break;
        case 7:
            printf("seven\n");
            break;
        case 8:
            printf("eight\n");
            break;
        case 9:
            printf("nine\n");
            break;
        default:
            printf("not a digit\n");
            break;
    }

    return 0;
}
