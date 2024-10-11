// #include header files: functions, classes, variables, etc.
// <iostream> represents the default input/output (console)
#include <iostream>
/* This allows the use of standart library (std) without
std:: prefix. Ex: std::cout */
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

    // type VariableName = value | Variables are case sensitive
    int answer = 21 * 2;
    string fish = " fish!";    
    char a = 'a'; // single characters or ASCII in single quotes
    double amount = 2.0;
    bool haveFish = true; // true = 1, false = 0
    // variable assignment without value 
    int emptyVariable;
    // multiple variable assignment
    int b = 5, c = 6, d = 50;
    cout << "b + c + d = " << b + c + d;
    // assign one value to multiple variables
    int e, f, g;
    e = f = g = 50;
    cout << "Average of e, f and g = " << (e + f + g) / 3 << endl;
    // const type constName = value. Value must be assigned.
    const double pi = 3.14; 

    // Boolean doens't output value true, but no error  
    cout << haveFish << endl;

    // Concatenation
    cout << answer << " thanks for " << a << amount << fish << endl;
    
    // Variable addition
    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum << endl;

    // User input
    string h;
    string i;
    cout << "Type a hello: ";
    cin >> h; // User input limited to 1 word without space
    cout << "You typed: " << h << endl; // Display input
    cin.ignore(); // cin buffer has to be emptied  
    cout << "Type a phrase: ";
    getline (cin, i); // User input many words with space
    cout << "The phrase was: " << i << endl;

    /* Strings are objects and have methods. Since it is
    not a type primitive it has to be included */ 
    
    h[0] = 'J'; //
    cout << h << endl;
    cout << "last typed letter is: " << h[h.length() - 1] << endl;


    return 0;
}

