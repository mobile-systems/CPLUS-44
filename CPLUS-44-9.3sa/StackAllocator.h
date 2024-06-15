#include <cstddef>
#include <stdlib.h>     /* malloc, free */
#include <iostream>
using namespace std;

class StackAllocator {
protected:
    size_t _totalSize;
    void* _startPtr = nullptr;
    size_t _offset;
public:
    StackAllocator(const size_t totalSize) : _totalSize{ totalSize }, _offset{ 0 } {}

    virtual ~StackAllocator()
    {
        free(_startPtr);
        _startPtr = nullptr;
        _totalSize = 0;
    }

    void Init()
    {
        if (_startPtr != nullptr)
        {
            free(_startPtr);
        }
        _startPtr = malloc(_totalSize);
        _offset = 0;
    }



    void* allocate(const size_t size, const size_t alignment = 0)
    {
        if (alignment != 0 && _offset % alignment != 0)
        {
            _offset = (_offset / alignment + 1) * alignment;
        }

        if (_offset + size > _totalSize)
        {
            return nullptr;
        }

        void* newAdress = (void*)((size_t)_startPtr + _offset);
        _offset += size;

        return newAdress;
    }

    void Reset()
    {
        _offset = 0;
    }

    void deallocate(void* ptr) { _offset = (size_t)ptr - (size_t)_startPtr; }
};