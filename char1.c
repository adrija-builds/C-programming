# include<stdio.h>
int main()
{
    char ch;
    int i;
    printf("\n Enter a char:");
    scanf("%c",&ch);
    for(i=1;i<=26;i++)
    {
        if(ch>122)
        ch=97;
        else if(ch>90&&ch<97)
        ch=65;
        printf("%c\t",ch++);
    }
}