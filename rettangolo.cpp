#include <iostream>
#include <cmath>

using namespace std;

class Rettangolo{
	
	private:
		
		double base;
		double altezza;
		
	public:
		
	Rettangolo(){
		
		base = 1;
		altezza =1;
	}
	
	Rettangolo(double base,double altezza){
		
		this ->  base=base;
		this  -> altezza=altezza;
		
	}
	
	void setbase(double base){
		
        this -> base=base;
	}

    void setaltezza(double altezza){

        this -> altezza=altezza;
    }

    double getbase(){

        return base;
    }

    double getaltezza(){

        return altezza;
    }

    double calcoloperimetro(){
        double  p;
        p=(base * base) + (altezza * altezza);
        return p;
    }

    double calcoloarea(){
        double a;
        a=(base * altezza);
        return a;
    }

    double calcolodiagonale(){

        return sqrt(base * base + altezza * altezza);
    }

    void stampa()
	{
		cout<< "la base e': " << base << endl;
        cout<< "l'altezza e': " << altezza << endl;
        cout<< "il perimetro" << calcoloperimetro() << endl;	
        cout<< "l'area e': " << calcoloarea() << endl;
        cout<< "la diagonle e': " << calcolodiagonale() << endl;
	}
};
    int main(){

        Rettangolo r1;
        r1.setbase(12);
        r1.setaltezza(14);
        r1.stampa();
    }


