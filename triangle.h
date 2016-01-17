#ifndef __TRIANGLE__
#define __TRIANGLE__

class Triangle {
  public:
    double side1; 
    double side2;
    double side3;
    double angle1; // opposite side 1
    double angle2; // opposite side 2
    double angle3; // opposite side 3
    void AAS(); // 2 angles and adjacent side
    void ASA(); // 1 side and 2 angles on either side
    void SAS(); // 2 sides and angle in between
    void SSA(); // 2 sides and adjacent angle
    void SSS(); // all 3 sides
    double sineLawSide(double sideA, double angleA, double angleB); // uses sine law to calculate remaining side
    double sineLawAngle(double sideA, double sideB, double angleA); // uses sine law to calculate remaining angle
    double cosineLawSide(double sideA, double sideB, double angleC); // uses cosine law to calculate remaining side
    double cosineLawAngle(double sideA, double sideB, double sideC); // uses cosine law to calculate remaining angle
};

#endif
