#include <iostream>

using namespace std;


// function prototype
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);
int mod(int x, int y);


int main() {
    cout << "Please enter two numbers: " << endl;

    int num1, num2;

    cin >> num1 >> num2;

    cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
    cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
    cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
    cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
    cout << num1 << " % " << num2 << " = " << mod(num1, num2) << endl;
    return 0;
}


int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}


int divide(int x, int y) {
    return x / y;
}

int mod(int x, int y) {
    return x % y;
}