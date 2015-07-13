#include <iostream>

using namespace std;

int main() {
	int max_fib = 4000000;
	int accum = 0;
	int tmp = 0;
	int x = 0;
	int y = 1;

	while (y < max_fib){
		if (y % 2 == 0){
			accum += y;
		}
		tmp = y;
		y = x + y;
		x = tmp;
	}
	cout << accum << "\n";
}
