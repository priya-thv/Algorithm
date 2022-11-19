#include <iostream>
using namespace std;
 
//complete the functions
class Stack{
	int A[100000];
	int end;
 
	public:
	//constructor is called whenever an object of the class is declared
	Stack(){
		cout<<"constructor is Called\n";
		end=0;
	}
 
	//push the value at the back
	void push(int val){
        A[end]=val;
        end++;
		cout<<"pushing the val: "<<val<<" at " << end << "\n";
	}
 
	void top(){
		cout<< A[end-1] << " is at the top\n" ;
		
	}
 
	void pop(){
        end--;
		cout<<"removing the last element\n";
	}
 
	int size(){
        return end;

	}
 
	bool isEmpty(){
		if (end == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
	}
};
 
int main() {
	Stack s; 
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    s.pop();
    cout << "size --> " << s.size() << endl;
    s.top();
    cout << "Is empty --> " << s.isEmpty();
}
