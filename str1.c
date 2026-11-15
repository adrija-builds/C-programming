# include <stdio.h>
int main()
{
    char s[100];
    int i, w=1, ch=0;
    printf("Enter a string :");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        w++;
        else
        ch++;
    }
    printf("No. of words=%d",w);
    printf("\n No of characters= %d", ch);
return 0;

}