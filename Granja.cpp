#include "Edificio.cpp"


#ifndef GRANJA_CPP
#define GRANJA_CPP
using namespace std;
class Granja: public Edificio{
	private:
		int cont;
	public:
		Granja():Edificio("Granja",50,5,15){
			cont = 0;
		}
		
		void agregarCont(){
			cont++;
		}
		void print(){
			cout<<"Edificio "<<getNombre()<<endl;
		}
		
		bool especial(){
			if(cont%10 == 0){
				return true;
			}
			return false;
		}
};
#endif
