//#include <iostream>
//#include <ctime>
//#include <vector>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//	/*const int size = 5;
//	int arr[size];
//
//	for (int i = 0; i < size; i++) {
//		arr[i] = i;
//	}
//
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << " ";
//	}*/
//
//	const int SIZE = 10;
//
//	double arr[] = {45, 65, 21, 36, 33};
//
//	int a = sizeof(arr);
//	int b = sizeof(int);
//
//	cout << sizeof(arr) / sizeof(arr[0]) << endl;
//
//	for (int i = 0; i < 4; i++) {
//		cout << arr[i] << " ";
//	}
//
//	----Random generator---
//	srand(time(NULL));
//
//	/*int a = rand() % 10 + 5;
//	cout << a << endl;
//
//	int b = rand() % 10 + 5;
//	cout << b;*/
//
//	/*int const SIZE = 10;
//	int arr[SIZE];
//
//	for (int i = 0; i < SIZE; i++) {
//		arr[i] = rand() % 100;
//	}
//
//	for (int j = 0; j < SIZE; j++) {
//		cout << arr[j] << " ";
//	}*/
//
//	---Random uniq generation---
//
//	int const SIZE = 10;
//	int arr[SIZE];
//	int uniq = 0;
//	arr[0] = rand() % 20;
//	for (int i = 0; i < SIZE; i++) {
//		int r = rand() % 20;
//		arr[i] = uniq;
//		for (int z = 0; z < SIZE; z++) {
//			if (arr[z] == r) {
//				break;
//			}
//			else {
//				uniq = r;
//			}
//		}
//		arr[i] = r;
//	}
//
//	for (int j = 0; j < SIZE; j++) {
//		cout << arr[j] << " ";
//	}
//
//	/*const int SIZE = 10;
//	int arr[SIZE];
//	bool alreadyThere;
//
//	for (int i = 0; i < SIZE;) {
//		alreadyThere = false;
//		int r = rand() % 15;
//		for (int j = 0; j < i; j++) {
//			if (arr[j] == r) {
//				alreadyThere = true;
//				break;
//			}
//		}
//		if (!alreadyThere) {
//			arr[i] = r;
//			i++;
//		}
//	}
//
//	for (auto t : arr) {
//		cout << t << " ";
//	}*/
//
//	int i = 4;
//	double d = 4.0;
//	string s = "HackerRank ";
//	int j = 0;
//	double c = 0;
//	string f = "";
//
//	int sumInt = 0;
//	double sumDouble = 0.0;
//	string sumString = " ";
//
//	cin >> j;
//	cin >> c;
//	cin.ignore();  //ignores an end of line character 
//	getline(cin, f);
//
//	sumInt = i + j;
//	sumDouble = d + c;
//	sumString = s + f;
//
//	cout << sumInt << endl;
//	cout << fixed << setprecision(1) << sumDouble << endl;
//	cout << sumString << endl;
//
//	return 0;
//}