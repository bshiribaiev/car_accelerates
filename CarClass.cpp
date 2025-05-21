/*
	Name: CarClass
	Copyright: 2023
	Author: Bekbol Shiribaiev
	Date: 10/11/23 16:26
	Description: This program demonstrates a class that creates
	Car object then display the speed of the car each time after
	it accelerates and stops
*/
#include <iostream>
#include <string>
using namespace std;

// Class definition
class Car {
	private:
		int yearModel;
		int speed;
		string make;

	public:

		// Constructor
		Car(int, string);

		// Accessor for yearModel member variable
		int getyearModel() const {
			return yearModel;
		}

		// Accessor for speed member variable
		int getSpeed() {
			return speed;
		}

		// Accessor for make member variable
		string getBrand() {
			return make;
		}

		// Add 5 to speed member variable
		void accelerate() {
			speed += 5;
		}

		// Substract 5 from speed member variable
		void brake() {
			speed -= 5;
		}
};

// Main test driver
int main() {
	Car car(2004, "Toyota");
	cout << "The speed of the car during acceleration:" << endl;
	for(int i = 0; i < 5; i++) {
		car.accelerate();
		cout << "The current speed of the car is "
		     << car.getSpeed() << " miles per hour" << endl;
	}
	cout << endl;
	cout << "The speed of the car after it brakes:" << endl;
	for(int i = 0; i < 5; i++) {
		car.brake();
		cout << "The current speed of the car is "
		     << car.getSpeed() << " miles per hour" << endl;
	}
	return 0;
}

// Constructor definition
Car::Car(int year, string brand) {
	year = yearModel;
	brand = make;
	speed = 0;
}