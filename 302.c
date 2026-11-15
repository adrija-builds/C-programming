# include <stdio.h>
# include <string.h>
int main()
{
	char str[30];
	int i,flag=0;
	printf("Enter a string:");
	fgets(str,30,stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]<0)||(str[i]>9))
		{
		
		flag=1;
		break;		
	}
}
if(flag==0)
printf("\n The string contains only digits");
else
printf("\n The string doesnt contains only digits");
return 0;
}

