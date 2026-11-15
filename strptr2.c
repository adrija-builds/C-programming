#include <stdio.h>
#include <string.h>
struct student
{
	int roll,marks;
	char name[20];
	
};
struct student s[3],*ptr;
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

printf("\n Student Details \n");
for(i=0;i<3;i++)
{
	ptr=&s[i];
	printf("\n Roll=%d",ptr->roll);+
	printf("\n Name=%s",ptr->name);
	printf("\n Marks=%d",ptr->marks);
}
}
