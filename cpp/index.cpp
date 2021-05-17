#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    long long n; cin >> n;
    int num[n];
    for(int i = 2; i <= n; i++) {
        if(num[i] == 1) {
            continue;
        } else {
            cout << i << " ";
            for(int j = i * i; j <= n; j=j+i) {
                num[j]=1;
            }
        }
    }
    
    return 0;
}
