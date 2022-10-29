#include <iostream>
#include <math.h>

using std::cout;

void NWD(){
	cout<<"Hello world!"<<"\n";
}

int main(){
	NWD;
	cout << "Program to znajdowania algorytmu Najwiekszego Wspolnego Dzielnika metoda Euklidesa"<<"\n";
	int opt1=1;
	int opt2=2;
	int decision={};
	cout <<"Jesli chcesz znalezc najwiekszy wspolny dzielnik 2 liczb wpisz 1 lub jesli chcesz zakonczyc dzialanie programu wpisz 2"<<"\n";
	std::cin >> decision;
	while(true)
	{
		if (decision==opt1){
			int a={};
			int b={};
			cout << "Wprowadz pierwsza liczbe"<<"\n";
			std::cin >> a;
			cout << "Wprowadz druga liczbe"<<"\n";
			std::cin >> b;
			while(b!=0){
			//	cout <<"Wartosc a = "<<a<<"\n";
			//	cout <<"Wartosc b = "<<b<<"\n";	
				int tmp=b;
				b=a%b;
				a=tmp;
				
			//	cout <<"Wartosc a = "<<a<<"\n";

				
			//	return a;
			}
			cout <<"Najwiekszy wspolny dzielnik wynosi GC(a,b) = "<<a<<"\n";
		break;	
		}
		if (decision==opt2){
			cout<<"Wybrales zakonczenie programu";
		return false;
		}
		if (decision=!opt1 || decision!=opt2)	
		{
			cout<<"Niepoprawna opcja"<<"\n";
			continue;
		}
	}
}


