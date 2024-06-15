#include "LinearAllocator.h"
#include <iostream>

int main()
{
    LinearAllocator* allocator = new LinearAllocator(100);
    allocator->Init();
    int* ar = (int*)allocator->allocate(5 * sizeof(int), 4);
    int* ar2 = (int*)allocator->allocate(5 * sizeof(int), 4);
    cout << ar << endl;
    cout << ar2 << endl;
    
    for (int i = 0 ; i < 5; ++i)
    {
        ar[i] = i;
        ar2[i] = i;
    }
    
        for (int i = 0 ; i < 5; ++i)
    {
        cout << ar[i] << endl;
        cout << ar2[i] << endl;
    }

    allocator->deallocate();
    delete allocator;
    return 0;
}