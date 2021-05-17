#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	long long n; cin >> n;
	long long num[n];
	for(int i = 2; i <= n; i++) {
		if(num[i] == 1 && num[i] > 0)
			continue;
		else
			cout << i << " ";
			for(int j = i * i; j <= n; j = j + i) {
				if(j > 0 && n > 0)
					num[j] = 1;
			}
		}
	
	return 0;
}
