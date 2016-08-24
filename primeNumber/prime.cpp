#include <iostream>
#include <climits>
#include <cmath>

int* prime(int numPrime)
{
	int primeNums[numPrime];
	int primeCount = 0;
	bool isPrime = true;

	int i = 2;
	while ((primeCount < numPrime) && (i < INT_MAX))
	{
		for(int j=2; j<=floor(sqrt(i)); j++)
		{
			if(i%j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if(isPrime)
		{
			primeNums[primeCount++] = i++;
		}
		else
		{
			i++;
			isPrime=true;
		}
	}
	
	return primeNums;
}

int main()
{
	int choice;
	std::cout << "Which prime number: ";
	std::cin >> choice; 
	int* results=prime(choice);
	std::cout << results[choice-1] << std::endl;
}
