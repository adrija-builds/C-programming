# include <string.h>
# include <stdio.h>
void main()
{
    char nm[50],nm1[20]="";
    int l,t,j=4,i,c=0;
    printf("Enter the full name:");
    gets(nm);
    l=strlen(nm);
    nm1[0]=nm[0];
    strcat(nm1,".");
    for(i=0;i<l;i++)
    {
        if(nm[i]==' ' )
        {
        c++;
            if(c==2)
             { t=i;
                 break;
                 }

         nm1[2]=nm[i+1];
        }
    }
    strcat(nm1,".");
    for(i=t+1;i<l;i++)
    
    {
        nm1[j]=nm[i];
        j++;

    }

    nm1[j]='\0';
    printf("Name in short:%s",nm1);



}