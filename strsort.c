# include <stdio.h>
# include <string.h>
void main()
{

	
		char str[5][20],temp[20];
		int i,flag=0,j;
		for(i=0;i<5;i++)
		{
			printf("\n Enter a string=");
			scanf("%s",str[i]);
		}
		for(i=0;i<4;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(strcmp(str[i],str[j])>0)
				{
					strcpy(temp,str[i]);
					strcpy(str[i],str[j]);
					strcpy(str[j],temp);
			}
			}
		}
		printf("\n Displaying the array in ascending order:\n");
		for(i=0;i<5;i++)
		{
			printf("\n Str[%d]=%s",i,str[i]);
					}
		}
