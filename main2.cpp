#include <iostream>
using namespace std;
int main() {
  std::cout << "Hello World!\n";

  string name = "Aidan";

  cout << name << "has a size of " << name.size() << ".\n";

  string favGames[100];

  int index = 0;

  while(true) {
    cout << "What would you like to do?\n";
    cout << "Type 'quit' to quit the program.\n";
    cout << "Type 'add' to add a game.\n";
    cout << "Type 'bulkadd' to add more than one game.\n";
    cout << "Type 'show' to show your favorite games.\n";
    cout << "Type 'edit' to edit your favorite games.\n";
    cout << "Type 'editlast' to edit your latest entry.\n";

    string input;
    cin >> input;

    if(input == "quit") {
      cout << "Shutting down...\n";
      break;
    }
  
    else if(input == "add"){
      cout << "What game would you like to add?\n";
      cin >> input;
      favGames[index] = input;
      index ++;
    }

    else if(input == "bulkadd"){
      cout << "What games would you like to add? Type 'stop' to stop.\n";
      int loop = true;
      cout << "Enter another game or type 'stop' to stop.\n";
      cin >> input;
      favGames[index] = input;
      if(input == "stop"){
        int loop = false;
      }
      
    }
      
    else if(input == "show") {
      cout << "Here are your favorite games:\n";
      for(int i = 0; i < index; i += 1){
        cout << i + 1 << ". " << favGames[i] << "\n";  
        }
    }

    else if(input == "edit") {
        cout << "What is the number of the name you want to change?\n";
        int numInput;
        cin >> numInput;

        cout << "What would you like to change " << favGames[numInput - 1] << " to?\n";
        cin >> input;
        favGames[numInput - 1] = input;
      
    }

    else if(input == "editlast") {
        cout << "last entry was " << favGames[index - 1] << ", change to what?\n>>";
        cin >> input;
        favGames[index - 1] = input;
    }

    else if(input == "find") {
        cout << "What game do you want to find?\n";
        cin >> input;
        for(int i = 0; i < index; i++) {

            if(input == favGames[i]) {
                cout << "Found it for you!\n";
                cout << "What would you like to change it to?\n";
                cin >> input;

                favGames[i] = input;
            }

            if(i + 1 == index) {
                cout << "I looked but could not find it." << input << ".\n";
            }
        }
    }

    else {
        cout << "[command not recognized]\n";
    }
  }
}