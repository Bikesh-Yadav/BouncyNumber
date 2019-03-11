//program to check bouncy number  eg..4867(bouncy)..4567(not)
#include<stdio.h>
#include<math.h>

void main()
{
	int num,i,count=0,len,half,temp=0,a,c1,c2,temp1;
	
	printf("enter number\n");
	scanf("%d",&num);
	
	//len=floor(log10(abs(num)))+1;//length

	while(num)
	{	
		temp1=temp; //assign next value to previous variable
				
		temp=num%10;
		num=num/10;
		
		if(temp1==0)//skipping first value
		{
			continue;
		}
		else
		{
			if(temp>temp1 && count==2||count==0)
			{
				count=1;
			}			
			 else if(temp<temp1 &&count==1||count==0)
			{
				count=2;
			}
			else
			{
				printf("not bouncy\n");
				break;
			}
			
		}
			
	}
	
	if(num==0)
	{
		printf("bouncy\n");
	}
				
	}
