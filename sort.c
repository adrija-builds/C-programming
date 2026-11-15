# include <stdio.h>
void main()
{
    int arr[5],i,j,temp;
    for(i=0;i<5;i++)
    {
        printf("\n Enter the value of the array element=");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }  
    }
    }
    printf("\nThe array in sorted order:");
    for(i=0;i<5;i++)
    {
        printf("\n%d",arr[i]);
    }
}