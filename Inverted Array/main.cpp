#include <iostream>
using namespace std;
int main()
{
    int elements;
    cout<<"How many elements do you need? "; cin>>elements;
    int arr[elements];
    for(int i = 0; i <= elements; i++)
    {
        cout<<"Enter element "<<i + 1<<": "; cin>>arr[i];
    }
    for(int j = elements; j >= 0; j--)
    {
        cout<<arr[j]<<endl;
    }
    return 0;
}