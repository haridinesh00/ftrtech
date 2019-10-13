#include<stdio.h>
main()
{
int arr[10][10],t1=0,win[5],t2=0,cases,teams,i,j,k,tt=0;
printf("Enter the no. of cases\n");
scanf("%d",&cases);
for(i=0;i<cases;i++)
{
printf("Enter the no. of teams\n");
scanf("%d",&teams);
if(teams%2!=0)
{
printf("Enter an even number!!!");
exit(0);
}
else
{
	for(j=0;j<teams;j++)
	{
	printf("Enter strengths of team : %d",&(j+1));
	for(k=0;k<5;k++)
	{
	scanf("%d",&arr[j][k]);
	}
	}

	for(m=0;m<teams-1;m+=2)
	{
	for(z=0;z<5;z++)
	{
	if(arr[m][z]>arr[m+1][z])
	t1++;
	else
	t2++;
	}
	if(t1>t2)
	{
	win=m;
	win[tt]=m;
	tt++;
	}
	else
	{
	win=m+2;
	win[tt]=m+1;
	tt++;
	}
	}
}
for(j=0;j<5;j++)
{
temp=win[i];
temp1=win[i+1]
if(arr[temp]>arr[temp1])
printf("winner is %d",temp+1);
else
printf("winner is %d",temp1+1);
}
}
}










	
