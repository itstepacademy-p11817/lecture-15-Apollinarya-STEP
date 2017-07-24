#include "task_1.h"

// Function counting sum of digits in number given
long long get_digits_sum(long long number) 
{

	int sum = 0;
	while (number > 0)
	{
		sum += number % 10;
		number /= 10;
	}

	return sum;
}

// Function counting sum of digits for each prime number in range (l,r)
long long counter(long long l, long long r) 
{
	long long sum_of_digits = 0;
	for (long long i = l + 1; i < r; i++)
	{
		int count = 0;
		for (long long i1 = 1; i1 <= i; i1++)
		{
			if (i%i1 == 0)
			{
				count++;
			}
			if (count > 2)
			{
				break;
			}
		}
		if (count == 2)
		{
			sum_of_digits += get_digits_sum(i);
		}
	}
	return sum_of_digits;
}
