#include <stdio.h>


int main(int argc, char const *argv[])
{
    char line[30];
    int flag[30] = {0}, count[30] = {0};

    scanf("%[^\n]", line);

    int i,j;

    for(i = 0; line[i] != NULL; i++)
    {
        for(j = 0; line[j] != NULL; j++)
        {
            if(line[i] == line[j])
            {
                count[i]++;
            }
        }
    }  

    for(i = 0; line[i] != NULL; i++)
    {
        
        if (flag[i] == 0) 
        {
            printf("%c - %d\n", line[i], count[i]);

            for(j = i; line[j] != NULL; j++)
            {
                if(line[i] == line [j])
                {
                    flag[j] = 1;
                }
            }
        
        }
        

    }  


    return 0;
}