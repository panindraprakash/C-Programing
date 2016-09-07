#include <stdio.h>
#include <conio.h>
#include <string.h>
void main() 
{
 int i,n,d,c,e,j,b[1000];
 char a[1000];
 printf("ENTER THE NUMBER OF INPUTS\n");
 scanf("%d",&n);
 printf("ENTER THE DATA\n");
 for(i=0;i<n;i++)
 {
     scanf("%C",&a[i]);
 }
d=i;
printf("IF YOU WANT TO REMOVE DATA ENTER 1 TO ADD ENTER 0 \n");
scanf("%d",&c);
while(c>0)
{
    printf("ENTER ASSIGNED VALUE TO THE DATA TO REMOVE IT\n");
    for(i=0;i<n;i++)
    {
        printf("%c\t\t - %d\n",a[i],i);
    }
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(i==e)
        {
            for(j=0;j<n;j++)
            {
                b[j]=i;
            }
        
        }
        printf("%c\n",a[i]);
    }
    printf("ENTER 0 TO REMOVE 1 TO ADD\n");
    scanf("%d",&c);
}
while(c==1)
{
    printf("ENTER HOW MANY NUMBER OF DATA TO ADD\n");
    scanf("%d",n);
    n=d+n;
    printf("ENTER THE DATA\n");
    for(i=d;i<n;i++)
    {
        scanf("%c",a[i]);
    }
    printf("THE DATAS ARE\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==b[j])
            {
                i++;
            }
        }
        printf("%c",a[i]);
    }
    printf("ENTER 1 TO ADD 0 TO EXIT\n");
    scanf("%d",c);
}
getch();







