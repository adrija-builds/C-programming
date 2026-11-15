# include <string.h>
# include <stdio.h>
void main()
{
    char nm[50],nm1[20]="";
    int l,t,j=2,i;
    printf("Enter the full name:");
    gets(nm);
    l=strlen(nm);
    nm1[0]=nm[0];
    strcat(nm1,".");
    for(i=0;i<l;i++)
    {
        if(nm[i]==' ')
        {
        t=i;
        break;
        }
    }
    for(i=t+1;i<l;i++)
    
    {
        nm1[j]=nm[i];
        j++;

    }

    nm1[j]='\0';
    printf("Name in short:%s",nm1);



}