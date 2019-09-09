//
//  GradeBook.h
<<<<<<< HEAD
//  GradeBook class set the course name of the grade book
// Class interface 
//  C++ How to program book, exercise 1
=======
//  GradeBook class definition in sepereate file.
//this file contains the GradeBook interface without revealing the implementation of GradeBook`s memebr functions
//  Created by Nouran Nouh on 2019-03-10.
//  Copyright © 2019 Nouran Nouh. All rights reserved.
>>>>>>> 83e2824d566bac82ca71ed3b3dc6528770d673ef
//

#include <iostream>
#include <string>

<<<<<<< HEAD
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
=======
// Define GradeBook class with a member function dispalyMessage.
// create GradeBook object and call displayMessage functions

class GradeBook
{
    
public:
    
    explicit GradeBook(std::string name);//constructor initializates cpourseName with string
    void setCourseName(std::string name); // sets the course name to courseName
    std::string getCourseName() const; //get the course name
    void displayMessage() const; // display a welcome message
    void determineClassAverage() const; // average of class grades 
private:
    std::string courseName; // course name for GradeBook 
}; //end class GradeBook

>>>>>>> 83e2824d566bac82ca71ed3b3dc6528770d673ef
