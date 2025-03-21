//1
#include <math.h>
#include<stdio.h>
#define PI 3.141592654
int main ()
{
    int m=1;
    float  theta =45;
    float radian;
    radian =  theta * (PI/180.0);
    sin (radian);
    // we know for single slit diffraction , a sin(theta)=m λ so, let the ratio =a/λ
    float ratio= m/sin (radian) ;
    printf ("The ratio will be = %.3f ",ratio);
        return 0 ;
}

//2
#include <stdio.h>
#include <math.h>
#define PI 3.1416
int main()
{
    float  lambda, theta, d;
    printf("Enter the wavelength in nm,(lambda): ");
    scanf("%f", &lambda);

    printf("\nEnter the angle in degre ,(theta): ");
    scanf("%f", &theta);

    printf("\nEnter the slit distance in micrometers,(d): ");
    scanf("%f", &d);

    if (lambda < 380 || lambda > 750)
    {
        printf("Out of the range. Please enter a valid number.");
        return 1;
    }
    double radius = theta * PI / 180.0;

     lambda = lambda / 1000000000.0;
     //Convert nanometers to meters

    d=d/1000000.0;
    //Convert micrometer to meter

    int m = (d * sin(radius)) / lambda;

    printf("\n%d-th order maxima:", m);
    return 0;
}
