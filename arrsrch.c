# include <stdio.h>
void main()
{
    int arr[5],i,ch,flag=0;
    for(i=0;i<5;i++)
    {
        printf("\n Enter the value of the array element=");
        scanf("%d",&arr[i]);
    }
    printf("|n Enter the value to be searched=");
    scanf("%d",&ch);
    for(i=0;i<5;i++)
    {
        if(arr[i]==ch)
        {
            printf("\n Value found at position %d",i+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("\n Value not found");
    
}