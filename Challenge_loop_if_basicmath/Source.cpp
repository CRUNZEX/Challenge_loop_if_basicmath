#include <stdio.h>
#include <math.h>

float calculateSD(int num1, int num2, float sum, float sumPow, int c) {
	float sd = sqrt((c * sumPow - sum * sum) / (c * (c - 1)));
	return sd;
}

int main() {
	int num1, num2, c;
	float sum = 0, sumPow = 0;
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		for (int i = num1; i >= num2; i--)
		{
			printf("%d ", i);
			sum += i;
			sumPow += i * i;
		}

		printf("\nAverage = %.1f", sum / (num1 - num2 + 1));
		c = num1 - num2 + 1;
		printf("\nSD = %.2f", calculateSD(num1, num2, sum, sumPow, c));
	}

	else if (num1 == num2)
	{
		printf("%d", num1);
		printf("\nAverage = %d", num1);
		printf("\nSD = 0");
	}

	else
	{
		for (int i = num1; i <= num2; i++)
		{
			printf("%d ", i);
			sum += i;
			sumPow += i * i;
		}

		printf("\nAverage = %.1f", sum / (num2 - num1 + 1));
		c = num2 - num1 + 1;
		printf("\nSD = %.2f", calculateSD(num1, num2, sum, sumPow, c));
	}

	return 0;
}