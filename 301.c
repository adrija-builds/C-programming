# include <stdio.h>
# include <string.h>
int main()
{
	char str[30];
	int i,flag=1;
	printf("Enter a string:");
	fgets(str,30,stdin);
	for(i=0;str[i]!='\0';i++)
	{ 
	if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) 
	{
            flag=0;
            break;
        }
	}
	if(flag==1)
	printf("\n The string contains only alphabets");
	else
	printf("\n The string doesnt contain alphabets");
	return 0;
}
