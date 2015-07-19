#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    const int limit = 1000000;
    const int sqrt_limit = static_cast<int>(sqrt(limit));
    bool is_prime[limit];

    for (int i = 0; i < limit; ++i)
    {
        is_prime[i] = true;
    }

    for (int i = 2; i <= sqrt_limit; ++i)
    {
        if (is_prime[i-1])
        {
            for (int j = i*i; j <= limit; j += i)
            {
                is_prime[j-1] = false;
            }
        }
    }

    long int sum_primes = 0;

    for (int i = 1; i < limit; ++i)
    {
        if (is_prime[i])
        {
            sum_primes += i + 1;
        }
    }

    cout << "Sum of primes up to " << limit << " is " << sum_primes << "\n";

    return 0;
}