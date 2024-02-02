#include <iostream>

void pervoye() {
	int f;
	int s;
	int t;
	int c = 0;
	std::cout << "Enter your prices for your items: " << std::endl;
	std::cin >> f >> s >> t;
	c = f + s + t;
	std::cout << "Yor average summa is equal to: " << c << std::endl;
}

void vtoroye() {
	int a;
	int b;
	int c;

	std::cout << "Enter your number: " << std::endl;
	std::cin >> a;
	b = a + 3;
	c = b + a;

	std::cout << "Number c = " << c << std::endl;
}

void tretye() {
	int cups;
	std::cout << "Enter an amount of cupls: " << std::endl;
	std::cin >> cups;
	std::cout << "An average amount of pribors: " << cups * 3 << std::endl;
}

void chetvertoye() {
	int a;
	float b;
	double c;
	long int d;
	std::cout << "Enter your first number (int): " << std::endl;
	std::cin >> a;
	std::cout << "Enter your second number (float): " << std::endl;
	std::cin >> b;
	std::cout << "Enter your firth number (double): " << std::endl;
	std::cin >> c;
	std::cout << "Enter your fourth number (long int): " << std::endl;
	std::cin >> d;

	std::cout << "Your first number is " << a << std::endl;
	std::cout << "Your second number is " << b << std::endl;
	std::cout << "Your third number is " << c << std::endl;
	std::cout << "Your fourth  number is " << d << std::endl;
}

void pyatoye() {
	char a;
	char b;
	char c;
	char d;
	char t;
	std::cout << "Enter your first letter: \n";
	std::cin >> a;
	std::cout << "Enter your second letter: \n";
	std::cin >> b;
	std::cout << "Enter your third letter: \n";
	std::cin >> c;
	std::cout << "Enter your fourth letter: \n";
	std::cin >> d;
	std::cout << "Enter your firth letter: \n";
	std::cin >> t;

	std::cout << "Your word wich consists of 5 letters is: " << a << b << c << d << t << std::endl;
}

void shestoye() {
	int a;
	int b;
	int sum;
	int mult;
	int ded;

	std::cout << "Enter your first number: \n";
	std::cin >> a;
	std::cout << "Enter your second number: \n";
	std::cin >> b;

	sum = a + b;
	mult = a * b;
	ded = a - b;

	std::cout << "Your summa is " << sum << std::endl;
	std::cout << "Your multiplication is " << mult << std::endl;
	std::cout << "Your deduction is " << ded << std::endl;
}

int main() {
	/*Task1*/
	pervoye();
	/*Task2*/
	vtoroye();
	/*Task3*/
	tretye();
	/*Task4*/
	chetvertoye();
	/*Task5*/
	pyatoye();
	/*Task6*/
	shestoye();
	return 0;
}
