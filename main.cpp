#include <iostream>
#include "lib.h"
using namespace std;


int main() {
    int a, c;
    cout << "inserire dimensione array" << endl;
    cin >> a;
    float array[a];
    for (int i = 0; i < a; i++) {


        cout << "inserire elemento:";
        cin >> array[i];
    }


    cout<<"massimo:"<< max(array,a);

    return 0;

}
