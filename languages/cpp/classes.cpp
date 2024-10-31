#include <iostream>
#include <vector>
#include <fstream>

class Student
{
    std::string m_FirstName = "First";
    std::string m_LastName  = "Last";
    int         m_id        = 0;
    float       m_avg       = 0;
public:
    int         n_public    = 0;
    // default constructor
    Student(){};
    // initializer list
    Student(std::string first, std::string last, int id, float avg)
    : m_FirstName   (first)
    , m_LastName    (last)
    , m_id          (id)
    , m_avg         (avg)
    {
    }

    float getAvg()
    {
        return m_avg;
    }

    void print() const
    {
        std::cout << m_FirstName << " " << m_LastName << " ";
        std::cout << m_id << " " << m_avg << std::endl ;
    }
};

class Course
{
    std::string          m_name = "Course name";
    std::vector<Student> m_students;
public:
    // Empty constructor
    Course(){}
    // Default constructor
    Course(const std::string& name)
    {
        std::string m_name = name;
    }

    void addManualStudent(const Student& s)
    {
        m_students.push_back(s);
    }

    // argument pass the fixed reference name 
    void loadStudentsFromFile(const std::string& filename)
    {
        // initialize filestream
        std::ifstream fin(filename);
        // store temp
        std::string temp;
        // send every space separated word to temp
        // exit in the end
        while(fin >> temp)
        {
            // send every word in temp out
            std::cout << temp << "\n";
        }
    }

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

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
