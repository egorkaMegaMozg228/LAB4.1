#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i,n;
	double S=1;
	cout << "i = "; cin >> i;
	n = i;
	while (n <= 15) {
		S *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / i * i;
		n++;
	}
	cout << "S = " << S <<endl ;
	S = 1;
	n = i;
	do {
		S *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / i * i;
		n++;
	} while (n <= 15);
	cout << "S = " << S << endl;
	S = 1;
	for (n=i; n <= 15; n++) {
		S *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / i * i;
	}
	cout << "S = " << S << endl;
	S = 1;
	for (n = 15; n >= i; n--) {
		S *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / i * i;
	}
	cout << "S = " << S << endl;


}

