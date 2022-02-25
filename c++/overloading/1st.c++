/*
#include <iostream>

using namespace std;

 

class CVector {

  public:

    int x,y;

    CVector () {};

    CVector (int a,int b) : x(a), y(b) {}

    CVector operator + (CVector&);

};

 

CVector CVector::operator+ (CVector& param) {

  CVector temp;

  temp.x = x + param.x;

  temp.y = y + param.y;

  return temp;

}

 

int main () {

  CVector foo (3,1);

  CVector bar (1,2);

  CVector result;

  result = foo + bar;

  cout << result.x << ',' << result.y << '\n';

  return 0;

}
*/
//<------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------->
/*
#include <iostream>

using namespace std;

 

class Check

{

    private:

       int i;

    public:

       Check(): i(0) {  }

       void operator ++()

          { ++i; }

       void Display()

          { cout << "i=" << i << endl; }

};

 

int main()

{

    Check obj;
    obj.Display();
    ++obj;
    obj.Display();
    return 0;

}
*/
//<------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------->
/*
#include <iostream>

using namespace std;

 

class Check

{

  private:

    int i;

  public:

    Check(): i(0) {  }

 

    // Return type is Check

    Check operator ++()

    {

       Check temp;

       ++i;

       temp.i = i;

 

       return temp;

    }

 

    void Display()

    { cout << "i = " << i << endl; }

};

 

int main()

{

    Check obj, obj1;

    obj.Display();

    obj1.Display();

 

    obj1 = ++obj;

 

    obj.Display();

    obj1.Display();

 

    return 0;

}*/
//<------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------->
/*
#include <iostream>

using namespace std;

 

class Check

{

  private:

    int i;

  public:

    Check(): i(0) {  }

    Check operator ++ ()

    {

        Check temp;

        temp.i = ++i;

        return temp;

    }

 

    // Notice int inside barcket which indicates postfix increment.

    Check operator ++ (int)

    {

        Check temp;

        temp.i = i++;

        return temp;

    }

 

    void Display()

    { cout << "i = "<< i <<endl; }

};

 

int main()

{

    Check obj, obj1;   

    obj.Display();

    obj1.Display();

 

    // Operator function is called, only then value of obj is assigned to obj1

    obj1 = ++obj;

    obj.Display();

    obj1.Display();

 

    // Assigns value of obj to obj1, only then operator function is called.

    obj1 = obj++;

    obj.Display();

    obj1.Display();

 

    return 0;

}
*/
//<------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------->
/*
#include <iostream>

using namespace std;

 

class Check

{

  private:

    int i;

  public:

    Check(): i(3) {  }

    Check operator -- ()

    {

        Check temp;

        temp.i = --i;

        return temp;

    }

 

    // Notice int inside barcket which indicates postfix decrement.

    Check operator -- (int)

    {

        Check temp;

        temp.i = i--;

        return temp;

    }

 

    void Display()

    { cout << "i = "<< i <<endl; }

};

 

int main()

{

    Check obj, obj1;   

    obj.Display();

    obj1.Display();

 

    // Operator function is called, only then value of obj is assigned to obj1

    obj1 = --obj;

    obj.Display();

    obj1.Display();

 

    // Assigns value of obj to obj1, only then operator function is called.

    obj1 = obj--;

    obj.Display();

    obj1.Display();

 

    return 0;

}
*/
//<------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------->
//Compare distance using operator overloading
/*
#include<iostream>

 

using namespace std;

 

class dist

{

private:

    int feet;

    float inches;

   

public:

    dist():feet(0),inches(0){}

   

    dist(int f, float in): feet(f),inches(in){}

   

    void getdist()

    {

        cout<<"feet=";cin>>feet;

        cout<<"inches=";cin>>inches;

    }

   

    friend bool operator <(dist d1, dist d2);

   

};

 

bool operator <(dist d1,dist d2)

{

 

  float dd1=d1.feet+d1.inches/12;

  float dd2=d2.feet+d2.inches/12;

  return dd1<dd2?true:false;

}

 

int main()

{

  dist d1(7,6.25);

  dist d2;

  d2.getdist();

  if(d1<d2)

    cout<<"d1 is smaller than d2"<<endl;

  else

    cout<<"d2 is smaller than d1"<<endl;

    return 0;

}
*/
//<------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------->
/*
#include<iostream>

using namespace std;

 

class Distance

{

                private:

                                int feet;

                                int inches;

                public:

                                void set_distance()

                                {

                                                cout<<"Enter feet: ";

                                                cin>>feet;

                                                cout<<"Enter inches: ";

                                                cin>>inches;

                                }

                                void get_distance()

                                {

                                                cout<<"Distance is feet= "<<feet<<", inches= "<<inches<<endl;

                                }

                                void add(Distance d1, Distance d2)

                                {

                                                feet = d1.feet + d2.feet;

                                                inches = d1.inches + d2.inches;

                                                feet = feet + (inches / 12);

                                                inches = inches % 12;

                                }

                                void add(Distance *d1, Distance *d2)

                                {

                                                feet = d1->feet + d2->feet;

                                                inches = d1->inches + d2->inches;

                                                feet = feet + (inches / 12);

                                                inches = inches % 12;

                                }

};

int main()

{

                Distance d1, d2, d3;

                d1.set_distance();

                d2.set_distance();

                d3.add(d1, d2);

                d3.get_distance();

                d3.add(d1, d2);

                d3.get_distance();

                return 0;

}
*/
//<------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------->
/*
#include <iostream>

using namespace std;

 

class Distance

{

   private:

      int feet;

      float inches;

   public:

      Distance() : feet(0), inches(0.0){  }

      Distance(int ft, float in) : feet(ft), inches(in)  {  }

      void getdist(){

         cout << "\nEnter feet: ";  cin >> feet;

         cout << "Enter inches: ";  cin >> inches;

      }

      void showdist() const { cout << feet << "\'-" << inches << '\"'; }

 

      Distance operator + ( Distance ) const;

};

 

Distance Distance::operator + (Distance d2) const{

   int f = feet + d2.feet;

   float i = inches + d2.inches;

   if(i >= 12.0){

      i -= 12.0;

      f++;

   }

   return Distance(f,i);

}

int main()  {

   Distance dist1, dist3, dist4;

   dist1.getdist();

 

   Distance dist2(11, 6.25);

 

   dist3 = dist1 + dist2;

 

   dist4 = dist1 + dist2 + dist3;

 

   cout << "dist1 = ";  dist1.showdist(); cout << endl;

   cout << "dist2 = ";  dist2.showdist(); cout << endl;

   cout << "dist3 = ";  dist3.showdist(); cout << endl;

   cout << "dist4 = ";  dist4.showdist(); cout << endl;

   return 0;

}
*/
//<------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------->

#include <iostream>

using namespace std;

 

class Distance

{

   int feet;

   float inches;

   public:

 

    Distance()          //constructor1

    {feet=0;inches=0;}

    Distance(int ft,float inch)       //constructor2

    {feet=ft;inches=inch;}

 

    void getdata()

    {   cout<<"Enter Feet and inches respectively: ";

    cin>>feet>>inches;

    }

 

    void display()

    { cout<<"Feet : "<<feet<<endl<<"Inches :"<<inches;}

 

    //Operator declaration in Class

    friend Distance operator +(Distance &ob1, Distance &ob2);

    friend Distance operator -(Distance &ob1, Distance &ob2);

    friend int operator ==(Distance &ob1, Distance &ob2);

    friend int operator < (Distance &ob1, Distance &ob2);

    friend int operator > (Distance &ob1, Distance &ob2);

  

};

 

Distance operator +(Distance &ob1, Distance &ob2)

{

    Distance temp;

    temp.feet   = ob1.feet   + ob2.feet;

    temp.inches = ob1.inches + ob2.inches;

    if(temp.inches > 12)

    {

       temp.inches -= 12;

       temp.feet++;

    }

    return(temp);

}

 

Distance operator -(Distance &ob1, Distance &ob2)

{

    Distance temp;

    float ob1inch,ob2inch;

    ob1inch = (ob1.feet * 12) + ob1.inches;

    ob2inch = (ob2.feet * 12) + ob2.inches;

    temp.inches = ob1inch - ob2inch;

    temp.feet   = temp.inches/12;

    temp.inches = temp.inches - (temp.feet * 12);

    return(temp);

}

int operator ==(Distance &ob1, Distance &ob2)

{

   if(ob1.feet == ob2.feet && ob1.inches == ob2.inches)

      return(1);

   else

      return(0);

}

 

int operator < (Distance &ob1, Distance &ob2)

{

   if(ob1.feet < ob2.feet && ob1.inches < ob2.inches)

      return(1);

   else

      return(0);

}

 

int operator > (Distance &ob1, Distance &ob2)

{

   if(ob1.feet > ob2.feet && ob1.inches > ob2.inches)

      return(1);

   else

      return(0);

}

 

int main(){

    Distance ob1,ob2,ob3;  //Invoked constructor1

    ob1.getdata();

    ob2.getdata();

   

    ob3 = ob1 + ob2;

    ob3.display();

    cout <<endl;

   

    ob3 = ob1 - ob2;

    ob3.display();

    cout <<endl;

   

    if(ob1 == ob2){ cout<<"Both Objects are equal or same value";}

    else

    { cout<<"They are Unequal";}

    cout <<endl;

   

    if(ob1 < ob2)

    { cout<<"Object1 is Less than Object2";}

    else

    { cout<<"Object2 is Less than Object1";}

    cout <<endl;

   

    if(ob1 > ob2)

    { cout<<"Object1 is Greater than Object2";}

    else

    { cout<<"Object2 is Greater than Object1";}

    cout <<endl;

   

    return 0;

}
