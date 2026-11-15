# include <stdio.h>
# include <string.h>
struct student
{
	int roll,marks;
	char name[20];
};
struct student s;
void main()
{
	
	printf("Enter roll=");
	scanf("%d",&s.roll);
	printf("\n Enter name=");
	scanf("%s",s.name);
	printf("\n Enter marks=");
	scanf("%d",&s.marks);
	printf("\n Roll no=%d",s.roll);
	printf("\n Name= %s",s.name);
	printf("\n Marks=%d",s.marks);
	
}


