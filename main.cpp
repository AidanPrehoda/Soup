#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

string names[] = {"TZ-4", "Tiva", "Bust3r"};

class robot {
    string name;
    int fuelLevel;
    
    int robot = 2;

public:
    robot(string givenName = "USS Boat", int givenFuel = -1, int givenClass = -1) {
        
        if(givenName == "TZ-4") {
            
            name = names[rand() % 3];
        } 
        else {
            name = givenName;
        }

        if(givenFuel == -1) {
            
            fuelLevel = rand() % 75 + 25;
        }
        else {
            fuelLevel = givenFuel;
        }

        if(givenClass == -1) {
            robot = rand() % 3 + 1;
        } 
        else {
            robot = givenClass;
        }

        sitrep();
    } 

    void sitrep() {
        cout << "The robot \"" << name << "\" has " << fuelLevel << " fuel.\n";
        cout << "This robot is a ";

       
      }
    }

    void travel() {
        cout << "You wish to travel to a faraway star system.\n";
        int requiredFuel = rand() % 25 + 1;
        cout << "it requires " << requiredFuel << " fuel.\n";
        cout << "You have " << fuelLevel << " units of fuel.\n";
        if(fuelLevel > requiredFuel) {
            cout << "Let's go!\n";
            fuelLevel -= requiredFuel;
            cout << "you have arrived with " << fuelLevel << " fuel.\n";
        }
        else {
            cout << "You do not have enough fuel.\n";
        }
    }


    string GetName() {
        return name;
    }
    void SetName(string givenName) {
        
        if(givenName == "shit" || givenName == "Shit" || givenName == "5h1t" || givenName == "SHIT") {
            cout << "Naughty! Be nice, friend.\n";
            return;       
        if(givenName.size() > 10 || givenName.size() < 3) {
            cout << "No names longer than 10 characters.\n";
            cout << "Also no names shorter than 3 characters.\n";
            return;
        }

        name = givenName;
    }
    int GetFuelLevel() {
        return fuelLevel;
    }
    void SetFuelLevel(int givenLevel) {
        if(givenLevel < 0) {
            fuelLevel = 0;
        }
        else if(givenLevel > 100) {
            fuelLevel = 100;
            cout << "you have an excess of " << givenLevel - 100 << " fuel.\n";
        }
        else {
            fuelLevel = givenLevel;
        }
    }
    
    int GetShipClass() {
        return shipClass;
    }

    void SetShipClass(int givenClass) {
        if (givenClass >= 1 && givenClass <= 3) {
            shipClass = givenClass;
        } else {
            cout << "Invalid ship class. Please enter a number between 1 and 3." << endl;
        }
}

};

int main() {
    srand(time(0));
    robot apollo;        
    robot falcon("Millenium Falcon");       
    robot bananaBoat("Banana Boat", 45, 3);

    cout << "Bananaboat is trying to travel...\n";
    bananaBoat.travel();
    bananaBoat.travel();
    bananaBoat.travel();
    bananaBoat.travel();

    
    cout << "My spaceship's name is " << bananaBoat.GetName() << ".\n";
    cout << "Jerk: That's a terrible name! Change it to 'coolboat3'!!\n";
    cout << "Fine.\n";
    bananaBoat.SetName("coolboat3");

    cout << "My spaceship's name is " << bananaBoat.GetName() << ".\n";

    cout << "My current fuel level is " << bananaBoat.GetFuelLevel() << ".\n";
    cout << "Time to refuel. paying for 200 gallons of fuel.\n";
    bananaBoat.SetFuelLevel(200);

    cout << "I now have " << bananaBoat.GetFuelLevel() << " fuel.\n";
    
}
