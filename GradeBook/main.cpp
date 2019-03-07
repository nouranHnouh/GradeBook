//
//  main.cpp
//  GradeBook
//
//  Created by Nouran Nouh on 2019-03-06.
//  Copyright © 2019 Nouran Nouh. All rights reserved.
// Define GradeBook class with a member function dispalyMessage.
// create GradeBook object and call displayMessage functions

#include <iostream>
using namespace std;



class GradeBook
    {
    public:
        void displayMessage() const
        {
            cout<<"Welcome to Grade Book "<<endl;
            
        }//end function displayMessage
        
    }; //end class GradeBook

int main()
{
    
    // create GradeBook object
    GradeBook gradebook;
    gradebook.displayMessage();

}//end main 
