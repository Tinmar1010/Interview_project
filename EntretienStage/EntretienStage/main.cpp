#include <iostream>

int main() {

    unsigned minPos, maxPos;
    int minVal, maxVal, result;
    float random_f;
    Application app;

    srand(time(NULL)); // randomly initializes the generator

    random_f = rand()/(RAND_MAX+1.0);
    unsigned arraySize;
    std::cout << "Enter table size : ";
    std::cin >> arraySize;

    int* array = new int[arraySize];

    std::cout << "Entrez les differentes valeurs du tableau : "<<std::endl;
    for (unsigned ite = 0; ite < arraySize; ite++) {
        std::cout << "Entrer l'element[i" << i << "]: ";
        std::cin >> array[i];
    }


    if(ransom_f< 0.5)//Naive function
        result = getMinMaxNaive(array, arraySize, minPos, maxPos, minVal, maxVal);
    else//Optimized function
        result = getMinMaxOptimize(array, arraySize, minPos, maxPos, minVal, maxVal);
    
    if(result !=-1)
    {
        app.run()
    }
    else
    {
        std::cout<<"Problem in the function"<<std::endl;
    }
}
