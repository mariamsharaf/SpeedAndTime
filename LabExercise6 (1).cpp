// COMSC-110  Lab Exercise
// LabExercise6_Sample.cpp
// This program prompts for the user inputs of travel speed and time
// Apply while-loop to do the input validation
// at the end using a while-loop to display the hourly travelled distance

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double speed; //the speed of the vehicle
  int time;     //the travelled time in hours
    cout <<"***This program calculates the hourly distance traveled***" << endl;
   // get the travel speed
   cout << "What is the speed of the vehicle mile/hour:";
   cin >> speed;
    while (speed < 0) {
        cout << "Inavlid input! The speed of the vehicle should be greater than or equal to zero."<<endl;
        cout << "Enter speed:";
        cin >>speed;
       
    }
    
   // use a while-loop to valid the input of speed
  // file out the condition to check the value of speed
  // prompt the error message and input again in the code block
  
  
   // get the travel time
   cout << "How many hours has it traveled:";
   cin >> time;

   
    while (time < 1)
   {cout << "Inavlid input! The time traveled can't be under 1 hour."<<endl;
     cout << "Enter time:";
     cin >>time;
   }
  
  // Use a while-loop to display the output in a table format
  
  
  // Display the title of the table
  cout << setw(8) << "Hour" << setw(30) << "Distance Travelled (miles)" << endl;
  cout << "============================================" << endl;

  // set a count
  int count = 1;
  while (count <= time)
  { cout << setprecision(1) << fixed ;
    cout << setw(8) << count << setw(30) << speed * count << endl;
    count++;
  }
   return 0;
} 
