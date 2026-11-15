# include <stdio.h>
# include <string.h>
struct student
{
	int roll,marks;
	char name[20];
};
struct student s[3];
void main()
{
	int i;
	for(i=0;i<3;i++)
	{
	
	printf("\n Enter roll=");
	scanf("%d",&s[i].roll);
		printf("\n Enter name=");
	scanf("%s",s[i].name);
		printf("\n Enter marks=");
	scanf("%d",&s[i].marks);
	
	}
	printf("\n STUDENT DETAILS");
	for(i=0;i<3;i++)
	{
			printf("\n Roll no=%d",s[i].roll);
			printf("\n Name =%s",s[i].name);
			printf("\n Marks=%d",s[i].marks);
			
		
	}
}

