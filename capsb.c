# include<stdio.h>
int main()
{
    char ch;
    int i;
    printf("\n Enter a character:");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)
    ch=ch-32;
    else if (ch>=65 && ch<=90)
    ch=ch+32;
    printf("Changed character: %c",ch);
    return 0;
}