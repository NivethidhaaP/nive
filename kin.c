#include<stdio.h>
int main()
{
int n,p,i,j,cnt=1;
int c=1;
printf("students:");
scanf("%d",&n);
p=n/2;
printf("No. of pairs:%d",p);
int a[n];
for(i=1;i<=n-1;i++)
{
    for(j=1;j<2;j++)
    {
        if(cnt<=n)
        {
         a[i][j]=cnt;
         cnt++;
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
        printf("Students in pairs will be:%d",a[i][j]);
    }
}
return 0;
}
