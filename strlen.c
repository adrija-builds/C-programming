# include <stdio.h>
# include <string.h>
void main()
{
	char str[5][20],temp[20];
	int i,j,l1,l2;
	for(i=0;i<5;i++)
	{
		printf("\n Enter string element:");
		scanf("%s",str[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			l1=strlen(str[i]);
			l2=strlen(str[j]);
			if(l1>l2)
			{
				strcpy(temp,str[i]);
			strcpy(str[i],str[j]);
			strcpy(str[j],temp);
			
				
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\n Str[%d]=%s",i,str[i]);
		
	}
}

