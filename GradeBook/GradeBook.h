//
//  GradeBook.h
//  GradeBook class defination in sepereate file
//
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
    //constructor initializates cpourseName with string
    explicit GradeBook(std::string name)
    : courseName(name)//initialize course name
    {
    }
    
    // function setCourseName sets the course name to courseName
    void setCourseName(std::string name) {
        // store course name
        courseName=name;
    }
    std::string getCourseName() const {
        return courseName;
    }
    
    void displayMessage() const
    {
        
        std::cout<<"Welcome to Grade Book for \n "<< getCourseName()<<"!"<<std::endl;
        
    }//end function displayMessage
private:
    std::string courseName;
}; //end class GradeBook

