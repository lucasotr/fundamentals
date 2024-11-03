#include <iostream>

class Obligatory
{
public:
    Obligatory()
    {}
    // First const indicates return type
    // Middle const is a reference that won't be changed
    // Last const indicates const correctness
    // which can only be use inside a class. 
    const int ConstCorrectFunction(const int& a) const
    {
        return a;
    }
};

// Pass by reference
// will change the referenced value to 10
void tennify(int & a){a = 10;}


int main(int argc, char const *argv[])
{
    int x = 5;
    Obligatory y = Obligatory();
    
    std::cout << y.ConstCorrectFunction(x) << "\n";
    // Changes x to ten
    tennify(x);
    std::cout << x << "\n"  ; 
    
}
