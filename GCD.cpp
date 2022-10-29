#include <iostream>
#include <math.h>

using std::cout;

int main(){
//	cout << "Hello world";
	int opt1=1;
	int opt2=2;
	int decision={};
	cout <<"Jesli chcesz znalezc najwiekszy wspolny dzielnik 2 liczb wpisz 1 lub jesli chcesz zakonczyc dzialanie programu wpisz 2"<<"\n";
	std::cin >> decision;
	while(true)
	{
		if (decision==opt1){
			int a=250;
			int b=45;
			while(b!=0){
				cout <<"Wartosc a = "<<a<<"\n";
				cout <<"Wartosc b = "<<b<<"\n";	
				int tmp=b;
				b=a%b;
				a=tmp;
				
				cout <<"Wartosc a = "<<a<<"\n";
				cout <<"Wartosc b = "<<b<<"\n";
				return a;
			}
		if (decision==opt2){
			cout<<"Wybrales zakonczenie programu";
		
		}
		else
		{
			cout<<"Niepoprawna opcja"<<"\n";
		}
	break;
	}
	}
}


