/** Luke Deegan,
 *  Exercise 9,
 *  Sphere Calculations,
 *  7/11/17
 */

/** Preprocessor directives */
#include <iostream>
#include <cmath>

using namespace std;

/** Declare all subfunctons */
int main(void);
void sphere(double radius, double *volPtr, double *saPtr);


int main(void)
{
    /** Declare all main functions */
    double radius = 0, volume = 0, sur_area = 0;
    double *volPtr = &volume, *saPtr = &sur_area;

    cout << "Program to calculate both the surface area of a sphere as\nwell as the volume of the sphere" << endl;

    /** While loop to ensure a positive r value is entered */
    while (radius <= 0)
    {
        cout << "\nPlease enter a value for r in m:\t ";
        cin >> radius;
    }

    /** Call sub-function for volume calculation */
    sphere(radius, volPtr, saPtr);

    /** Display the result to the user */
    cout << "\nVolume of the sphere is:\t" << volume << "m^3";

    cout << "\nSurface Area of the sphere is:\t" << sur_area << "m^2\n\n";
    return 0;
}
/** Sub-function using pointers to calculate volume and surface area */
void sphere(double radius, double *volPtr, double *saPtr)
{
    *volPtr = (4/3.0)*M_PI*(pow(radius, 3));

    *saPtr = 4*M_PI*(pow(radius, 2));

    return;
}

