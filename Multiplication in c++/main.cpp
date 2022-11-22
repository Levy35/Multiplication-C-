#include <iostream>

using namespace std;

int main()
{
    int a;
    cout <<"Enter a Number to Generate Multiplication ";
    cin >> a;
    cout << "The Number you Entered is " << a << " " << endl;

    cout << "+++++++++++++++++++++++++++++"<<endl;
    for (int b=1;b<=12;b++)
        cout<< a << " * " << b << " = " <<
               a*b <<"\n"<<endl;

    return 0;
}

