#include "Lib.hpp"
#include <iostream>
int main() {

    unsigned minPos1, maxPos1, minPos2, maxPos2;
    int minVal1, maxVal1, minVal2, maxVal2, result;
    const unsigned arraySize = 15;
    
    int array[arraySize] = {7, -1, 3, 6, 0, 12, -4, 9, 2, 8, 5, -3, 11, 1, 4};


    result = getMinMaxNaif(array, arraySize, minPos1, maxPos1, minVal1, maxVal1);

    
    std::cout << "Minimum value is at position " << minPos1 << " with value " << minVal1 << std::endl;
    std::cout << "Maximum value is at position " << maxPos1 << " with value " << maxVal1 << std::endl;
    std::cout << "Sum of min and max values: " << result << std::endl;

    result = getMinMaxMoinsNaif(array, arraySize, minPos2, maxPos2, minVal2, maxVal2);

    
    std::cout << "Minimum value is at position " << minPos2 << " with value " << minVal2 << std::endl;
    std::cout << "Maximum value is at position " << maxPos2 << " with value " << maxVal2 << std::endl;
    std::cout << "Sum of min and max values: " << result << std::endl;

    int i;
    float f;

    srand(time(NULL)); // randomly initializes the generator

    f= rand()/(RAND_MAX+1.0);

    printf("Voici un reel compris entre 0 et 1:%f ", f) ;
    

    return 0;
}