#include "Lib.hpp"

int getMinMaxNaive(int *array, unsigned arraySize, unsigned& minPos, unsigned& maxPos, int& minVal, int& maxVal)
{
    minPos = 0;
    maxPos = 0;
    minVal = *array;
    maxVal = *array;

    for(unsigned ite=0;ite<arraySize;ite++)
    {
        if(minVal>*(array + ite))//Looking for the minimum
        {
            minVal = *(array + i);
            minPos = ite;
        }
        if(maxVal<*(array + ite))//Looking for the maximum
        {
            maxVal = *(array + ite);
            maxPos = ite;
        }       
    }
    if(minPos!=0&&maxPos!=0)//if both doesnt equal 0 -> the minPos and the maxPos doesn't change and its impossible (possible if the vector has constant values) so there is a problem
    {
        int val_return = 0;
        if(minPos<maxPos)
        {
            for(unsigned ite=minPos;ite<=maxPos;ite++)
                val_return = val_return + *(array+ ite);
        }
        else
        {
            for(unsigned ite=maxPos;ite<=minPos;ite++)    
                val_return = val_return + *(array+ ite);
        }    
        return val_return;  
    }
    else
        return -1;//mean problem
    
}
int getMinMaxOptimized(int *array, unsigned arraySize, unsigned& minPos, unsigned& maxPos, int& minVal, int& maxVal)
{
    minPos = 0;
    maxPos = 0;
    minVal = *array;
    maxVal = *array;
    bool isMax = false;
    bool isMin = false;
    int *pt_int = array;
    int val_return = 0;
    for(unsigned ite=0;ite<arraySize;ite++)
    {
        if(minVal>*(array + ite))//Looking for the minimum
        {
            minVal = *(array + ite);
            minPos = ite;
            isMin = true;      
        }
        else
            isMin = false;

        if(maxVal<*(array + ite))//Loooking for the maximum
        {
            maxVal = *(array + ite);
            maxPos = ite;
            isMax = true;
        }
        else
            isMax = false;
      
        if(!isMax&&!isMin)//if there isn't new maxima, 
            *pt_int = *pt_int + *(array  +ite);
        else
        {
            if(minVal!=*pt_int&&maxVal!=*pt_int)
            {
                val_return = minVal + *pt_int + maxVal;
                if(isMax)
                    *pt_int = maxVal;
                if(isMin)
                    *pt_int = minVal;
            }
            else//if minVal/maxVal -> array[ite] and minVal/maxVal -> array[ite+1]
                val_return = minVal + maxVal;
        }       
    }
    if(minPos!=0&&maxPos!=0)//if both doesnt equal 0 -> the minPos and the maxPos doesn't change and its impossible (possible if the vector has constant values) so there is a problem
        return -1;
    else
        return val_return; 
}

