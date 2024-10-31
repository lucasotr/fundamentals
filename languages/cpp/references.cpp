#include <iostream>

// If you don't use a reference & the inserted parameter is
// copied
void PointerPrinter(int & i)
{
    // &i = memory address based on local architecture
    // sizeof() = how much space it uses
    std::cout << &i << " " <<  i << " " << sizeof(i) << "\n";
}

int main(int argc, char const *argv[])
{
    // stack allocated primitive variables
    
    int a = 10;
    // pointerA = type * variable adress | * Order is important
    int* pointerA = &a; 
    // * pointerA = value at pointerA address | * Order is important
    *pointerA = 17; // equivalent to *(&a) = 17;
    
    int b = 25;

    // This should print contigous memory addresses
    // The last digit difference is given by the size of n
    PointerPrinter(a);
    PointerPrinter(b);

    //stack allocated array
    int array[10] = {};
    int * HeapArray = new int[10];

    for (size_t i=0; i < 10; i++)
    {
        PointerPrinter(array[i]);
    }

    return 0;
}
