//callbyreferenceandvalue.cpp
#include <iostream>
using namespace std;

void printMessage(int a, int b);
void callByValue(int a, int b);
void callByReference(int &a, int &b);

int main()
{
    int a = 10;
    int b = 20;
    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;

    cout << "callByValue" << endl;
    printMessage(a, b);
    callByValue(a, b);
    printMessage(a, b);

    cout << "callByRefernece" << endl;
    printMessage(a, b);
    callByReference(a, b);
    printMessage(a, b);

    return 0;
}

void printMessage(int a, int b)
{
    cout << "------------" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "------------" << endl;
}

void callByValue(int a, int b)
{
    cout << "IN callByValue" << endl;
    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;

    int tmp = a;
    a = b;
    b = tmp;
}

void callByReference(int &a, int &b)
{
    cout << "IN callByReference" << endl;
    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;

    int tmp = a;
    a = b;
    b = tmp;
}

//call by value하면 주소가 다른 같은 값의 변수가 되므로 main의 a, b는 바뀌지 않음!
/*
&a: 0x61fe1c
&b: 0x61fe18
callByValue
------------
a: 10
b: 20
------------
IN callByValue
&a: 0x61fdf0
&b: 0x61fdf8
------------
a: 10
b: 20
------------
callByRefernece
------------
a: 10
b: 20
------------
IN callByReference
&a: 0x61fe1c
&b: 0x61fe18
------------
a: 20
b: 10
------------
*/