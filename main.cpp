#include <iostream>
using namespace std;


float max(const float array[],int d) {
    int max, i;
    max = array[0];
    for (i = 1; i < d; i++) {

        if (array[i] > max)
            max = array[i];
    }
    return max;
}

int main() {
    int a, c;
    
    cin >> a;
    float array[a];
    for (int i = 0; i < a; i++) {

        cin >> array[i];
    }


    cout<< max(array,a);

    return 0;

}
