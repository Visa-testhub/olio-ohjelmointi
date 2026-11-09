#include <iostream>
#include <cstdlib>

using namespace std;

void tarkista(int num);
void terveiset(int num);
void kertoma(int num);
void tarkista_jaollisuus(int jaettava, int jakaja);

class Roof {
private:
	string material;
public:
	void setMaterial(string value) {
		material = value;
	}
	string getMaterial() {
		return material;
	}
};

class House {
private:
	Roof roof;
public:
	void setRoof(string value) {
		roof.setMaterial(value);
	}
	void printData() {
		cout << "Katto materiaali on " << roof.getMaterial() << endl;
	};
};

int main()
{
	House house;
	house.setRoof("pelti");
	house.printData();

	/*
	// to use these, move the class definitions above main() or add function prototypes
	ClassA a;
	ClassB b;
	ClassB& bRef = b;

	a.print1(b); // Association
	a.print2(bRef); // Aggregation
	a.print3(); // Composition
	*/
	/*
	// to use these, move the class definitions above main() or add function prototypes
	Son objectSon("Kari");
	std::cout << objectSon.getName() << std::endl;
	std::cout << objectSon.getFatherName() << std::endl;
	std::cout << objectSon.getGrandName() << std::endl;
	*/
	/*
	// to use these, move the class definitions above main() or add function prototypes
	Calculator calc;

	calc.inputOperands();
	calc.calculateResult();
	calc.showResults();
	*/

	//std::srand(15);

	/*
	int num;

	std::cin >> num;
	kertoma(num);
	tarkista_jaollisuus(num, 10);
	*/
	
	/*
	std::cout << "?";
	int num;
	std::cin >> num;
	num = num * 2;
	std::cout << num;

	int a = 4;
	int b = 5;

	int something = 1 + (2 * (a * b));

	std::cout << something;

	tarkista(1);
	tarkista(-1);
	tarkista(0);

	terveiset(3);
	*/
	return 0;
}

class ClassB
{
public:
	ClassB();
	void printAssosiation(void);
	void printAggregation(void);
	void printComposition(void);
};

class ClassA
{
public:
	ClassA();
	void print1(ClassB B);
	void print2(ClassB& B);
	void print3();
};
//luokan ClassA toteutus(cpp)
ClassA::ClassA() {}

void ClassA::print1(ClassB B) {
	B.printAssosiation();
}
void ClassA::print2(ClassB& B) {
	B.printAggregation();
}
void ClassA::print3() {
	ClassB B;
	B.printComposition();
}
//luokan ClassB toteutus(cpp)
ClassB::ClassB() {}
void ClassB::printAssosiation() {
	cout << "This is assosiation" << endl;
}
void ClassB::printAggregation() {
	cout << "This is aggregation" << endl;
}
void ClassB::printComposition() {
	cout << "This is composition" << endl;
}


class Bicycle
{
public:
	Bicycle() {
		std::cout << "A new Bicycle created" << endl;
	};
	~Bicycle() {
		std::cout << "Bicycle deleted" << endl;
	};
};

class Storage
{
private:
	Bicycle a;
	Bicycle b;
	Bicycle c;
public:
	Storage() {
		std::cout << "A new bicycle storage created" << endl;
	};
	~Storage() {
		std::cout << "Bicycle storage deleted" << endl;
	};
};


class GrandFather
{
private:
	std::string Grandname;
public:
	GrandFather() {};
	void setGrandName(std::string newName) {
		Grandname = newName;
	};
	std::string getGrandName() {
		return Grandname;
	};
};

class Father : public GrandFather
{
private:
	std::string Fathername;
public:
	Father() {};
	void setFatherName(std::string newName) {
		Fathername = newName;
	};
	std::string getFatherName() {
		return Fathername;
	};
};

class Son : public Father
{
	std::string name;
public:
	Son(std::string value) {
		name = value;
		setFatherName("Father of " + name);
		setGrandName("Grandfather of " + name);
	};
	void setName(std::string newName) {
		name = newName;
	};
	std::string getName() {
		return name;
	};
};


class BasicALU
{
public:
	BasicALU()
	{
		cout << "BasicALU constructor!!" << endl;
	};
	double sum(double a, double b) {
		return a + b;
	};
	double mul(double a, double b) {
		return a * b;
	};
	double sub(double a, double b) {
		return a - b;
	};
	double div(double a, double b) {
		if (b == 0) {
			return 0;
		}
		else {
			return a / b;
		}
	};
};

class Calculator : public BasicALU
{
private:
	double op1;
	double op2;
	double result;
	char operation;
public:
	Calculator();
	void inputOperands(void);
	void calculateResult(void);
	void showResults(void);
};

Calculator::Calculator()
{
	cout << "Calculator constructor!!" << endl;
}

void Calculator::inputOperands()
{

	cout << "Give first operand" << endl;
	cin >> op1;

	cout << "Give operation +, -, * or / " << endl;
	cin >> operation;

	cout << "Give second operand" << endl;
	cin >> op2;
}

void Calculator::calculateResult()
{
	switch (operation) {
	case '+':
		result = sum(op1, op2);
		break;
	case '-':
		result = sub(op1, op2);
		break;
	case '*':
		result = mul(op1, op2);
		break;
	case '/':
		result = div(op1, op2);
		break;
	default:
		cout << "No such operation!" << endl;

	}
}

void Calculator::showResults()
{
	cout << op1 << operation << op2 << " = " << result << endl;
}

void tarkista(int num)
{
	if (num > 0)
	{
		std::cout << "positiivinen" << std::endl;
	}
	else if (num < 0)
	{
		std::cout << "negatiivinen" << std::endl;
	}
	else
	{
		std::cout << "nolla" << std::endl;
	}
}

void terveiset(int num)
{
	for (int i = 1; i <= num; i++)
	{
		std::cout << "Terve " << i << std::endl;
	}
}

void kertoma(int num) {
	//Laske num kertoma jos num on isompi kuin 0 ja pienempi kuin 10
	if (num < 1)
	{
		std::cout << "Ei voida laskea";
	}
	else if (num > 10)
	{
		std::cout << "Luku on liian iso";
	}
	else
	{
		long factorial = 1;
		for (long i = 1; i <= num; i++)
		{
			factorial *= i;
		}
		std::cout << factorial;
	}
}

void tarkista_jaollisuus(int jaettava, int jakaja)
{
	if (!(jaettava % jakaja))
	{
		std::cout << "jaollinen";
	}
	else
	{
		std::cout << "ei jaollinen";
	}
}

void sarja(int sluku)
{
	std::srand(sluku);
	for (int i = 0; i <= 5; i++)
	{
		int random = std::rand() % 20;
		std::cout << random << std::endl;
	}
}