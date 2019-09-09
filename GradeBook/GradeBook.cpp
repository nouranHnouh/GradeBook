//
//  GradeBook.cpp
<<<<<<< HEAD
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

=======
//  GradeBook has implementation of GradeBook Functions
//
//  Created by Nouran Nouh on 2019-03-12.
//  from C++ How to Program
//

#include <iostream>
#include "GradeBook.h" //defination of class GradeBook
using namespace std;

//constructor intializing CourseName
GradeBook::GradeBook(string name)

{
    setCourseName(name); // validate courseName
    
}//end constructor

//set courseName
void GradeBook::setCourseName(string name){
    //ensures that course name has at most 25 characters
    if(name.size()<=25)
    courseName=name;
    else{
        //set course name to the first 25 characters
        courseName=name.substr(0,25);
        cerr<<"Name\""<<name<<"\"exceeds maximum length of 25.\n"<<"limiting course name to the first 25 charcaters.\n"<<endl;
    }//end else


}//end function setCourseName

//getCourseName return the name of the course
string GradeBook::getCourseName() const
{
    return courseName;
}

//display welcome messages
void GradeBook::displayMessage() const
{
    //call getCourseName to get course name
    cout<<"welcom to the Grade book for \n"<<getCourseName()<<"!"<<endl;
    
}// end function displaymessages

//determine the class Average based on 10 grades enetred by the user
void GradeBook::determineClassAverage() const {
    int total=0;
    unsigned int counter=1;
    //loop 10 times
    while(counter<=10){
        cout<<"Enter grade: ";
        int grade=0;
        cin>>grade;
        total=total+grade; //calculate total grades enetered by the user
        counter++; //increment counter by 1
    }//end while
    
  int average=total/10; //calculate Average
    cout<<"/Total of all 10 grades is "<<total<<endl;
    cout<<"Class Average is "<<average<<endl;
    
}//end function determineClassAverage 
>>>>>>> 83e2824d566bac82ca71ed3b3dc6528770d673ef
