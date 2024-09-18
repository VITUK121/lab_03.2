#include <iostream>
using namespace std;

int main() {
	double a, b, c, x, F;
	cout << "Enter a,b,c,x: ";
	cin >> a >> b >> c >> x;

	if (c < 0 && a != 0){
		F = -a * x * x;
	}
	else if (c > 0 && a == 0) {
		F = (a - x) / (c * x);
	}
	else {
		F = x / c;
	}
	cout << "F = " << F << endl;
	///////////////////////////////
	//////////////////////////////
	if (c < 0 && a != 0) {
		F = -a * x * x;
	}
	else {
		if (c > 0 && a == 0) {
			F = (a - x) / (c * x);
		}
		else {
			F = x / c;
		}
	}
	cout << "F = " << F << endl;
	system("pause");
}