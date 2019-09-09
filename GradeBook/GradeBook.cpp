//
//  GradeBook.cpp
//  GradeBook
// implementation of class GradeBook`s member functions 
//  Created by Nouran Nouh on 2019-09-09.
//  C++ How To Program book, exercise 1

#include <iostream>

#include "GradeBook.h"
using namespace std;

//constructor initialization of courseName and 
GradeBook::GradeBook(string name, string instructor)
: instructorName(instructor)


{
    
    setCourseName(name);

    
}//end of constructor

// set course name
void GradeBook::setCourseName(string name)
{
    if (name.size()<=25){ //if the name is 25 characters
        courseName=name; //store the name of the course
    }else if (name.size()>25){ // if size of character is more than 25
        courseName=name.substr(0,25);// start at 0, length is 25
        cerr<<"Name \""<<name<<"\"exceeds maximum length \n"<<"Truncating course Name to first 25 characters"<<endl;
    
    }// end if
}// end of set function

// set instructor name
void GradeBook::setInstructorName(string name)
{
    instructorName=name;
}

// string function that returns the course name
string GradeBook::getCourseName() const
{
    return courseName;
}// end of getCourseName

//return instructor name
string GradeBook::getInstructorName() const
{
    return instructorName;
    
}// end of getInstructorName
void GradeBook::displayMessage() const
{
    cout<<"Welcome to the grade book for \n"<<getCourseName()<<"!"<<"that is represented by the instructor name`s: "<<getInstructorName()<<endl;
} // end function displayMessage

