/* Name: Huthsady Legend Boun 
 * Professor Edwards
 * November 6th 2024
 * Description: Short program that allows for Linear Search algorithm to check for an account number.
*/



#include <iostream>
#include <array>
#include <string>






// Global variables
int userInput;
std::string progStopper = "open";






std::array<int, 18> accountNums =
{
  5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
  8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
  1005231, 6545231, 3852085, 7576651, 7881200, 4581002,
};



void validator()
{
  for(int i = 0; i < 18; i++)
  {
    if (accountNums[i] == userInput)
    {
      std::cout << "Account related to: " << userInput << " is valid!\n";
      i = 18;
    }
    else
    {
      i = 18;
      std::cout << "This is not a valid account number. Please try again.\n";
    }
  }
}

void askUser()
{
  std::cout << "Please enter the 7-digit Account Number you are searching for below: \n";
  std::cout << "vvvvvvv\n";
  std::cin >> userInput;
  if(std::cin.fail())
  {
    std::cin.clear();
  }
}

void progRunning()
{
  std::cout << "Enter 'exit' to exit the program. Type 'con' to continue.\n";
  std::cin >> progStopper;
}


// Main function. Every c++ function. 
int main()
{
  while(progStopper != "exit")
  {
    askUser();
    validator();
    progRunning();
  }
  
}
