#include <iostream>

int main() {

    float f;

    srand(time(NULL)); // randomly initializes the generator

    f= rand()/(RAND_MAX+1.0);
    unsigned arraySize;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> arraySize;

    int* array = new int[arraySize];

    std::cout << "Entrez les differentes valeurs du tableau : "<<std::endl;
    for (unsigned i = 0; i < arraySize; ++i) {
        std::cout << "Entrer l'element[i" << i << "]: ";
        std::cin >> array[i];
    }

    unsigned minPos, maxPos;
    int minVal, maxVal;
    Application app;

    if(f< 0.5)
    {
        //Naive function
    }
    else
    {
        //Optimized function
    }
}
