#include <iostream>
using namespace std;
//no es main es clase
class Persona{
	//declarar atributos de la clase
	protected: string nombres, apellidos, direccion;
	int telefono;
	
	//constructor tiene el mismo nombre de la clase
	protected:
		persona(){
		}
		
		persona(string nom, string ape, string dir, int tel){
			nombres=nom;
			apellidos=ape;
			direccion=dir;
			telefono=tel;
		}
	//declarar metodo para mostrar la informacion
	void mostrar();
	
};
