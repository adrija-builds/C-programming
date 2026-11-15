# include <stdio.h>
void main()
{
    char s[100];
    int i=0;
    printf("Enter a string:");
    gets(s);
    while(s[i]!='\0')
        {
            if(s[i]>=97 && s[i]<=122)
            s[i]=s[i]-32;
            if(s[i]>=65 && s[i]>=90)
            s[i]=s[i]+32;
        }
        printf("Chganged string=%s",s);
    }
    