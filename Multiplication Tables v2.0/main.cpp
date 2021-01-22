#include <iostream>
using namespace std;
int main()
{
    int tables;
    cout<<"How many tables do tou want to print? "; cin>>tables;
    for(int i = 1; i<= tables; i++){
        for(int j = 1; j <=10; j++)
        {
            cout<<i<<" x "<<j<<" = "<<i*j<<endl;
        }
        cout<<"-------------------------------------"<<endl;
    }
    return 0;
}