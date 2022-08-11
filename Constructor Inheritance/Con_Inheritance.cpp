#include<iostream>
using namespace std;

class Machine{
private:
	int id;
public:
    Machine(): id(0){
    	cout << "Machine no-argument constructor called." << endl;
    }
    Machine(int id): id(id){
    	cout << "Machine no-argument constructor called." << endl;
    }
    void info(){
    	cout << "ID: " << id << endl;
    }
};

class Vehicle: public Machine {
public:
	Vehicle(){
		cout << "Vehicle no-argument constructor called." << endl;
	}
};

class Car: public Vehicle {
public:
	Car(){
		cout << "Car no-argument constructor called." << endl;
	}
};

int main() {
Vehicle vehicle;
vehicle.info();
return 0;
}
