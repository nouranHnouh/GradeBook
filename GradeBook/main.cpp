//
//  main.cpp
//  GradeBook
//
//  Created by Nouran Nouh on 2019-03-06.
//  Copyright © 2019 Nouran Nouh. All rights reserved.
// Define GradeBook class with a member function dispalyMessage.
// create GradeBook object and call displayMessage functions

#include <iostream>
#include<string>
using namespace std;



class GradeBook
    {
    
    public:
        //constructor initializates cpourseName with string
        explicit GradeBook(string name)
        : courseName(name)//initialize course name
        {
        }
        
        // function setCourseName sets the course name to courseName
        void setCourseName(string name) {
            // store course name
            courseName=name;
        }
        string getCourseName() const {
            return courseName;
        }
        
        void displayMessage() const
        {
            
            cout<<"Welcome to Grade Book for \n "<< getCourseName()<<"!"<<endl;
            
        }//end function displayMessage
    private:
        string courseName;
    }; //end class GradeBook

int main()
{
    string courseName;
    // create GradeBook object
    GradeBook gradebook;
    
    //dipslay intial course name
    cout<<"intial course name is : "<<gradebook.getCourseName() <<endl;
    
    //ask user to enter course name
    cout<<"Please enter the name of the course: "<<endl;
    getline(cin,courseName);
    gradebook.setCourseName(courseName); //set the course name
    cout<<endl;
    gradebook.displayMessage();

}//end main 
