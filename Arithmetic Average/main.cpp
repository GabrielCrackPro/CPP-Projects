#include <iostream>
using namespace std;
int main()
{
    int n_quantity;
    float numbers[n_quantity],result;
    char repeat;
    cout<<"How many numbers do you want to make the average? "; cin>>n_quantity;
    for(int i = 0; i < n_quantity; i++)
    {
      cout<<"Introduce el numero "<<i+1<<": "; cin>>numbers[i];
      result += numbers[i] / n_quantity;
    }
    cout<<"The average is "<<result;
    cout<<"Do you want to restart the program? y/n"; cin>>repeat;
    if(repeat == 'y')
    {
        main();
    }
    return 0;
}