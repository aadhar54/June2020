#include<iostream>
using namespace std;


int main(){

char arr[] =  {  'A','B','C' };
char arr2[] = "ABC" ;
char arr3[] = "Hello CB";
char arr4[100];
char arr5[20] = "Welcome";

int iarr[] = {1,2,3,4} ; 
char  carr[] = {'a','b','c','\0'};

cout<<iarr[0]<<endl; //This prints 0th index
cout<<carr[0]<<endl; //This prints 0th index

cout<<iarr<<endl; // Adress is printed

cout<<carr<<endl; //abc is printed


//cout<<arr2<<endl;
//cout<<sizeof(arr)<<endl;
//cout<<sizeof(arr2)<<endl;
//cout<<sizeof(arr3)<<endl;
//cout<<sizeof(arr4)<<endl;
//cout<<sizeof(arr5)<<endl;

return 0;
}