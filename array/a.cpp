#include <iostream>
using namespace std;


int main() {
    //int arr[5] = {1, 2, 3, 4, 5};

    // for (int i = 0; i < 5; i++) {
    //     cout << arr[i] << endl;
    // }

    // string cars[] = {"Volvo", "BMW", "Ford"};

    // for (int i = 0; i < 3; i++) {
    //     cout << cars[i] << endl;
    // }

    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << getArrayLength;

    return 0;

}