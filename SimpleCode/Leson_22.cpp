#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "Один" << endl;

    goto link;

    cout << "Два" << endl;

    cout << "Три" << endl;

    link:

    cout << "Четыре" << endl;

    cout << "Пять" << endl;

    return 0;
}

