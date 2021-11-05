#include <stdio.h>
long squared(long R);
long input, answer, pi;

int main(void);
{
    printf("enter the integer value: ");
	scanf("%d", &input);
	answer = squared(input)
	//answer=R_squared*pi;
	printf("the area is%ld\n", answer);
    return 0;
}
  long squared(long R)
{
	long R_squared;
	R_squared=input*input;
	return R_squared;
	
}
