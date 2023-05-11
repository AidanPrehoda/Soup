#include <iostream>      //for talking to the console
using namespace std;      //so we don't have to type "std::"

//when the program starts
int main() {
  //cout means console output-it sends text to the console
  std::cout << "U sukz!\n";      // \newline
  cout<< "What tf your name fake gamer?\n";
  
  //create a variable to store th player's name
  string playerName= "Player";
  
  //get input text from the player
  cin >> playerName;
  
  //greet player with their name
  cout << "Didn't ask " << playerName << ".\n";
  
  //have computer ask your age
  cout << "Is you old?\n";
  
  int playerAge = 0;
  
  //say age back to player
  cin >> playerAge;

  cout << playerAge  <<  "Yikes! That old??" << "\n";
}