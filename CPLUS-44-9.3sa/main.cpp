#include "StackAllocator.h"

int main()
{
    StackAllocator* allocator = new StackAllocator(1000);
    allocator->Init();
    int* ar = (int*)allocator->allocate(5 * sizeof(int), 4);
    cout << ar << endl;
    int* ar2 = (int*)allocator->allocate(5 * sizeof(int), 4);
    cout << ar2 << endl;

    int* ar3 = (int*)allocator->allocate(10 * sizeof(int), 4);
    cout << ar3 << endl;

    allocator->deallocate(ar3); // освободим память, занятую ar3 под ar4

    int* ar4 = (int*)allocator->allocate(10 * sizeof(int), 4); // адрес ar4 теперь следующий за ar2
    cout << ar4 << endl;

    delete allocator;
    return 0;

}