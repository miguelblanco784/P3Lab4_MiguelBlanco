#include <iostream>
#include <iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

#ifndef EDIFICIO_CPP
#define EDIFICIO_CPP
class Edificio{
	protected:
		int cont;
		string nombre;
	    int preciobase;
	    int produccionbase;
	    int aumento;
	public: 
		Edificio(string nombre, int preciobase, int produccionbase, int aumento) {
	        this->nombre = nombre;
	        this->preciobase = preciobase;
	        this->produccionbase = produccionbase;
	        this->aumento = aumento;
	    }
	
	    string getNombre() {
	        return nombre;
	    }
	
	    void setNombre(string nombre) {
	        this->nombre = nombre;
	    }
	    
	    int getCont(){
	    	return cont;
		}
	
	    int getPreciobase() {
	        return preciobase;
	    }
	
	    void setPreciobase(int preciobase) {
	        this->preciobase = preciobase;
	    }
	
	    int getProduccionbase() {
	        return produccionbase;
	    }
	
	    void setProduccionbase(int produccionbase) {
	        this->produccionbase = produccionbase;
	    }
	
	    int getAumento() {
	        return aumento;
	    }
	
	    void setAumento(int aumento) {
	        this->aumento = aumento;
	    }
	    
	    void agregarCont(){
			cont++;
		}
	    virtual void print()=0;
		virtual bool especial()=0;	
};
#endif
