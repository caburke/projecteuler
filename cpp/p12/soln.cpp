#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;
 
vector<int> GenerateFactors(int n)
{
    vector<int> factors;
    factors.push_back(n);
    factors.push_back(1);
    for(int i = 2; i * i <= n; ++i)
    {
        if(n % i == 0)
        {
            factors.push_back(i);
            if(i * i != n)
                factors.push_back(n / i);
        }
    }
 
    return factors;
}
 
int main()
{
    int t = 1;
    int n = 1;
    vector<int> factors;

    factors = GenerateFactors(t);

    while (factors.size() < 501) {
        n += 1;
        t += n;
        factors = GenerateFactors(t);
    }

    cout << t << "\n";

    return 0;
}