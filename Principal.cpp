#include "Reposteria.cpp"

using namespace std;


int main(){
	string temp;
	cout<<"Ingrese su nombre: ";
	cin>>temp;
	int galletas;
	Reposteria* p;
	p  = new Reposteria(temp);
	while(true){
		p->print();
		int opcion;
		cout<<"1- Hacer click"<<endl;
		cout<<"2- Comprar Granja"<<endl;
		cout<<"3- Comprar Banco"<<endl;
		cout<<"4- Comprar Templo"<<endl;
		cout<<"5- Comprar Oreo "<<endl;
		cout<<"6- Comprar Migajas"<<endl;
		cout<<"7- Mostar edificios y mejoras compradas"<<endl;
		cout<<"0- Salir"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{
				p->agregarGalletas();
				break;
			}
			case 2:{
				
				break;
			}
			case 3:{
				
				break;
			}
			case 4:{
				
				break;
			}
			case 5:{
				
				break;
			}
			case 6:{
				
				break;
			}
			case 7:{
				
				break;
			}
			case 0:{
				exit(0);
				break;
			}
		}
	}
	system("pause");
	return 0;
}
