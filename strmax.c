#include <stdio.h>
# include <string.h>
void main()
{
	 char str[5][20];
	 int i,l,m,n,mpos=0,npos=0;
	 for(i=0;i<5;i++)
	 {
	 	printf("\n Enter string element:");
	 	scanf("%s",str[i]);
	 	
	 }
	 for(i=0;i<5;i++)
	 {
	 	printf("\n str[%d]=%s",i,str[i]);
	 	
	 }
	 m=strlen(str[0]);
	 n=strlen(str[0]);
	 for(i=1;i<5;i++)
	 {
	 	l=strlen(str[i]);
	 	if(l>m)
	 	{
	 		m=l;
	 		mpos=i;
		 }
		 if(l<n)
		 {
		 	n=l;
		 	npos=i;
		 }
	 }
	 printf("\n Max String= %s and pos= %d  %d ",str[mpos],mpos+1,m);
	 printf("\n Min String= %s and pos= %d  %d ", str[npos], npos+1,n);
}
