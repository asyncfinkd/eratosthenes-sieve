#include <iostream>
using namespace std;

class Sieve {
	private:
		long long n = 1;
		int Number;
	public:
		void setNumber(long long n=1) {
			this->n=n;
		}
		void inputNumber(int n=1) {
			cout << "Sheiyvanet Ricxvi: "; cin>>n;
			this->Number=n;
		}
		void printNumber() {
			cout << "raodenoba: "<<Number<<endl;
		}
		int getNumber() {
			return this->Number;
		}
		void printArray() {
			int newArray[getNumber()];
			for(int i=2;i<=getNumber();i++) {
				if(newArray[i]==1) {
					continue;
				} else {
					cout <<i<<" ";
					for(int j=i*i;j<=getNumber();j=j+i){
						newArray[j]=1;
					}
				}
			}
		}
};

int main(int argc, char** argv) {
	Sieve Erathostene;
	Erathostene.inputNumber();
	Erathostene.printNumber();
	Erathostene.printArray();
	
	return 0;
}
