#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    bool found = false;

    for (int i = 0; i < 1000; ++i)
    {
        for (int j = 0; j < 1000; ++j)
        {
            for (int k = 0; k < 1000; ++k)
            {
                bool order = (i < j) & (j < k);
                bool sum = i + j + k == 1000;
                bool pyth = i*i + j*j == k*k;

                if (order & sum & pyth){
                    cout << "a: " << i << " b: " << j << " c: " << k << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}