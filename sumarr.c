# include <stdio.h>
int main()
{
    int arr[5], s=0,i;
    for(i=0;i<5;i++)
    {
        printf("Enter the array element=");
        scanf("%d",&arr[i]);
        s=s+arr[i];

    }
    printf("Displaying the array=\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
        
    }
    printf("Sum of the array elements=%d",s);
    return 0;


}