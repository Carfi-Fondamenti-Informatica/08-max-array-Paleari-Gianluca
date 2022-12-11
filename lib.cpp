#include "lib.h"

float max(const float array[],int d) {
    float max;
    int i;
    max = array[0];
    for (i = 1; i < d; i++) {

        if (array[i] > max)
            max = array[i];
    }
    return max;
}
