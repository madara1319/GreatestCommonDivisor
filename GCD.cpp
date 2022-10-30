#include <iostream>
#include <math.h>

using std::cout;

int hello(){
	cout<<"Hello world!"<<"\n";
	return 0;
}

int GCD()
{

	int a={};
	int b={};
	cout << "Write first number"<<"\n";
	std::cin >> a;
	cout << "Write second number"<<"\n";
	std::cin >> b;
	while(b!=0){
		int tmp=b;
		b=a%b;
		a=tmp;
	}
	cout <<"Greatest common Divisor equals GCD(a,b) = "<<a<<"\n";
	return 0;
	
}
int menu()
{
	int test;
	cout << "This simple app is to find the greatest common divisor using Euclidean method"<<"\n";
	int opt1=1;
	int opt2=2;
	int decision={};
	cout <<"To start app write 1 to exit write 2"<<"\n";
	std::cin >> decision;
	return 0;

}

int main(){
	int test;
	int test2;
	cout << "This simple app is to find the greatest common divisor using Euclidean method"<<"\n";
	int opt1=1;
	int opt2=2;
	int decision={};
	cout <<"To start app write 1 to exit write 2"<<"\n";
	std::cin >> decision;
	while(true)
	{
		if (decision==opt1){
		test=GCD();
		break;	
		}
		if (decision==opt2){
			cout<<"You chose to exit the app";
		return false;
		}
		if (decision=!opt1 || decision!=opt2)	
		{
			cout<<"Incorrect option"<<"\n";
			test2=menu(); 	
			test=GCD();
		

		}

	}
}


