#include <iostream>
// This allows the use of cout without std::cout
using namespace std;

int main(){
    /* cout print to console 
    << input operator?  
    \n is a escape sequence for a new line 
    it seems to be equivalent with endl */
    cout << "Hello World! \n";

    /* escape sequences 
    \" escape double quotes
    \t adds indentation */
    cout << "Horizontal \"tab\" \t \\ " << endl;

    // type VariableName = value 
    int answer = 21 * 2;
    string fish = " fish!";    
    char a = 'a';
    double amount = 2.0;
    bool haveFish = true;

    // Concatenation
    cout << answer << " thanks for " << a << amount << fish << endl;
    
    // Variable addition
    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum << endl;
    
    return 0;
}

