#include <iostream>

using namespace std;


class Vehicle {
protected:
	int  m_miles;
	float m_gas;
	bool m_driveable;

public:
	Vehicle() {
		m_miles = 0;
		m_gas = 10;
		m_driveable = true;
		description();
	}
	void description() {
		cout << "Details" << endl;
		cout << "Gas: " << m_gas << endl;
		cout << "Milage: " << m_miles << endl;
		cout << "Is it Drivable?: ";
		if (m_driveable) {
			cout << "Yes!" << endl;
		}
		else {
			cout << "No!" << endl;
		}
	}
	virtual void drive(int miles) {
		if (miles > m_gas) {
			cout << "You cannot do that. You dont have enough gas. You only have " << m_gas << "gallons of gas." << endl;
			cout << "You can only drive a maximum of " << m_gas << " miles" << endl;
			cout << "I recommend adding gas to your tank!" << endl;
		}
		else {
			m_miles = m_miles + miles;
			m_gas = m_gas - miles;
			cout << " You drove your vehicle for " << miles << " miles" << " you have driven a total of " << m_miles << " miles"<<endl;
			cout << "Based on your gas tank, you have " << m_gas << " miles left." << endl;
		}
		if (m_gas == 0) {
			m_driveable = false;
		}
	}
	void addGas(float gas) {
		m_gas = m_gas + gas;
		m_driveable = true;
	}
	bool isDrivable() {
		return m_driveable;
	}
	virtual void visual() {
		cout << "There is no visual for this vehicle." << endl;
	};
};

//Subclass Boat

class Boat :public Vehicle {
public:
	Boat():Vehicle() {

	}
	 void drive(int miles) override {
		 if (miles > m_gas) {
			 cout << "You cannot do that. You dont have enough gas. You only have " << m_gas << "gallons of gas." << endl;
			 cout << "You can only drive a maximum of " << m_gas << " miles" << endl;
			 cout << "I recommend adding gas to your tank! OR turning your boat into a row boat?" << endl;
		 }
		 else {
			 m_miles = m_miles + miles;
			 m_gas = m_gas - miles;
			 cout << " You drove your Boat for " << miles << " miles" << " you have driven a total of " << m_miles << " miles"<<endl;
			 cout << "Based on your gas tank, you have " << m_gas << " miles left." << endl;
		 }
		 if (m_gas == 0) {
			 m_driveable = false;
		 }
	}
	 void visual() override {
		 cout << "                   v  ~.      v"<< endl;
		 cout << "          v           /|" << endl;
		 cout << "                     / |          v" << endl;
		 cout << "              v     /__|__" << endl;
		 cout << "                  \\--------/" << endl;
		 cout << "~~~~~~~~~~~~~~~~~~~`~~~~~~'~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	 }
};

//Subclass Car
class Car :public Vehicle {
public:
	Car() {

	}
	void drive(int miles) override {
		if (miles > m_gas) {
			cout << "You cannot do that. You dont have enough gas. You only have " << m_gas << "gallons of gas." << endl;
			cout << "You can only drive a maximum of " << m_gas << " miles" << endl;
			cout << "I recommend adding gas to your tank! OR taking the bus?" << endl;
		}
		else {
			m_miles = m_miles + miles;
			m_gas = m_gas - miles;
			cout << "Vroom, Vroom!" << endl;
			cout << " You drove your Car for " << miles << " miles" << " you have driven a total of " << m_miles << " miles"<<endl;
			cout << "Based on your gas tank, you have " << m_gas << " miles left." << endl;
		}
		if (m_gas == 0) {
			m_driveable = false;
		}
	}
	void visual() override {
		cout << "        _______" << endl;
		cout << "       //  ||\\ \\" << endl;
		cout << " _____//___||_\\ \\___" << endl;
		cout << " )  _          _    \\" << endl;
		cout << " |_/ \\________/ \\___|" << endl;
		cout << "___\\_/________\\_/______" << endl;
	}
};

//Subclass Airplane
class Airplane :public Vehicle {
public:
	Airplane() {

	}
	void drive(int miles) override {
		if (miles > m_gas) {
			cout << "You cannot do that. You dont have enough gas. You only have " << m_gas << "gallons of gas." << endl;
			cout << "You can only fly a maximum of " << m_gas << " miles" << endl;
			cout << "I recommend adding gas to your tank! OR growing wings?" << endl;
		}
		else {
			m_miles = m_miles + miles;
			m_gas = m_gas - miles;
			cout << "You flew your plane for " << miles << " miles" << " you have flown a total of " << m_miles << " miles" << endl;
			cout << "Based on your gas tank, you have " << m_gas << " miles left." << endl;
		}
		if (m_gas == 0) {
			m_driveable = false;
		}

	}
	void visual() override {
		cout << "   ____       _" << endl;
		cout << " |__\\_\\_o,___/ \\" << endl;
		cout << "([___\\_\\_____-\\'" << endl;
		cout << " | o'" << endl;

	}
};

int main() {

	cout << "Hello Traveler! For keeping me company for so long. I want to show you my fun toys." << endl;
	cout << "Unknown Vehicle ";
	Vehicle vehicle;
	vehicle.visual();
	cout << '\n';
	cout << "Car ";
	Car car;
	car.visual();
	cout << '\n';
	cout << "Boat ";
	Boat boat;
	boat.visual();
	cout << '\n';
	cout << "Airplane ";
	Airplane plane;
	plane.visual();
	cout << '\n';
	cout << "I Will drive my Unknown vehicle for 3 miles." << endl;
	vehicle.drive(3);
	cout << '\n';
	cout << "I Will drive my car for 10 miles." << endl;
	car.drive(10);
	cout << '\n';
	cout << "I Will drive my boat for 13 miles." << endl;
	boat.drive(13);
	cout << '\n';
	cout << "I Will drive my plane for 0 miles." << endl;
	plane.drive(0);
	cout<<'\n'<<endl;

}