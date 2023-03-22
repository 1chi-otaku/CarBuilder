#include <iostream>
#include "Cars.h"
using namespace std;

void client(CarBuilder* carbuilder)
{
	Shop shop;
	shop.SetCarBuilder(carbuilder);
	shop.ConstructCar();
	Car car = shop.GetCar();
	car.Print();
}
int main() {

	CarBuilder* builder = new FordProbeBuilder();
	client(builder);
	delete builder;
	cout << endl << endl;
	builder = new DaewooLanosBuilder();
	client(builder);
	delete builder;
	cout << endl << endl;
	builder = new UAZPatriotBuilder();
	client(builder);
	delete builder;
	cout << endl << endl;
	builder = new HyundaiGetz();
	client(builder);
	delete builder;
	cout << endl << endl;
	return 0;
}