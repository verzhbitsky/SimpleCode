#include<iostream>
using namespace std;
int main() {
	/*for (int i = 1; i <= 5; i++) {
		cout << "First cycle iteration # " << i << endl;
		for (int j = 1; j <= 5; j++) {
			cout << "\tSeconf cycle iteration # " << j << endl;
		}
	}*/
	
	//---------------------------------------

	/*int x, y = 0;
	cout << "Input x, y: " << endl;
	cin >> x >> y;
	for (int i = 0; i < x; i++) {
		cout << "* ";
		for (int j = 0; j < y; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	*/

	//---------------------------------------

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout << i << " x " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
	return 0;
}