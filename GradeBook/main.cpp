//
//  main.cpp
//  GradeBook
//
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
