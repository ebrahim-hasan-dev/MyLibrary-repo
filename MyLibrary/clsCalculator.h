#pragma once

#include <iostream>
using namespace std;


class clsCalculator 
{

private:

	double _Result = 0;
	double _PreviousResult = 0;
	double _PreviousLastNumber = 0;
	double _LastNumber = 0;
	string _LastOperation = "Clear";

	bool _IsZero(double number) 
	{
		return number == 0;
	}

public:

	void Clear() {

		_Result = 0;
		_PreviousResult = 0;
		_LastNumber = 0;
		_PreviousLastNumber = 0;
		_LastOperation = "Clear";
	}

	void Add(double Number) {

		_PreviousResult = _Result;
		_PreviousLastNumber = _LastNumber;
		_LastNumber = Number;
		_Result += Number;
		_LastOperation = "Adding";
	}

	void Subtract(double Number) {

		_PreviousResult = _Result;
		_PreviousLastNumber = _LastNumber;
		_LastNumber = Number;
		_Result -= Number;
		_LastOperation = "Subtracting";
	}

	void Divide(double Number) {

		_PreviousLastNumber = _LastNumber;
		_LastNumber = Number;

		if (_IsZero(Number))
			Number = 1;

		_PreviousResult = _Result;
		_Result /= Number;
		_LastOperation = "Dividing";
	}

	void Multiply(double Number) {

		_PreviousResult = _Result;
		_PreviousLastNumber = _LastNumber;
		_LastNumber = Number;
		_Result *= Number;
		_LastOperation = "Multipling";
	}

	void PrintResult() {

		cout << "\nResult After " << _LastOperation << " " << _LastNumber << " = " << _Result << endl;
	}

	double GetFinalResult() {
		return _Result;
	}

	void CancelLastOperation() {
		_Result = _PreviousResult;
		_LastNumber = _PreviousLastNumber;
		_LastOperation = "Cancelling Last Operation";
	}

	//__declspec(property(get = GetFirstName, put = SetFirstName))string FirstName;
};
