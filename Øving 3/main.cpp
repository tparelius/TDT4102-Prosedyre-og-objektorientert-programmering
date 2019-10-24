#include "std_lib_facilities.h"
#include "cannonball.h"
#include "utilities.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>
//setlocale(LC_ALL, "nb-NO");
//setlocale(LC_ALL, "utf-8");

//Deklarasjon
bool testDeviation(double compareOperand, double toOperand, double maxError, string name);
void testVerdier();
void implementFunk();
void cannonb();


int main(){
	//Oppgave 2 og 3
	//testVerdier();

	//Oppgave 4
	//implementFunk();

	//Oppgave 5
	//cannonb();
	srand(static_cast<unsigned int>(time(nullptr)));
	playTargetPractice();

	return 0;
}

void cannonb() {
	srand(static_cast<unsigned int> (time(nullptr)));
	int lower;
	int upper;
	cout << "Skriv inn nedre grense: ";
	cin >> lower;
	cout << '\n' << "Skriv inn øvre grense: ";
	cin >> upper;
	randomWithLimits(lower, upper);
	
}
void implementFunk() {
	double theta;
	double absVelocity;
	double velocityX;
	double velocityY;
	double distanceToTarget = 20;

	getUserInput(theta, absVelocity);
	getVelocityVector(theta, absVelocity, velocityX, velocityY);
	cout << velocityX << " m/s i x-retning" << '\n';
	cout << velocityY << " m/s i y-retning" << '\n';
	cout << "Flight time er (i sekunder): ";
	cout << getDistanceTraveled(velocityX, velocityY) << '\n';
	cout << targetPractice(distanceToTarget, velocityX, velocityY);
}
void testVerdier() {
	double maxError = 0.01;

	//Tester om verdier og funksjoner stemmer
	testDeviation(velY(25.0, 2.5), 0.475, maxError, "velY(25.0, 2.5)");
	cout << "Verdi: " << velY(25.0, 2.5);
	testDeviation(velY(25.0, 5.0), -24.05, maxError, "velY(25.0, 5.0)");
	cout << "Verdi: " << velY(25.0, 5.0);

	testDeviation(posX(0.0, 50.0, 2.5), 125.0, maxError, "posX(0.0, 50.0, 2.5)");
	cout << "Verdi: " << posX(0.0, 50.0, 2.5);
	testDeviation(posX(0.0, 50.0, 5.0), 250.0, maxError, "posX(0.0, 50.0, 5.0)");
	cout << "Verdi: " << posX(0.0, 50.0, 5.0);

	testDeviation(posY(0.0, 25.0, 2.5), 31.84, maxError, "posY(0.0, 25.0, 2.5)");
	cout << "Verdi: " << posY(0.0, 25.0, 2.5);
	testDeviation(posY(0.0, 25.0, 5.0), 2.375, maxError, "posY(0.0, 25.0, 5.0)");
	cout << "Verdi: " << posY(0.0, 25.0, 5.0);

	cout << '\n';

	printTime(2000.0);
	cout << flightTime(25.0);

	//return 0.0;
}
bool testDeviation(double compareOperand, double toOperand, double maxError, string name)
{
	if (abs(compareOperand - toOperand) < maxError)
	{
		cout << '\n' << name << " stemmer overens.\n";
		return true;
	}
	else
	{
		cout << '\n' << name << " stemmer ikke overens.\n";
		return false;
	}
}