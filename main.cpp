#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"ingrese Nit";
	cin>>nit;
		
	cout<<"ingrese Nombres";
	cin>>nombres;
		
	cout<<"ingrese Apellidos";
	cin>>apellidos;
		
	cout<<"ingrese Direccion";
	cin>>direccion;
		
	cout<<"ingrese Telefono";
	cin>>telefono;
	
	//llamar al objeto (instancia de un objeto
	Cliente obj=Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	
	
	//cout<<"datos del cliente: "<<obj.getNit()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono()<<endl;
	
	/*cout<<"ingrese Nit";
	cin>>nit;
	obj.setNit(nit);
cout<<obj.getNit();*/
	
	
	
	/*	Cliente obj=Cliente();
		obj.setNit(nit);
		obj.setNombres(nombres);
		obj.setApellidos(apellidos);
		obj.setDireccion(direccion);
		obj.setTelefono(telefono);
		obj.mostrar(); */
	
}
