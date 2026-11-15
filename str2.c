# include <stdio.h>
int main()
{
    int ch=0,i;
    char s[100];
    printf("Enter a string:");
    gets(s);
    for(i=0;s[i]!=0;i++)
    ch++;
    printf("\n Reversed string:");
    for(i=ch-1;i>=0;i--)
    printf("%c",s[i]);
    return 0;
}