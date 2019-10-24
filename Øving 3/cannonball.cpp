#include "std_lib_facilities.h"
#include "cannonball.h"
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>

double acclY()
{
	return -9.81;
}

double acclX()
{
	return 0.0;
}

double velY(double initVelocityY, double time)
{
	return initVelocityY + (acclY()*time);
}

double velX()
{
	return 50.0;
}

double posX(double initPosition, double initVelocity, double time)
{
	return initPosition + (initVelocity*time);
}

double posY(double initPosition, double initVelocity, double time)
{
	return initPosition + (initVelocity*time) + (0.5*acclY()*time*time);
}

double printTime(double time)
{
	double hrs = floor(time / 3600.0);
	double mins = floor(((time / 3600.0) - hrs) * 60.0);
	double seks = time - (60.0*(mins + hrs * 60.0));
	//cout << (time) << " sekunder er: ";
	cout << hrs << " timer, ";
	cout << mins << " minutter, ";
	cout << seks << " sekunder." << '\n';
	return 0.0;
}

double flightTime(double initVelocityY)
{
	return (-2 * initVelocityY / acclY());
}

void getUserInput(double& theta, double& absVelocity)
{
	cout << "Skriv inn verdi for theta (grader): ";
	cin >> theta;
	cout << "Skriv inn verdi for hastighet: ";
	cin >> absVelocity;
}

double degToRad(double deg)
{
	return deg*2*M_PI/360.0;
}

double getVelocityX(double theta, double absVelocity)
{
	return absVelocity * cos(degToRad(theta));
}

double getVelocityY(double theta, double absVelocity)
{
	return absVelocity * sin(degToRad(theta));
}

void getVelocityVector(double theta, double absVelocity, double& velocityX, double& velocityY)
{
	velocityX = getVelocityX(theta, absVelocity);
	velocityY = getVelocityY(theta, absVelocity);
}

double getDistanceTraveled(double velocityX, double velocityY)
{
	return (flightTime(velocityY) * velocityX);
}

double targetPractice(double distanceToTarget, double velocityX, double velocityY)
{
	return distanceToTarget - getDistanceTraveled(velocityX, velocityY);
}

