#include <stdio.h>
int main()
{
	int length;
	printf("In put number of family : ");
	scanf_s("%d", &length);

	int score[length];
	int i, sum = 0;
	for (i = 1; i <= length; i++)
	{
		printf("\nFamily [%d] = ", i);
		scanf_s("%d", &score[i]);
		sum += score[i];
	}
	printf("\nCustomer = %d", sum);

	if (sum > 100)
	{
		printf("\nNeed additional staff");
	}
	else
	{
		printf("\nNo need additional staff");
	}
	printf("\n\tEnd program");

	return 0;
}