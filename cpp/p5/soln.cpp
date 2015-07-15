#include <iostream>

using namespace std;

int main() {

	int start = 20;
      int sum_mod;

	bool cond = false;

	while (cond == false) {
            sum_mod = 0;
            for (int i=1; i<=20; i++){
                  sum_mod += start % i;
            }	
            if (sum_mod == 0){
				cond = true;
		} else {
			start += 1;
		}
	}

	cout << start << "\n";
}
