#include <iostream>
/* RAII Wraps a heap in a class and
// Delete allocated heap memory in the end
Preventing memory leaks */ 

// Generics: allow to pass different types
template <typename T>
class DynamicArray
{
    // Used to track array size
    size_t m_size;
    // 
    T * m_arr;

public:

    DynamicArray(size_t size)
    : m_size(size)
    // Generate heap
    , m_arr (new T[size])
    {
        std::cout << "Array Constructor\n";
    }

    ~DynamicArray()
    {
        // Destructs heap array
        delete [] m_arr;
        std::cout << "Array Destructor\n";
    }

    int get(size_t index) const
        {
            return m_arr[index];
        }

    void set(size_t index, int val)
        {
            m_arr[index] = val ;
        }

    void print() const
    {
        for(size_t i = 0; i < m_size; i++)
        {
            std::cout << i << " " << m_arr[i] << "\n" ;
        }
    }

    // Operator overload similar to dunder in python

    // C++ uses this to safely return consts
    const T & operator [](size_t index) const
    {
        return m_arr[index];
    }
    // C++ uses this to set new indexes
    // that later are used as consts
    T & operator [](size_t index)
    {
        return m_arr[index];
    }
};

int main(int argc, char const *argv[])
{
    DynamicArray<float> myArray(10);
    myArray[2] = 17.234;

    std::cout << myArray[2] << "\n";
    myArray.print();
    return 0;
}
