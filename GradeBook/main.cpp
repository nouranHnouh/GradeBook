//
//  main.cpp
//  GradeBook
//
//  Created by Nouran Nouh on 2019-03-06.
//  Copyright © 2019 Nouran Nouh. All rights reserved.

//include class GradeBook from the header to be used in the main

#include <iostream>
#include "GradeBook.h"
using namespace std;





int main()
{
    string courseName;
    // create GradeBook object
    GradeBook gradeBook1("Math2004 Introduction to calculus");
    GradeBook gradeBook2("Stat3006 statics");
    
    //dipslay intial course name

    cout<<"gradeBook1 is created for course: "<<gradeBook1.getCourseName()
        <<"\ngradeBook2 creatd for course: "<<gradeBook2.getCourseName()<<endl;


}//end main 
