#include<stdlib.h>
#include<stdio.h>
#include<math.h>

// write a program which will find the mean and standard deviation of a set of 10 numbers:

float mean(float num[])
{
	//function to find the mean of an array of 10 numbers
	float mean = 0, sum=0;
	int i = 0;

	for (i=0;i<10;i++)
	{
		sum += num[i];
	}

	mean = sum/10;

	return mean;
}

float stdev(float num[], float mean)
{
	//function to find the standard deviation of an array of 10 numbers
	float dif[10], x, m;
	int i=0;

	// for each number in the array subtract the mean and square the result
	// add to running difference tally
	while (i<10)
	{
		x = num[i] - mean;
		x = x*x;
		dif[i] = x;
		i++;
	}

	// mean of squared difs
	i = 0;
	float sum = 0;

	for (i=0;i<10;i++)
	{
		sum += num[i];
	}

	m = sum/10;
	// take the square root
	double std; 
	std = sqrt(m);

	return std; 
}

int main()
{
	int i=0, x=5;
	// populate num
	float num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// take the mean using function and print it 
	float m;
	m = mean(num);
	printf("Mean = %0.4f \n", m);

	// find standard dev using second function
	double std;
	std = stdev(num, m);

	printf("Standard deviation = %0.5f \n", std);




}