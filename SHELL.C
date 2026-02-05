#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int n,j,a[10],key,gap,i,t=0;
clrscr();
printf("enter the size");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d\n",&a[i]);
for(gap=n/2;gap>0;gap=gap/=2)
{
t=t+3;
for(i=gap;i<n;i++)
{
t=t+3;
key=a[i];
t=t+2;
for(j=i;j>=gap && a[j-gap]>key;j=j-gap)
{
t=t+3;
a[j]=a[j-gap];
t=t+2;
}
a[j]=key;
t=t+1;
}
}
printf("sorted array");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
printf("total time is %d",t);
getch();
}