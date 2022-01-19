// C++ program demonstrating ambiguity in Multipath
// Inheritance

#include <conio.h>
#include <iostream>
class ClassA {
public:
	int a;
};

class ClassB : public ClassA {
public:
	int b;
};
class ClassC : public ClassA {
public:
	int c;
};

class ClassD : public ClassB, public ClassC {
public:
	int d;
};

int  main()
{

	ClassD obj;

	// obj.a = 10; -> -> -> -> -> //Statement 1, Error
	// obj.a = 100;				 //Statement 2, Error

	obj.ClassB::a = 10; // Statement 3
	obj.ClassC::a = 100; // Statement 4

	obj.b = 20;
	obj.c = 30;
	obj.d = 40;

	cout << "\n A from ClassB : " << obj.ClassB::a;
	cout << "\n A from ClassC : " << obj.ClassC::a;

	cout << "\n B : " << obj.b;
	cout << "\n C : " << obj.c;
	cout << "\n D : " << obj.d;
}
