#include <stdio.h>

int main(void) {
	int n,i,j,k;
	printf("The i value should be greater than n value")
	printf("enter the number:");
	scanf("%d",&n);
	printf("enter the number");
	scanf("%d",&i);
	if(i>n)
	{
		j=i+n;
		printf("the value is positive",&j);
	}
	else if(i<n)
	{
		k=i-n;
		printf("the value is negative",&k);
	}
	else
	{
		printf("the value is zero");
	}
	// your code goes here
	return 0;
}
