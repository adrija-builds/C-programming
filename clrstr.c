# include <stdio.h>
# include <string.h>
void main()
{
	int i,j=0;
	char s1[100],s2[100];
	printf("Enter a string:");
	gets(s1);
	for(i=0;s1[i]!=0;i++)
	{
		if((s1[i]>='a'&&s1[i]<='z')||(s1[i]>='A'&&s1[i]<='Z')){
		
		s2[j]=s1[i];
		j++;
	}
}
s2[j]='\0';
printf("\n Clean String= %s",s2);
}
