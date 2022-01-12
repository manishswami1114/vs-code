#include<iostream>
using namespace std;

class Car {        // The class
    public:          // Access specifier
    string name;  // Attribute
    int id;  // Attribute
    int m;
    string branch ;      // Attribute
   Car( string x, int y, string z) {  // Constructor with parameters
      name = x;
      id = y;
      branch = z;
    }
    Car(int m){
      cin>>m;
      }

  
};


int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("manish", 1114, "BL");
  Car carObj2("rupit", 1161, "BL");

  // Print values
  cout <<carObj1.m<<" "<<carObj1.name << " " << carObj1.id << " " << carObj1.branch << "\n";
  cout <<carObj2.m<<" "<< carObj2.name << " " << carObj2.id << " " << carObj2.branch << "\n";
  return 0;
}
