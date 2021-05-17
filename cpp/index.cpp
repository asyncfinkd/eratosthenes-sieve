#include <iostream>
using namespace std;

long long i, n, j, num[1000001];
int main(int argc, char** argv) {
    cin >> n;
    for(i = 2; i <= n; i++) {
        if(num[i] == 1) {
            continue;
        } else {
            cout << i << " ";
            for(j = i * i; j <= n; j=j+i) {
                num[j]=1;
            }
        }
    }
    
    return 0;
}
