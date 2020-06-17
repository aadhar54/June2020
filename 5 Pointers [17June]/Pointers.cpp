#include <iostream>
using namespace std;


int main() {
    int x = 10;
    int y1 = 20;
    cout<< &x <<endl;  

    float y = 10.5;
    cout<< &y <<endl;  

    //It doesnt work for character variables
    char ch = 'A';
    //Explicit Typecasing from char* to void*
    cout<<(void *)&ch <<endl;

    //Pointers

    int *xptr; 
    //Store the address of a variable
    xptr = &x;

    cout<< &x<<endl;
    cout<< xptr <<endl;

    //Re-assign another address to the variable
    xptr = &y1;
    cout<< &y1 <<endl;
    cout<<xptr<<endl;



return 0;
}
