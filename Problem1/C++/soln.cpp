/*
 * =====================================================================================
 *
 *       Filename:  coln.cpp
 *
 *    Description:  Solution to problem 1
 *
 *        Version:  1.0
 *        Created:  10/14/2014 01:51:53 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <set>

using namespace std;

int main()
{
	int upper_bound = 1000;
	set<int> divisors;
	set<int> multiples;

	// Add divisors
	divisors.insert(3);
	divisors.insert(5);

	// Find multiples under upper_bound
	
	set<int>::iterator it;

	for ( it = divisors.begin(); it != divisors.end(); ++it )
	{
		int div = *it;

		int mult = div;

		int i = 1;

		while ( mult < upper_bound )
		{
			
			multiples.insert(mult);

			i++;

			mult = div * i;
		}
	}

	// Print Sum
	
	int sum = 0;

	for ( it = multiples.begin(); it != multiples.end(); ++it )
	{
		
		sum += *it;
	
	}

	cout << "The sum is " << sum << "\n";

	return 0;
}
