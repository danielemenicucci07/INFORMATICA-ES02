#include<iostream>

using namespace std;

class Frazione{
	
	private:
		int numeratore; //attributo numeratore
		int denominatore; //attributo denominatore
	
	public:
		
		int aiuto;
		
		//Frazione () {}; //costruttore
		
		Frazione()
		{
			numeratore = 2;
			denominatore = 2;
		}
		
		Frazione(int x)
		{
			numeratore = x;
			denominatore = 2;
		}
		
		Frazione(int x,int y)
		{
			numeratore = x;
			denominatore = y;
		}
		
		/*void setnumeratore(int n)
		{
			numeratore = n;// avvaloro attributo numeratore
		}
		
		void setdenominatore(int d)
		{
			denominatore = d;// avvaloro attributo denominatore
		}
		
		int getnumeratore()
		{
			return numeratore;// restituisco numeratore		
		}
		
		int getdenominatore()
		{
			return denominatore;// restituisco denominatore
		}*/
		
	void stampa()
	{
		cout<< "la frazione e': " << numeratore << "/" << denominatore << endl;	
	}
	
	int mcd(int a, int b) 
	{
	  int resto;
	  while (b != 0) 
	  {
	    resto = b;
	    b = a % b;
	    a = resto;
	  }
	  return a;
	}
	
	void semplifica()
	{
		int min=0;
		
		min = mcd(numeratore,denominatore);
		numeratore/=min;
		denominatore/=min;
	}	
			
};


int main()
{
	int n,d;
	cout<< "**Lavoro di Daniele Menicucci**\n"<<endl;
	
	Frazione f1;
	Frazione f2(8);
	//cout<< "inserisci il numeratore:" <<endl;
	//cin>> n;
	//cout<< "\n" <<endl;
	//f1.setnumeratore(n);
	//cout<< "inserisci  il denominatore:" <<endl;
	//cin>> d;
	//cout<< "\n" <<endl;
	//f1.setdenominatore(d);
	f1.stampa();
	f2.stampa();
	f1.semplifica();
	cout<< "\nfrazione semplificata"<<endl;
	f1.stampa();
	f1.aiuto = 4;
	cout<<f1.aiuto<<endl;
	
	
	
}
