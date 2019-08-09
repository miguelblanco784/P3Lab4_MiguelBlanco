#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

#ifndef REPOSTERIA_CPP
#define REPOSTERIA_CPP
class Reposteria{
	private:
		string nombre;
    	int galletas;
	public:
		Reposteria(string nombre) {
	        this->nombre = nombre;
	        this->galletas = 0;
	    }
	
	    Reposteria() {
	    }
	
	    string getNombre() {
	        return nombre;
	    }
	
	    void setNombre(string nombre) {
	        this->nombre = nombre;
	    }
	
	    int getGalletas() {
	        return galletas;
	    }
	    
	    void agregarGalletas(int x){
	    	galletas+=x;
		}
	
	    void setGalletas(int galletas) {
	        this->galletas = galletas;
	    }
	    
	    void print(){
	        cout<<"Reposteria de "<<nombre<<""<<" Tiene: "<<galletas<<" galletas"<<endl;
	    }
		
		
};
#endif
