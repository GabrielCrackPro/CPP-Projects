#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double number,result;
    float exp = 1.0 / 3.0;
    cout<<"This program makes the cube root of a given number"<<endl;
    cout<<"Type a number: "; cin>>number;
    result = pow(number,exp);
    cout<<"The cube root of "<<number<< " is "<<result;
    return 0;
}