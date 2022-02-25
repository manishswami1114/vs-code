//3. Back to Front

//Given a vector of N positive integers. Your task is to print the vector elements in reverse order.

 
/*
Input:

1

5

1 2 3 4 5

Output:

5 4 3 2 1

 

Your task is to complete the function reverseIterator() which accepts it1 and it2, starting and ending iterators as two parameters and prints the vector elements in reverse order.

 

 
*/
//Initial Template for C++
/*

#include <bits/stdc++.h>

using namespace std;

 

 

void f(vector<int>::reverse_iterator it1, vector<int>::reverse_iterator it2){

   

   for (auto it = it1; it != it2; it++)

        cout << *it << " ";

    cout<<endl;

   

}

 

 

int main() {

               

                int testcase;

                cin >> testcase;

               

                while(testcase--){

                    int N;

                    cin >> N;

                   

                    // Declaring vector

                    vector<int> v;

                   

                    // Taking input to vector

                    for(int i = 0;i<N;i++){

                        int k;

                        cin >> k;

                        v.push_back(k);

                    }

                   

                    // Calling function

                    f(v.rbegin(), v.rend());

                   

                }

                return 0;

} 
*/
 
/*
Vector Sum

Given a vector, find the sum of the elements of this vector.

 

Input:

10 20 30

Output:

60

Explanation:

Sum is 60(10+20+30).

 */

// Find sum of the vector

/*

#include <bits/stdc++.h>

using namespace std;

int f(vector<int> arr, int n){

 

                 int sum = 0;

                 for(int &i : arr) sum+=i;

                 return sum;

   

}

 

 

 

int main()

{

    int t;

    cin>>t;

 

    while(t--){

 

    int n;

    cin>>n;

   

    vector<int> arr(n);

    for(int i=0; i<n;++i){

        cin>>arr[i];

    }

 

    cout<<SumMe(arr, n)<<endl;

 

    }

 

                return 0;

}
*/
/*
Sort and Reverse Vector

You are given a vector V of size n. You need to sort it and reverse it.

 

Example 1:

 

Input:

n = 5

V = 1 2 3 4 5

Output:

1 2 3 4 5

5 4 3 2 1

*/

#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;

 

vector<int> f1(vector<int>v)

{

   sort(v.begin(),v.end());

    return v;

}

vector<int> f2(vector<int>v)

{

     reverse(v.begin(), v.end());

    return v;

}

 

 

 

int main() {

                int t;

                cin>>t;

                while(t--)

                {

                    int n;

                    cin>>n;

                    vector<int>v;

                    for(int i=0;i<n;i++)

                    {

                        int x;

                        cin>>x;

                        v.push_back(x); //Input vector elements

                    }

                   

                    v=f1(v); //sort and store in v

                  

                   for(auto x:v)

                   cout<<x<<" "; //print elements of v

                   cout<<endl;

 

 

                   v=f2(v); //reverse v and store it in v

                  

for(auto x:v)

                   cout<<x<<" "; //print elements of v

                   cout<<endl;

                  

                }

                return 0;

}

 
/*
Vector Erase and Clear

Given a Vector V of size N containing integers. Complete below functions on given vector depending on type of erasable query

1. clearAll(): This function removes all elements from vector.

2. eraseAt(): This function removes element from specified position present in the vector.

3. eraseInRange(): This function removes element from vector in the given range start & end.

 

 */
/*
#include<bits/stdc++.h>

using namespace std;

 

void eraseAt(vector<int> &V, int pos)

{

      V.erase(V.begin()+pos);

    }

void eraseInRange(vector<int> &V, int start, int end)

{

    V.erase(V.begin()+start,V.begin()+end);

}

 

 

void clearAll(vector<int> &V)

{

    V.clear();

}

 

 

int main()

{

    int t;

    cin>>t;

   

    while(t--)

    {

        int n;

        cin>>n;

       

        vector<int> V(n);

        for(int i = 0; i < n; i++)

            cin>>V[i];

       

        int Erasetype;

        cin>>Erasetype;

       

        if(Erasetype == 1)

        {

            clearAll(V);

        }

        else if(Erasetype == 2)

        {

            int pos;

            cin>>pos;

            eraseAt(V, pos);

           

        }

        else{

            int start, end;

            cin>>start>>end;

            eraseInRange(V, start, end);

        }

         if(V.empty())

            cout << "Empty" <<endl;

          else

          {

              for(auto itr = V.begin(); itr != V.end(); itr++)

               cout << *itr << " ";

               cout << endl;

          }

    }

}
/*
3

5

1 2 3 4 5

1

5

10 20 30 40 50

2

2

5

10 20 30 40 50

3

1 3

 */
/*
7. Find the Frequency

Given a vector of N positive integers and an integer X. The task is to find the frequency of X in vector.

 

Input:

2//test c ase

5 //size

1 2 3 4 1 //contents

1// frequency of element to be checked

5

1 1 1 1 1

2

Output

2

0
*/
 
/*
#include <bits/stdc++.h>

using namespace std;

 

/*Function to find frequency of x

* x : element whose frequency is to be found

* v : input vector

*/

 
/*
int f(vector<int> v, int x){

    return count(v.begin(),v.end(),x);

   

}

 

int main() {

               

                int testcase;

               

                cin >> testcase;

               

                while(testcase--){

                    int N;

                    cin >> N;

                   

                    vector<int> v;

                       

                    // Taking vector element input

                    for(int i = 0;i<N;i++){

                        int k;

                        cin >> k;

                        v.push_back(k);

                    }

                   

                    // element whose frequency to be find

                    int x;

                    cin >> x;

                    cout << f(v, x) << endl;

                }

               

                return 0;

} 

 
*/
//Elements Less Than K

//A vector a of size n and an element k are given to you.You need to return the list(vector) of elements less than k. The order of elements should be the same as that in the original array.

//Note: Incase, there is no element less than k then return an empty vector.

 
/*
Input:

2

5

1 2 3 4 1

4

5

1 1 3 3 4

4

Output:

1 2 3 1

1 1 3 3

 

Explanation:

Here k is 4. Elements less than

4 in the list are {3 1 3}.

 
*/
/*
#include <bits/stdc++.h>

using namespace std;

 

 

 

 

vector<int> f(vector<int> a,int n,int k)

{

    vector<int> b;

    for(int i = 0; i < n; i++) if(a[i]<k) b.push_back(a[i]);

    return b;

}

 

 

int main()

{

    int testcase;

               

                cin >> testcase;

               

                while(testcase--){

                    int N;

                    cin >> N;

                   

                    // Declaring vector

                    vector<int> a(N);

                       

                    // Taking vector element input

                    for(int i = 0;i<N;i++){

                        cin>>a[i];

                    }

                   

                    int k;

                    cin>>k;

                   

                    vector<int>result = f(a,N,k);

                   

                    for(auto i:result)

                    {

                        cout<<i<<" ";

                    }

                    cout<<endl;

                }

                return 0;

}
*/
 
/*
Maximum Among Left

Given a vector V of n elements. We need to return the list of indices such that Vi is strictly greater than all the elements from 0 to i-1.

Note: The resultant list may be empty.

 

Input:

n = 5

V -> 4 3 5 2 6

Output:

2 4

Explanation:

The given elements are  {4 3 5 2 6}.

5 is greater than all elements to left

(4 and 3). 6 is greater than all elements  to the left. So answer list contains  indices of 5 and 6 {2 4}.

 
*/

/*
#include <bits/stdc++.h>

using namespace std;

 

vector<int> f(vector<int>v)

{

    vector<int> a;

    int max = v[0];

    for(int i = 1; i < v.size(); i++){

        if(max < v[i]){

            a.push_back(i);

            max = v[i];

        }

    }

    return a;

}

 

int main()

{

                int t;

                cin>>t;

                while(t--)

                {

                    int n;

                    cin>>n;

                  

                   vector<int>v;

                   int i;

                   for(i=0;i<n;i++)

                   {

                       int k;

                       cin>>k;

                       v.push_back(k);

                   }

                   vector<int> result=f(v);

                   for(auto i:result)

                   {

                       cout<<i<<" ";

                   }

                   cout<<endl;

                }

                return 0;

}
*/