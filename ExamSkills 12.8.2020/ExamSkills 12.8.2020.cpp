#include <iostream>

using namespace std;

// ���������� ����������
int sumOfNumbers(int firstNum, int secondNum); 

int main()
{
	// ���������� ��� ����� �������������
	int firstShownNumber, secondShownNumber; 

	cout << "Enter first number: "; 
	cin >> firstShownNumber;

	cout << "Enter second number: ";
	cin >> secondShownNumber;

	cout << sumOfNumbers( secondShownNumber, firstShownNumber ) << endl; 

	return 0;
}

// ����������� �������
int sumOfNumbers(int firstNum, int secondNum){
	int sum = 0;

	// ��������, ���� ���������� ����� ����� ����������, �� ������������
	if ((firstNum - 1) == secondNum)
		sum = firstNum + secondNum;
	else
		sum = firstNum + sumOfNumbers(firstNum - 1, secondNum);
	return sum;
}


//Group 11
//15 �����
//1. �������� �������, ������� ���������� ��������� ����� ����� � ��������
//���������.

