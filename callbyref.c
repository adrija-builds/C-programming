#include <stdio.h>
void swap(int,int);
void swap1(int *, int *);
void main()
{
	int x,y;
	printf("\n Enter 1st number=");
	scanf("%d",&x);
	printf("\n Enter 2nd number=");
	scanf("%d",&y);
	
    	swap(x,y);
    		printf("\n After swap call by vALUE");
	printf("\n Value of x= %d",x);
    printf("\n Value of y= %d",y);
	
		
	swap1(&x,&y);
	
		printf("\n After swap call by reference");
	printf("\n Value of x= %d",x);
    printf("\n Value of y= %d",y);
	
	
}
void swap( int a, int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("\n Call by value after swapping");
    printf("\n Value of a=%d",a);
    printf("\n Value of b= %d",b);
}
void swap1(int *a, int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
	printf("\n Call by reference after swapping");
	printf("\n Value of a=%d",*a);
	printf("\n Value of b= %d",*b);
}
