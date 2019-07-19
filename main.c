#include<stdio.h>
#include<string.h>

main()
{
    char str[255] ;
    printf("\n Enter a string:");
    scanf("%[^\n]",str);
    int k = -1 , j = 0;
    while(str[j] != '\0')
    {
        if(str[j] == ' ')
        {
            j++;
        }
        else
        {
            k++;
            str[k] = str[j++];
        }
    }
    k++;
    str[k]= '\0';

    printf("\n final string:%s",str);


}
