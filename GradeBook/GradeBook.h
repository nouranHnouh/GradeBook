//
//  GradeBook.h
//  GradeBook class definition in sepereate file.
//this file contains the GradeBook interface without revealing the implementation of GradeBook`s memebr functions
//  Created by Nouran Nouh on 2019-03-10.
//  Copyright © 2019 Nouran Nouh. All rights reserved.
//

#include <iostream>
#include <string>

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

