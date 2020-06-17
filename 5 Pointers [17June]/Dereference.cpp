#include<iostream>
using namespace std;



int main(){

	int x = 10;

	int *y;

	y=&x;

	cout<< x <<endl;

	cout<< &x <<endl;
	
	x = x + 10;
	cout<< &x;
	cout<< y <<endl;

cout<<"Here"<<endl;
	cout<< *y <<endl;
	x =   (*(&x)) + 1;
	cout<<x<<endl;
	cout<<&x<<endl;
	cout<<&x + 1<<endl; 

	int a=5;
	int b = 10;
	
	int c = a +b ;
	cout<< &(c) <<endl;	

	return 0;
}