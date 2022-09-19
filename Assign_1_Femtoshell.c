#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LIMIT 100
int main()
{
    
    char str[100];
    char existValue[5] = {'e','x','i','t','\0'}; 
    char tmp[5] ;
    while(1)
    {
        printf("Ready For Your command >");
        fgets(str,MAX_LIMIT, stdin);
        printf("you entered %s",str);
        strncpy(tmp,str,4);
        tmp[4] = '\0';
        if (strcmp (existValue,tmp) == 0 )
        {
            printf("Good Bye\n");
            exit(0);
        }
    };
	return 0 ;
}
