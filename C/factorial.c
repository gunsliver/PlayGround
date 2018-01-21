#include <stdio.h>

int main(void)
{
	int num;
	do
	{
		printf("Enter a pos int: ");
		scanf("%d", &num);
		printf("You entered:%d\n", num);
	}
	while (num<0);

	int factorial;
	for (int i = 1; i<= num; i++){
		factorial = factorial *i;
	}
	printf("%d! = %d\n", num, factorial);
	return 0;
}

