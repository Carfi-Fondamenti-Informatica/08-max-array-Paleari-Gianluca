
#include "lib.h"
float max(const float array[], int d) {
    int m, i;
    m = array[0];
    for (i = 1; i < d; i++) {

        if (array[i] > m)
            m = array[i];
    }
    return m;
}
  
  
