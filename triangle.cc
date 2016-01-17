#include "triangle.h"
#include <iostream>
#include <math.h>

using namespace std;

const double pi = 3.14159265358979323846;

void Triangle::AAS() {
  cout << "Please enter the first angle opposite the known side length: " << endl;
  cin >> angle1;
  cout << "Please enter the second angle: " << endl;
  cin >> angle2;
  cout << "Please enter the side length: " << endl;
  cin >> side1;
  angle3 = 180 - angle1 - angle2;
  cout << "The third angle is: " << angle3 << endl;
  side2 = sineLawSide(side1, angle1, angle2);
  cout << "The side opposite the second angle is: " << side2 << endl;
  side3 = sineLawSide(side1, angle1, angle3);
  cout << "The side opposite the third angle is: " << side3 << endl;
}

void Triangle::ASA() {
  cout << "Please enter the first angle: " << endl;
  cin >> angle1;
  cout << "Please enter the first side length between the angles: " << endl;
  cin >> side1;
  cout << "Please enter the second angle: " << endl;
  cin >> angle2;
  angle3 = 180 - angle1 - angle2;
  cout << "The third angle opposite the first side length is: " << angle3 << endl;
  side2 = sineLawSide(side1, angle3, angle1);
  cout << "The side opposite the first angle given is: " << side2 << endl;
  side3 = sineLawSide(side1, angle3, angle2);
  cout << "The side opposite the second angle given is: " << side3 << endl;
}

void Triangle::SAS() {
  cout << "Please enter the first side length: " << endl;
  cin >> side1;
  cout << "Please enter the angle: " << endl;
  cin >> angle1;
  cout << "Please enter the second side length: " << endl;
  cin >> side2;
  side3 = cosineLawSide(side1, side2, angle1);
  cout << "The third side length opposite the first angle given is: " << side3 << endl;
  angle2 = sineLawAngle(side3, angle1, side1);
  cout << "The second angle opposite the first side length given is: " << angle2 << endl;
  angle3 = 180 - angle1 - angle2;
  cout << "The third angle opposite the second side length given is: " << angle3 << endl;
}

void Triangle::SSA() {
  cout << "Please enter the first side length opposite the known angle: " << endl;
  cin >> side1;
  cout << "Please enter the second side length: " << endl;
  cin >> side2;
  cout << "Please enter the angle opposite to the first side length: " << endl;
  cin >> angle1;
  angle2 = sineLawAngle(side1, side2, angle1);
  cout << "The second angle opposite to the first side length given is: " << angle2 << endl;
  angle3 = 180 - angle1 - angle2;
  cout << "The third angle is: " << angle3 << endl;
  side3 = sineLawSide(side1, angle1, angle3);
  cout << "The third side is: " << side3 << endl;
}

void Triangle::SSS() {
  cout << "Please enter the first side length: " << endl;
  cin >> side1;
  cout << "Please enter the second side length: " << endl;
  cin >> side2;
  cout << "Please enter the third side length: " << endl;
  cin >> side3;
  angle1 = cosineLawAngle(side3, side2, side1);
  cout << "The angle opposite the first side length given is: " << angle1 << endl;
  angle2 = cosineLawAngle(side1, side3, side2);
  cout << "The angle opposite the second side length given is: " << angle2 << endl;
  angle3 = 180 - angle1 - angle2;
  cout << "The angle opposite the third side length given is: " << angle3 << endl;
}

double Triangle::sineLawSide(double sideA, double angleA, double angleB) {
  double sideB;
  sideB = (sideA / sin((angleA * pi) / 180)) * sin((angleB * pi) / 180);
  return sideB;
}

double Triangle::sineLawAngle(double sideA, double sideB, double angleA) {
  double angleB;
  angleB = (sin((angleA * pi) / 180) / sideA) * sideB;
  return (asin(angleB) * 180) / pi;
}

double Triangle::cosineLawSide(double sideA, double sideB, double angleC) {
  double sideC;
  sideC = sqrt((sideA * sideA) + (sideB * sideB) - (2 * sideA * sideB * cos((angleC * pi) / 180)));
  return sideC;
}

double Triangle::cosineLawAngle(double sideA, double sideB, double sideC) {
  double angleA;
  angleA = ((sideC * sideC) - (sideA * sideA) - (sideB * sideB)) / (-2 * sideA * sideB);
  return (acos(angleA) * 180) / pi;
}
