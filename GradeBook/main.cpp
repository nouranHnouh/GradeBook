//
//  main.cpp
//  GradeBook
//
<<<<<<< HEAD
//  Created by Nouran Nouh on 2019-09-02.


#include <iostream>
#include "GradeBook.h" // class header file 
using namespace std;


int main(int argc, const char * argv[]) {
    
    //create object of the class GradeBook
    GradeBook gradeBook1("Math210 Introduction to Calculus","Jhon March");
    GradeBook gradeBook2("CST101 DataBase", "Chad Noah");
    cout<<endl;
    
    //modify gradeBook1`s courseName
    gradeBook1.setCourseName("Math210 Calculus");
   
    //display each GradeBook`s courseName and instructor 
    gradeBook1.displayMessage();
    gradeBook2.displayMessage(); 
    cout<<endl;
    
    return 0;
}// end main
=======
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
>>>>>>> 83e2824d566bac82ca71ed3b3dc6528770d673ef
