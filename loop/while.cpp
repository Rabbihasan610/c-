#include <iostream>
using namespace std;

#include <cmath>

int main() {

    double a = 3.14;
    double sqrtResult = sqrt(a);
    cout << sqrtResult << endl;
    cout << "\n";
    double b = sqrtResult;
    double roundResult = round(b);

    cout << roundResult << endl;
    cout << "\n";

    // convert double to int
    int i = static_cast<int>(roundResult);

    while (i <= 10) {
        cout << i << endl;
        i++;
    }

    return 0;
}