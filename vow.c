# include <stdio.h>
int main()
{
    char m;
    printf("Enter a character=");
    scanf("%c",&m);
    switch(m)
    {
        case 'A':
        {
            printf("Vowel");
            break;
        }
        case 'a':
        {
            printf("Vowel");
            break;
        }
    case 'e':
        {
            printf("Vowel");
            break;
        }    
        case 'E':
        {
            printf("Vowel");
            break;
        }
        default:
        printf("NA");
     
    }
    return 0;

    }