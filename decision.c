//
#include<stdio.h>
int main()
{
	int total_score, mean,sub1,sub2,sub3,sub4,sub5;
	printf(" enter marks for sub1\n,sub2\n,sub3\n,sub4\n,sub5\n");
	scanf("%d%d%d%d%d", &sub1,&sub2,&sub3,&sub4,&sub5);
	total_score=sub1+sub2+sub3+sub4+sub5;
	mean=total_score/5;
	printf("the total score is =%d\n",total_score);
	printf("the mean is =%d\n",mean);
	
		if(mean>=90&&mean<=100)
		{
		printf("grade A");	
		}
	else if(mean>=80&&mean<90)
		{
			printf("grade B");
		}
		else if(mean>=70&&mean<80)
		{
			printf("grade C");
		}
else if(mean>=60&&mean<70)
	{
		printf("grade D");
	}
	else if(mean>=50&&mean<60)
		{
	printf("grade E");
			
	}
	else 
{
	printf(" print FAIL");
}
	return 0;
		}
	
