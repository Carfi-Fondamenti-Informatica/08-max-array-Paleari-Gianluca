#include <iostream>
#include "lib.h"
using namespace std;



int main() {
    int a;

    cin >> a;
    float array[a];
    for (int i = 0; i < a; i++) {


        cin >> array[i];
    }


    cout << max(array, a);

    return 0;

}
