/*#include<iostream>

using namespace std;

void print(int n){

    if(n == 1){

        cout << n << " ";

        return;

    }

    print(n - 1);

    cout << n << " ";



}



int main(){

    int n;

    cin >> n;

    print(n);

}



*/

// 5 4 3 2 1

#include <iostream>

using namespace std;

void print(int n)
{

    cout << n << " ";

    if (n == 1)
    {

        return;
    }

    print(n - 1);
}

int main()
{

    int n;

    cin >> n;

    print(n);
}

// 5 4 3 2 1 1 2 3 4 5

/*
#include<iostream>

using namespace std;

void f(int n){







    if (n >= 1) {

         cout <<n<<" ";

        f(n - 1);

        cout <<n<<" ";

        }



}



int main(){

    int n;

    cin >> n;

    f(n);

}



//1 2 3 4 5 5 4 3 2 1



#include<iostream>

using namespace std;

void f(int n){

    cout <<n<<" ";

    if (n < 5) {

        f(n + 1);

    }

    cout <<n<<" ";

}







int main(){

    int n;

    cin >> n;

    f(n);

}

i/p

1

o/p

5





Fibonacci series

#include <bits/stdc++.h>

using namespace std;



// Function for fibonacci



int fib(int n)

{

    // Stop condition

    if (n == 0)

        return 0;



    // Stop condition

    if (n == 1 || n == 2)

        return 1;



    // Recursion function

    else

        return (fib(n - 1) + fib(n - 2));

}



// Driver Code

int main()

{

    // Initialize variable n.

    int n = 5;

    cout<<"Fibonacci series of 5 numbers is: ";



    // for loop to print the fibonacci series.

    for (int i = 0; i < n; i++)

    {

        cout<<fib(i)<<" ";

    }

    return 0;

}



i/p

5

o/p

0 1 1 2 3 5



#include <bits/stdc++.h>

using namespace std;





int f(int n)

{

    if (n == 4)

       return n;

    else return 2*f(n+1);

}





int main()

{

  cout <<f(2);

   return 0;

}

o/p

16



#include <bits/stdc++.h>

using namespace std;



int fun(int x, int y)

{

  if (x == 0)

    return y;

  return fun(x - 1,  x + y);

}



int main()

{

  cout <<fun(4, 3)<<endl;

   return 0;

}

o/p

13



#include <bits/stdc++.h>

using namespace std;



void fun(int n)

{

  if (n == 0)

    return;



  cout <<n%2;

  fun(n/2);

}



int main()

{

   fun(25);

   return 0;

}



o/p

10011



#include <bits/stdc++.h>

using namespace std;



void f(int n)

{

    if (n > 4000)

        return;

    cout <<n<<" ";

    f(2*n);

    cout <<n<<" ";

}



int main()

{

    f(1000);

    return 0;

}

o/p

1000 2000 4000 4000 2000 1000



Number of Digits

Given the code to find out and return the number of digits present in a number recursively.

#include<iostream>

using namespace std;



int count(int n){

    if(n == 0){

        return 0;

    }

    return count(n / 10) + 1;

}

int main(){

    int n;

    cin >> n;

    cout << count(n) << endl;

}



Sum of digits (recursive)


Write a recursive function that returns the sum of the digits of a given integer.

int sumOfDigits(int n)

{

    if (n <= 9)

    {

        return n;

    }

    return n % 10 + sumOfDigits(n / 10);

}



#include <iostream>

using namespace std;



int main() {

   int n;

   cin >> n;

   cout << sumOfDigits(n) << endl;


}
*/