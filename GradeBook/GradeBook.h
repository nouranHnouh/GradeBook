//
//  GradeBook.h
//  GradeBook class set the course name of the grade book
// Class interface 
//  C++ How to program book, exercise 1
//

#include <iostream>
#include <string>

// Class definition
//define class GradeBook that present the grades of the class
class GradeBook
{
public:
    //constructor initializes courseName with string and instructor name 
    explicit GradeBook( std::string name, std::string instructor );
    void setCourseName(std::string name);//set course Name
    void setInstructorName(std::string name); // set instructor name
    std::string getCourseName() const;//get course Name
    std::string getInstructorName() const; // get the instructor Name 
    void displayMessage() const;// display welcome message
private:
    std::string courseName;// courseName Data member
    std::string instructorName; // course instructor Name
    
};// end class GradeBook
