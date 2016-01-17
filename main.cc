#include "triangle.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
  Triangle t;
  string command;
  cout << "Hello and welcome to my simple triangle solver project!" << endl;
  cout << "If you know all three angles, enter 'AAA'.\nIf you know two angles and a side NOT between, enter 'AAS'.\nIf you know two angles and a side between, enter 'ASA'." << endl;
  cout << "If you know two sides and an angle between, enter 'SAS'.\nIf you know two sides and an angle NOT between, enter 'SSA'.\nIf you know all three sides, enter 'SSS'." << endl;
  cin >> command;
  if (command == "AAA") {
    cout << "This program cannot solve a triangle without a side." << endl;
  } else if (command == "AAS") {
    t.AAS();
  } else if (command == "ASA") {
    t.ASA();
  } else if (command == "SAS") {
    t.SAS();
  } else if (command == "SSA") {
    t.SSA();
  } else if (command == "SSS") {
    t.SSS();
  } else if (command == "AAA") {
    cout << "You need at least one side length to solve the triangle." << endl;
  } else {
    cout << "This is not a valid command." << endl;
  }
}
