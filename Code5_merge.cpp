double* merge(const int arrInteger[], int sizeInt,const double arrayDouble[], int sizeDouble,int& sizeMerge)
{ 
    double* arrMerge = nullptr; 
    double* newArray = nullptr; 
    sizeMerge = sizeInt + sizeDouble; 
    arrMerge = new double[sizeMerge]; 

    if (!arrMerge)
    { 
        return NULL; 
    } 

    int x = 0, y = 0, z = 0; 

    while (x < sizeInt && y < sizeDouble) 
    { 
        if (arrInteger[x] < arrayDouble[y]) 
        { 
            arrMerge[z++] = arrInteger[x++]; 
        } 
        else if (arrayDouble[y] < arrInteger[x]) 
        { 
            arrMerge[z++] = arrayDouble[y++]; 
        } 
        else 
        { 
            arrMerge[z++] = arrInteger[x++]; 
            y++; 
        } 
    } 
    while (x < sizeInt) 
    { 
        arrMerge[z++] = arrInteger[x++]; 
    } 
    while (y < sizeDouble) 
    { 
        arrMerge[z++] = arrayDouble[y++]; 
    } 
    if (sizeMerge != z)
    { 
        newArray = new double[z]; 
        for (int i = 0; i < z; i++) 
        { 
            newArray[i] = arrMerge[i]; 
        } 
        delete[] arrMerge; 
        sizeMerge = z; 
        return newArray;
    } 
    return arrMerge; 
}
