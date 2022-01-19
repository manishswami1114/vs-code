// C++ Implementation to show that a derived class
// doesn’t inherit access to private data members.
// However, it does inherit a full parent object
class A
{
public:
	int x;
protected:
	int y;
private:
	int z;
};

class B : public A
{
	// x is public
	// y is protected
	// z is not accessible from B
};

class C : protected A
{
	// x is protected
	// y is protected
	// z is not accessible from C
};

class D : private A // 'private' is default for classes
{
	// x is private
	// y is private
	// z is not accessible from D
};

/*     */

// C++ program to explain
// Single inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle()
	{
	cout << "This is a Vehicle" << endl;
	}
};

// sub class derived from a single base classes
class Car: public Vehicle{

};

// main function
int main()
{
	// creating object of sub class will
	// invoke the constructor of base classes
	Car obj;
	return 0;
}
 

/*    */

// C++ program to explain
// multiple inheritance
#include <iostream>
using namespace std;

// first base class
class Vehicle {
public:
	Vehicle()
	{
	cout << "This is a Vehicle" << endl;
	}
};

// second base class
class FourWheeler {
public:
	FourWheeler()
	{
	cout << "This is a 4 wheeler Vehicle" << endl;
	}
};

// sub class derived from two base classes
class Car: public Vehicle, public FourWheeler {

};

// main function
int main()
{
	// creating object of sub class will
	// invoke the constructor of base classes
	Car obj;
	return 0;
}
 

/*  */


// C++ program to implement
// Multilevel Inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
	Vehicle()
	{
	cout << "This is a Vehicle" << endl;
	}
};

// first sub_class derived from class vehicle
class fourWheeler: public Vehicle
{ public:
	fourWheeler()
	{
	cout<<"Objects with 4 wheels are vehicles"<<endl;
	}
};
// sub class derived from the derived base class fourWheeler
class Car: public fourWheeler{
public:
	Car()
	{
	cout<<"Car has 4 Wheels"<<endl;
	}
};

// main function
int main()
{
	//creating object of sub class will
	//invoke the constructor of base classes
	Car obj;
	return 0;
}


/*  */

 
// C++ program to implement
// Hierarchical Inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
	Vehicle()
	{
	cout << "This is a Vehicle" << endl;
	}
};


// first sub class
class Car: public Vehicle
{

};

// second sub class
class Bus: public Vehicle
{
	
};

// main function
int main()
{
	// creating object of sub class will
	// invoke the constructor of base class
	Car obj1;
	Bus obj2;
	return 0;
}
    
/*    */
// C++ program for Hybrid Inheritance

#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
	Vehicle()
	{
	cout << "This is a Vehicle" << endl;
	}
};

//base class
class Fare
{
	public:
	Fare()
	{
		cout<<"Fare of Vehicle\n";
	}
};

// first sub class
class Car: public Vehicle
{

};

// second sub class
class Bus: public Vehicle, public Fare
{
	
};

// main function
int main()
{
	// creating object of sub class will
	// invoke the constructor of base class
	Bus obj2;
	return 0;
}
 
 /*   */