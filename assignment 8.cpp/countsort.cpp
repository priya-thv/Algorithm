/*
    Count Sort Algorithm
    **Time Complexity: O(n)
    **Space Complexity: O(max_number-min_number) //no additional space is required
*/

#include <bits/stdc++.h>
using namespace std;

// a function that will print the vector passed to it, elements seprated by space
void printVector(vector<int> A)
{
    // traverse all the element and print them
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
}

// the vector A will be sorted inplace and that's why passed with refrence
void sort(vector<int> &A)
{   vector<int>b(9,0); 
    vector<int>s;
    for (int i = 0; i < A.size(); i++)
    {
        b[A[i]]++;
    }
    for(int i=0;i<9;i++){
        cout<<b[i]<<endl;
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<b[i];j++){
            s.push_back(i);
        }
    }
    A=s;
}

int main()
{
    vector<int> A = {6, 1, 2, 3, 4, 6, 1, 5, 3, 4, 8};
    // your code goes here
    sort(A);
    cout << "sorted vector: ";
    printVector(A);

    return 0;
}
