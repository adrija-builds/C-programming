# include <stdio.h>
void main()
{
	char str[5][20];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n Enter string element:");
		scanf("%s",str[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n Str[%d]=%s",i,str[i]);
		
	}
}
