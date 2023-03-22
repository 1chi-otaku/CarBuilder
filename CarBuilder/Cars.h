#pragma once
#include <string>
#include <iostream>
using namespace std;
class Car
{
	string mech_name;
	string body;
	string transmission;
	double engine;
	int wheels;

public:
	void SetMech(string mech_name)
	{
		this->mech_name = mech_name;
	}
	string GetMech()
	{
		return this->mech_name;
	}

	void SetBody(string body)
	{
		this->body = body;
	}
	string GetBody()
	{
		return this->body;
	}

	void SetTrans(string trans)
	{
		this->transmission = trans;
	}
	string GetTrans()
	{
		return transmission;
	}

	void SetEngine(double engine)
	{
		this->engine = engine;
	}
	double GetEngine()
	{
		return engine;
	}

	void SetWheels(int wheels)
	{
		this->wheels = wheels;
	}
	int GetWheels()
	{
		return wheels;
	}

	void Print() {
		cout << "This is an amazing car with " + mech_name + " mechanism, " + body + " body, " + transmission + " transmisson!\n";
		cout << "This car has " << engine << " engine and " << wheels << " wheels!";
	}
};

class CarBuilder abstract {
protected:
	Car car;
public:
	Car GetCar()
	{
		return car;
	}
	virtual void BuildMech() abstract;
	virtual void BuildBody() abstract;
	virtual void BuildTransmission() abstract;
	virtual void BuildEngine() abstract;
	virtual void BuildWheels() abstract;
};

class DaewooLanosBuilder : public CarBuilder
{
public:
	void BuildMech() override
	{
		car.SetMech("Daewoo Lanos");
	}
	void BuildBody() override
	{
		car.SetBody("Sedan");
	}
	void BuildTransmission() override
	{
		car.SetTrans("5 Manual");
	}
	void BuildEngine() override
	{
		car.SetEngine(98);
	}
	void BuildWheels() override
	{
		car.SetWheels(13);
	}
};

class FordProbeBuilder : public CarBuilder
{
public:
	void BuildMech() override
	{
		car.SetMech("Ford Probe");
	}
	void BuildBody() override
	{
		car.SetBody("Compartment");
	}
	void BuildTransmission() override
	{
		car.SetTrans("4 Auto");
	}
	void BuildEngine() override
	{
		car.SetEngine(160);
	}
	void BuildWheels() override
	{
		car.SetWheels(14);
	}
};

class UAZPatriotBuilder : public CarBuilder
{
public:
	void BuildMech() override
	{
		car.SetMech("UAZ Patriot");
	}
	void BuildBody() override
	{
		car.SetBody("Universal");
	}
	void BuildTransmission() override
	{
		car.SetTrans("4 Manual");
	}
	void BuildEngine() override
	{
		car.SetEngine(120);
	}
	void BuildWheels() override
	{
		car.SetWheels(16);
	}
};

class HyundaiGetz : public CarBuilder
{
public:
	void BuildMech() override
	{
		car.SetMech("Hyundai Getz");
	}
	void BuildBody() override
	{
		car.SetBody("HatchBack?");
	}
	void BuildTransmission() override
	{
		car.SetTrans("4 Auto");
	}
	void BuildEngine() override
	{
		car.SetEngine(66);
	}
	void BuildWheels() override
	{
		car.SetWheels(13);
	}
};

class Shop {
	CarBuilder* carbuilder;
public:
	void SetCarBuilder(CarBuilder* carbuilder) {
		this->carbuilder = carbuilder;
	}
	Car GetCar() {
		return carbuilder->GetCar();
	}
	void ConstructCar() {
		carbuilder->BuildMech();
		carbuilder->BuildBody();
		carbuilder->BuildTransmission();
		carbuilder->BuildEngine();
		carbuilder->BuildWheels();
	}
};