#include <iostream>
using namespace std;
int main(){
	int n1,n2,result,option;
	char repeat;
	cout<<"----Calculator----"<<endl;
	cout<<"1)ADD"<<endl;
	cout<<"2)SUSTRACT"<<endl;
	cout<<"3)MULTIPLY"<<endl;
	cout<<"4)DIVIDE"<<endl;
	cout<<"5)EXIT"<<endl;
	cout<<"Number 1: "; cin>>n1;
	cout<<"Number 2: "; cin>>n2;
	cout<<"Option: "; cin>>option;
	switch(option){
		case 1:
			result = n1 + n2;
			cout<<"The result is "<<result<<endl;
			cout<<"Do you want to continue? y/n "; cin>>repeat;
			cout<<"------------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}else cout<<"Bye!!";
			break;
		case 2:
			result = n1 - n2;
			cout<<"The result is "<<result<<endl;
			cout<<"Do you want to continue? y/n "; cin>>repeat;
			cout<<"-----------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}else cout<<"Bye!!";
			break;
		case 3:
			result = n1 * n2;
			cout<<"The result is "<<result<<endl;
			cout<<"Do you want to continue? y/n "; cin>>repeat;
			cout<<"----------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}else cout<<"Bye!!";
			break;
		case 4:
			if(n2 == 0){
				cout<<"Error: cannot divide by 0!!"<<endl;
			}else{
				result = n1 / n2;
				cout<<"The result is "<<result<<endl;
				cout<<"Do you want to continue? y/n "; cin>>repeat;
				cout<<"----------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}else cout<<"Bye!!";
			}
			break;
		case 5:
			cout<<"Bye!!"<<endl;
			break;
	}
	return 0;
}
