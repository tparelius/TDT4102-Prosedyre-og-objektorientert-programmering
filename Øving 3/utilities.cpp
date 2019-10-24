#include "utilities.h"
#include "cannonball.h"
#include "std_lib_facilities.h"

int randomWithLimits(int lower, int upper)
{
	return rand() % (upper-lower+1) + lower;
}

void playTargetPractice()
{
	double theta;
	double absVelocity;
	double velocityX;
	double velocityY;
	double distanceToTarget = randomWithLimits(100, 1000);
	int n = 1;
	cout << "Velkommen til Cannonball!" << '\n';
	cout << "Du har 10 forsøk p"<<(char)0x86<<" "<<(char)0x86<<" treffe blinken." << '\n';
	cout << "---------------------------------------------" << '\n';
	while (n < 11) {
		//cout << distanceToTarget << " meter.\n";
		cout << "---------------------------------------------" << '\n';
		cout << "Forsøk nummer " << n << '\n';
		getUserInput(theta, absVelocity);
		getVelocityVector(theta, absVelocity, velocityX, velocityY);
		//cout << velocityX << " m/s i x-retning" << '\n';
		//cout << velocityY << " m/s i y-retning" << '\n';
		
		cout << "Kanonkulen landet etter ";
		//printTime(flightTime(velocityY));
		cout << flightTime(velocityY) << " sekunder." << '\n';
		cout << "Du skøyt ";
		cout << getDistanceTraveled(velocityX, velocityY) << " meter." << '\n';

		if (getDistanceTraveled(velocityX, velocityY) > distanceToTarget + 5)
		{
			cout << "Det var ";
			cout << abs(targetPractice(distanceToTarget, velocityX, velocityY));
			cout << " meter for langt.";
			cout << '\n' << "Prøv igjen." << '\n';
			
			++n;
		}
		if (getDistanceTraveled(velocityX, velocityY) < distanceToTarget - 5)
		{
			cout << "Det var ";
			cout << abs(targetPractice(distanceToTarget, velocityX, velocityY));
			cout << " meter for kort.";
			cout << '\n' << "Prøv igjen." << '\n';
			
			++n;
		}
		if (abs(getDistanceTraveled(velocityX, velocityY) - distanceToTarget) < 5)
		{
			cout << "Du traff blinken, gratulerer!";
			cout << "---------------------------------------------" << '\n';
			n=12;
		}
		if (n == 11) {
			cout << "---------------------------------------------" << '\n';
			cout << "You lost." << '\n';
			cout << "Game over." << '\n';
			cout << "---------------------------------------------" << '\n';

			n == 12;
		}
	}
	
}
