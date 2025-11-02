#include <stdio.h>

/* this program provides the sum of all natural numbers from 1 to n */

int main() {
	//define variable's data type
	int n;
	int c;
	int a;
	//define variable's value
	c = 1;
	a = 0;
	printf("Enter the number to add to, from 1 to n:\n");
	scanf("%d",&n);
	//add +1 until reaching n
	while (c < n + 1) 
	{
		a = a + c;
		c++;
	}
	printf("The sum from 1 to %d is %d\n\n",n,a);
	return 0;
}
