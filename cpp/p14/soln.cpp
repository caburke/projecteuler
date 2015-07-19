#include <iostream>

using namespace std;

long long collatz(long long n){
    if (n % 2 ==0)
    {
        n = n / 2;
    } else {
        n = 3 * n + 1;
    }
    return n;
}


int main(int argc, char const *argv[])
{
    int limit = 1000000;
    long long i, l, n;
    int max_len = 1;
    long long max_num = 1;

    for (i = 1; i < limit; ++i)
    {
        if (i % 100000 == 0){
            cout << "Iteration: " << i << "\n";
        }

        l = 1;
        n = i;
        while (n != 1){
            l++;
            n = collatz(n);
        }
        if (l > max_len){
            max_len = l;
            max_num = i;
        }
    }

    cout << "The number with the longest length collatz sequence is " << max_num << "\n";
    cout << "The length of the sequence was " << max_len << "\n";

    return 0;
}
