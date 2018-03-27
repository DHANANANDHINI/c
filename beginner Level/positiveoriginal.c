#include <stdio.h>

int main() {
	int n,i,j,k;
	clrscr();
	printf("The i value should be greater than n value.");
	printf("\nEnter the number:");
	scanf("%d",&n);
	printf("\nEnter the number:");
	scanf("%d",&i);
	if(i>n)
	{
		j=i+n;
		printf("\nThe value is positive",&j);
	}
	else if(i<n)
	{
		k=i-n;
		printf("\nThe value is negative",&k);
	}
	else
	{
		printf("The value is zero");
	}
	return 0;
}
