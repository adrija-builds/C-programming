# include <stdio.h>
# include <string.h>
int main()
{
	char s[100];
	int i,v=0,c=0,sc=0,n=0;
	printf("Enter a string:");
	gets(s);
	for(i=0; s[i]!='\0'; i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		v++;
		else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
	    c++;
		else if(s[i]>='0'&&s[i]<='9')
		n++;
		else if(s[i]=' ')
		sc++;	
	}
	printf("\n Vowels=%d",v);
		printf("\n Consonants=%d",c);
        	printf("\n White Spaces=%d",sc);
        		printf("\n Digits=%d",n);
        		return 0;
        	}
