# include <stdio.h>
# include <string.h>
void main()
{
	char arr[5][20],s[20];
	int i,flag=0;
	
	
		for(i=0;i<5;i++)
		{
			printf("\n Enter a string=");
			scanf("%s",arr[i]);
		}
		printf("\n Enter the string to be searched=");
		scanf("%s",s);
		for(i=0;i<5;i++)
		{
			if(strcmp(s,arr[i])==0)
			{
				printf("\n String found at position=%d",i+1);
				flag=1;
				break;
			}
		}
		if(flag==0)
		printf("\n Value not found");
		}
	

