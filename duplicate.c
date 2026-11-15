# include <stdio.h>
# include <string.h>
int main()
{
	char str[100];
	int i,j;
	printf("\n Enter a string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='\n')
		continue;
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
				printf("%c",str[i]);
			}
		}
	}
	return 0;
	
}
