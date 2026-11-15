# include <stdio.h>
# include <string.h>
struct student
{
	int roll,marks;
	char name[20];
	
}s;
struct student *ptr;
void main()
{
    ptr=&s;
	printf("\n Enter roll=");
	scanf("%d",&ptr->roll);
	printf("\n Enter name=");
	scanf("%s",ptr->name);
	printf("\n Enter marks=");
	scanf("%d",&ptr->marks);
    printf("\n Roll=%d",ptr->roll);
    printf("\n Name=%s",ptr->name);
    printf("\n  Marks=%d",ptr->marks);
}


