//
//  GradeBook.cpp
//  GradeBook has implementation of GradeBook Functions
//
//  Created by Nouran Nouh on 2019-03-12.
//  Copyright © 2019 Nouran Nouh. All rights reserved.
//

#include <iostream>
#include "GradeBook.h" //defination of class GradeBook
using namespace std;

//constructor intializing CourseName
GradeBook::GradeBook(string name)
:courseName(name) //initialize course name
{
    
}//end constructor

//set courseName
void GradeBook::setCourseName(string name){
    courseName=name;


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
