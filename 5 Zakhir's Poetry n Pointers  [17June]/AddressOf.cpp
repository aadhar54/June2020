#include <iostream>
using namespace std;


int main() {
    int x = 10;
    cout<< &x <<endl;  

    float y = 10.5;
    cout<< &y <<endl;  

    //It doesnt work for character variables
    char ch = 'A';
    //Explicit Typecasing from char* to void*
    cout<<(void *)&ch <<endl;

return 0;
}