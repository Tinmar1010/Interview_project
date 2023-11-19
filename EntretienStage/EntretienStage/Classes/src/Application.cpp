#include "Application.hpp"

int Application :: run(int *array, unsigned arraySize,unsigned minPos, unsigned maxPos, unsigned minVal, unsigned maxVal, int result)
{
    std::cout<<"The vector : "<<std::endl;

    for (unsigned ite = 0; ite < arraySize; ite++)
        std::cout<< *(array+ite)<<std::tab;

    std::cout<<std::endl;

    std::cout << "Minimum value is at position " << minPos << " with value " << minVal << std::endl;               
    std::cout << "Maximum value is at position " << maxPos << " with value " << maxVal << std::endl;
    std::cout << "Sum of min and max values: " << result << std::endl;
}   