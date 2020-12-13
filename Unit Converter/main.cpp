#include<iostream>
using namespace std;
int main()
{
    int option;
    double number,result;
    cout<<"This is Unit Converter"<<endl;
    cout<<"1) Miles To Km"<<endl;
    cout<<"2) League To Km"<<endl;
    cout<<"3) Tons to Ounce"<<endl;
    cout<<"4) Exit"<<endl;
    cout<<"-------"<<endl;
    cout<<"Select an option: "; cin>>option;
    switch(option)
    {
        case 1:
            cout<<"Enter value in miles: "; cin>>number;
            result = number * 1.61;
            cout<<number<<" miles in km is "<<result;
        break;
        case 2:
            cout<<"Enter value in leagues: "; cin>>number;
            result = number * 4.83;
            cout<<number<<" leagues in km is "<<result;
        break;
        case 3:
            cout<<"Enter value in tons: "; cin>>number;
            result = number * 35273.96;
            cout<<number<<" tons in ounces is "<<result;
        break;
        case 4:
            cout<<"Bye!";
            break;
    }
    return 0;
}