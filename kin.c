#include<stdio.h>
int main()
{
int n,p,i,j,count=1;
static int c=1;
printf("Enter the number of students:");
scanf("%d",&n);
p=n/2;
printf("The number of Pairs:%d",p);
int a[n];
for(i=1;i<=n-1;i++)
{
    for(j=1;j<2;j++)
    {
        if(count<=n)
        {
         a[i][j]=count;
         count++;
        }
        else
        {
         a[i][j]=c;
         c++;
        }
    }
}
for(i=1;i<=n-1;i++)
{
    for(j=1;j<2;j++)
    {
        printf("The Students in pairs will b:%d",a[i][j]);
    }
}
return 0;
}
