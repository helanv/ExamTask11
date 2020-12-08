#include <iostream>

using namespace std;

// глобальная переменная
int sumOfNumbers(int firstNum, int secondNum); 

int main()
{
	// переменные для ввода пользователем
	int firstShownNumber, secondShownNumber; 

	cout << "Enter first number: "; 
	cin >> firstShownNumber;

	cout << "Enter second number: ";
	cin >> secondShownNumber;

	cout << sumOfNumbers( secondShownNumber, firstShownNumber ) << endl; 

	return 0;
}

// рекурсивная функция
int sumOfNumbers(int firstNum, int secondNum){
	int sum = 0;

	// проверка, если предыдущие число равно следующему, то складываются
	if ((firstNum - 1) == secondNum)
		sum = firstNum + secondNum;
	else
		sum = firstNum + sumOfNumbers(firstNum - 1, secondNum);
	return sum;
}


//Group 11
//15 минут
//1. Написать функцию, которая рекурсивно вычисляет сумму чисел в заданном
//диапазоне.

