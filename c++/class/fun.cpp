 /*#include <iostream>
 using namespace std;

 void f(double &p)
 {
   p += 2;
 }

 int main()
 {
   double x = 1;
   double y = 1;
 
   f(x);
   f(y);

   cout << "x is " << x;
   cout << " y is " << y << endl;

       return 0;
 }
 */
/*
#include <iostream>
 using namespace std;

 void f(int &p1, int p2)
 {
   p1++;
   p2++;
 }

 int main()
 {
   int x1 = 1;
   int x2 = 1;
   f(x1, x2);
   cout << "x1 is " << x1 << " x2 is " << x2;

   return 0;
 }
 */
/*
 #include <iostream>
 using namespace std;

 int j = 40;

 void p()
 {
   int i = 5;
   static int j = 5;
   i++;
   j++;

   cout << "i is " << i << " j is " << j << endl;
 }

 int main()
 {
   p();
   p();
   p();

   return 0;
 }
*/
/*

#include <iostream>
 using namespace std;
 
 int j = 1;

 int main()
 {
   int i = 2;
   int j = 2;
   cout << "i is " << i << " j is " << j << endl;

   return 0;
 }
 */

/*
 #include <iostream>
 using namespace std;
 
 int j = 1;

 int main()
 {
   int i = 2;
   cout << "i is " << i << " j is " << j << endl;

   return 0;
 }
*/

/*
#include<iostream>
using namespace std;
inline void print(int i)
{
  cout << i << endl;
}

int main() 
{
  print(1);
  return 0;
}
*/  
/*
#include <iostream>
using namespace std;

    int m(int num)
  {
    return num;
  }

  void m(int num)
  {
    cout << num;
  }
  
  
  int main()
  {
    cout << m(2);
    return 0;
  }
  */

 /*
  #include <iostream>
  using namespace std;
  
  int xfunction(int n, long t)
  {
    cout << "int";
    return n;
  }
  
  long xfunction(long n)
  {
    cout << "long"<<" ";
    return n;
  }
  
  int main()
  {
    cout << xfunction(5);
    return 0;
  }
  */
 /*
 #include <iostream>
 using namespace std;

 void maxValue(int value1, int value2, int max)
 {
   if (value1 > value2)
     max = value1;
   else
     max = value2;
 }

 int main()
 {
   int max = 0;
   maxValue(1, 2, max);
   cout << "max is " << maxValue << endl;

   return 0;
 }
*/
/*
 #include <iostream>
 using namespace std;

 int f(int number)
 {
   return number;
 }

 int main()
 {
   cout << f(5) << endl;
   return 0;
 }
*/


/*
#include <iostream>
 using namespace std;

 float getGrade(double score)
 {
   if (score >= 90.0)
     return 'A';
   else if (score >= 80.0)
     return 'B';
   else if (score >= 70.0)
     return'C';
   else if (score >= 60.0)
     return 'D';
   else
     return 'F';
 }

 int main()
 {
   cout << "Enter a score: ";
   double score;
   cin >> score;

   cout << "The grade is ";
   getGrade(score);

   return 0;
 }
 */

/*
 #include <iostream>
 using namespace std;

 // Print grade for the score
 float printGrade(double score)
 {
   if (score >= 90.0)
     cout << 'A';
   else if (score >= 80.0)
     cout << 'B';
   else if (score >= 70.0)
     cout << 'C';
   else if (score >= 60.0)
     cout << 'D';
   else
     cout << 'F';
 }

 int main()
 {
   cout << "Enter a score: ";
   double score;
   cin >> score;

   cout << "The grade is ";
   printGrade(score);

   return 0;
 }*/

 







