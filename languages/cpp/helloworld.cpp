// #include header files: functions, classes, variables, etc.
// <iostream> represents the default input/output (console)
// #include pre-processor directive
#include <iostream>
#include <cmath>
#include <vector>
//filestream manipulate files 
#include <fstream>
/* This allows the use of standart library (std) without
std:: prefix. Ex: std::cout */
using namespace std;

// class declaration
class Student
{
    //private: m_ notation to denote
    std::string m_firstName = "First";
    std::string m_lastName  = "Last";
    int         m_id        = 1;
    float       m_avg       = 0;

public:
    // Default constructor
    Student(){}
    // Initializer list
    Student(std::string first, std::string last, int id, float avg)
    : m_firstName   (first)
    , m_lastName    (last)
    , m_id          (id)
    , m_avg         (avg)
    {
    }

    int getAvg()
    {
        return m_avg;
    }

    int getId()
    {
        return m_id;
    }

    std::string getFirst()
    {
        return m_firstName;
    }

    std::string getLast()
    {
        return m_lastName;
    }
    
    /*  const correctness: any function that doesn´t change
    make changes should have const to avoid errors */  
    void print() const
    {
        std::cout << m_firstName << " " << m_lastName << " ";
        std::cout << m_id << " " << m_avg << endl ;
    }

};

class Course
{
    std::string m_name = "Course";
    std::vector<Student> m_students;

public:

    Course(){}
    // When using string you want to pass a const reference
    // reference avoid copying the object
    // const avoid changing the string
    Course(const std::string& name)
        : m_name(name)
    {
    }
    void addStudent(const Student& s)
    {
        m_students.push_back(s);
    }

    // argument pass the fixed reference name 
    void loadFromFile(const std::string& filename)
    {
        // initialize filestream
        std::ifstream fin(filename);
        // store temp
        std::string temp;
        // send every space separeted word to temp
        // exit in the end
        while(fin >> temp)
        {
            // send every word in temp out
            std::cout << temp << "\n";
        }

    }

    // First const implies that not altering the reference
    //Second const implis function const correct
    const std::vector<Student>& getStudents() const
    {
        return m_students;
    }

    void print() const
    {
        for (auto& s : m_students) 
        {
            s.print();
        }
    }

};


int main()
{
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
    not a type primitive it has to be #included */ 
    h[0] = 'J'; //
    cout << h << endl;
    cout << "last typed letter is: " << h[h.length() - 1] << endl; //length is a string method

    /* min and max are default?
    <cmath> has sqrt, round, log support */
    cout << "Min value of 5 and 10 is: " << min(5, 10) << endl;
    cout << "Max value of 5 and 10 is: " << max(5, 10) << endl;
    cout << "Square root of 64 " << sqrt(64) << endl;
    cout << "Rounding of 2.6 " << round(2.6) << endl;
    cout << "Log 2 " << log(2) << endl;

    /* Control flow */
    int age = 18;
    int votingAge = 18;

    if (age > votingAge){
        cout << "Old enough to vote." << endl;
    } else if (age == votingAge) {
        cout << "Just enough old to vote." << endl;
    } else {
        cout << "Not old enough to vote." << endl;
    }

    /* Ternary operator*/
    string oldEnough = (age > votingAge) ? "Ternary old" : "Ternary young";

    /* Switch*/
    int day = 4;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    default:
        cout << "Weekend";
        break;
    }

    /* Loops */
    int iteration = 1;
    while (iteration <= 5){
        cout << iteration;
        iteration ++;
    }

    do {
        iteration ++;
        cout << iteration;
    }
    while (iteration <= 10);

// type vector
std::vector<int> vec;
vec.push_back(10);
vec.push_back(42);

// for loops
for (size_t i = 0; i < vec.size(); i++)
{
    cout << vec[i] << "\n";

};

// auto = type inference
for (auto a : vec)
{
    std::cout << a << "\n";
};

// class definition

Student s1;
Student s2("Jane", "Doe", 50, 4.1);
Student s3("John", "Doe", 99, 2.0);

Course class4300("Comp4300");
class4300.addStudent(s1);
class4300.addStudent(s2);
class4300.addStudent(s3);
class4300.addStudent(Student("Lucas", "B", 1, 2.0));
class4300.print();
class4300.loadFromFile("student.txt");

return 0;
}