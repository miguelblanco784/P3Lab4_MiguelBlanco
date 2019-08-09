#include "Reposteria.cpp"
#include "Edificio.cpp"
#include "Granja.cpp"
#include "Banco.cpp"
#include "Templo.cpp"
#include "Oreo.cpp"
#include "Migajas.cpp"

using namespace std;


int main(){
	int multiplicador;
	multiplicador = 1;
	Oreo* o ;
	o = NULL;
	Migajas* m ;
	m = NULL;
	int agregarcookies;
	agregarcookies = 1;
	Granja* g;
	g = new Granja();
	Banco* b;
	b = new Banco();
	Templo* t;
	t = new Templo();
	vector<Edificio*> edificios;
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
				cout<<multiplicador<<endl;
				p->agregarGalletas(agregarcookies*multiplicador);
				for(int i = 0; i < edificios.size();i++){
					
					if(edificios.at(i)->getNombre()=="Granja"){
					}
				}
				break;
			}
			case 2:{
				if(p->getGalletas() > g->getPreciobase()){
					p->setGalletas(p->getGalletas() - g->getPreciobase());
					edificios.push_back(g);
					agregarcookies+=g->getProduccionbase();
					g->setPreciobase(g->getPreciobase()+g->getAumento());
				}else{
					cout<<"NO TIENE DINERO (GALLETAS)!"<<endl;
				}
				break;
			}
			case 3:{
				if(p->getGalletas() > b->getPreciobase()){
					p->setGalletas(p->getGalletas() - b->getPreciobase());
					edificios.push_back(b);
					agregarcookies+=b->getProduccionbase();
					b->setPreciobase(b->getPreciobase()+b->getAumento());
				}else{
					cout<<"NO TIENE DINERO (GALLETAS)!"<<endl;
				}
				break;
			}
			case 4:{
				if(p->getGalletas() > t->getPreciobase()){
					p->setGalletas(p->getGalletas() - t->getPreciobase());
					edificios.push_back(t);
					agregarcookies+=t->getProduccionbase();
					t->setPreciobase(t->getPreciobase()+t->getAumento());
				}else{
					cout<<"NO TIENE DINERO (GALLETAS)!"<<endl;
				}
				break;
			}
			case 5:{
				if(p->getGalletas()>100){
					if(o == NULL){
						o = new Oreo();
						multiplicador=multiplicador*o->getMultiplicador(); 
						p->setGalletas(p->getGalletas()-100); 
					}else{
						cout<<"YA NO PUEDE COMPRAR LA MEJORA DE OREO"<<endl;
					}	
				}
				
				break;
			}
			case 6:{
				if(p->getGalletas()>1000){
					if(m == NULL){
						m = new Migajas();
						multiplicador=multiplicador*m->getMultiplicador();
						p->setGalletas(p->getGalletas()-1000); 
					}else{
						cout<<"YA NO PUEDE COMPRAR LA MEJORA DE OREO"<<endl;
					}	
				}
				
				break;
			}
			case 7:{
				for(int i = 0; i < edificios.size();i++){
					edificios.at(i)->print();
				}
				if(o != NULL){
					cout<<"Multiplicador de OREO Activado!"<<endl;
				}
				if(m != NULL){
					cout<<"Multiplicador de MIGAJA Activado!"<<endl;
				}
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
