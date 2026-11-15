# include <stdio.h>
# include <string.h>
int main()
{
    char nm1[20],nm2[20],nm3[20],s[60];
    printf("Enter the first name:");
    scanf("%s",nm1);
    printf("Enter the second name:");
    scanf("%s",nm2);
    printf("Enter the third name:");
    scanf("%s",nm3);
    strcpy(s,nm1);
    strcat(s," ");
    strcpy(s,nm2);
    strcat(s," ");
 strcat(s,nm3);
    printf("\n Full name:%s",s);
    return 0;

}