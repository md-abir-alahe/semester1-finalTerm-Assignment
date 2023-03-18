#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int vowelCounter();

int main()
{
    for(int i=0;;i++){
        printf("Enter a string : ");
    int result = vowelCounter();
    printf("%d\n",result);
    }
    return 0;
}

int vowelCounter(){
    int c;
    char str[1000];
    gets(str);
    for(int i=0 ; i<strlen(str) ; i++){
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
                c++;
            }
    }
    return c;
}
