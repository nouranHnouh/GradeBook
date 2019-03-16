//
//  main.cpp
//  GradeBook
//
//  Created by Nouran Nouh on 2019-03-06.
//  Copyright © 2019 Nouran Nouh. All rights reserved.

//include class GradeBook from the header to be used in the main

#include <iostream>
#include "GradeBook.h"
#include <climits>
using namespace std;





int main()
{
    cout<<"INT_MIN :"<<INT_MIN<<endl;
    cout<<"INT_MAX :"<<INT_MAX<<endl;
    
    // create GradeBook object
    GradeBook gradeBook1("Math2004 Introduction to calculus");
    
    
    //dipslay welcome Message
    gradeBook1.displayMessage();
    //determine class Avegrage 
    gradeBook1.determineClassAverage(); 

}//end main 
