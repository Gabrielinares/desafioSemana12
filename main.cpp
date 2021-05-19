#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	struct alumno{
		int carnet;
		string nombre_completo;
		int edad;
		string carrera;
	};
	
	int carnet;
	alumno vectorAlumnosGrupo1[10];
	alumno vectorAlumnosGrupo2[10];
	alumno vectorAlumnosGrupo3[10];
	
	menu:
		int opc, opcBuscar;
		string opcEliminar;
		
		cout<<endl;
		cout<<"1. Registrar alumnos"<<endl;
		cout<<"2. Buscar alumno por carnet"<<endl;
		cout<<"3. Eliminar alumno"<<endl;
		cout<<"4. Salir"<<endl;
		
		cout<<"Escriba su opcion: ";
		cin>>opc;
		cout<<""<<endl;
		
		switch(opc)
			{
				case 1:
					cout<<"Grupo 1"<<endl;
					for(int i = 0; i <10; i++){
						cout<<"Ingrese el carnet del alumno #" << (i+1) << ": ";
						cin>>vectorAlumnosGrupo1[i].carnet;
						cout<<"Ingrese el nombre completo del alumno #" << (i+1) << ": ";
						cin>>vectorAlumnosGrupo1[i].nombre_completo;
						cout<<"Ingrese la edad del alumno #" << (i+1) << ": ";
						cin>>vectorAlumnosGrupo1[i].edad;
						cout<<"Ingrese la carrera del alumno #" << (i+1) << ": ";
						cin>>vectorAlumnosGrupo1[i].carrera;
						cout<<endl;
					}
					cout<<"Grupo 2"<<endl;
					for(int i = 0; i <10; i++){
						cout<<"Ingrese el carnet del alumno #" << (i+1) << ": ";
						cin>>vectorAlumnosGrupo2[i].carnet;
						cout<<"Ingrese el nombre completo del alumno #" << (i+1) << ": ";
						cin>>vectorAlumnosGrupo2[i].nombre_completo;
						cout<<"Ingrese la edad del alumno #" << (i+1) << ": ";
						cin>>vectorAlumnosGrupo2[i].edad;
						cout<<"Ingrese la carrera del alumno #" << (i+1) << ": ";
						cin>>vectorAlumnosGrupo2[i].carrera;
						cout<<endl;
					}
					cout<<"Grupo 3"<<endl;
					for(int i = 0; i <10; i++){
						cout<<"Ingrese el carnet del alumno #" << (i+1) << ": ";
						cin>>vectorAlumnosGrupo3[i].carnet;
						cout<<"Ingrese el nombre completo del alumno #" << (i+1) << ": ";
						cin>>vectorAlumnosGrupo3[i].nombre_completo;
						cout<<"Ingrese la edad del alumno #" << (i+1) << ": ";
						cin>>vectorAlumnosGrupo3[i].edad;
						cout<<"Ingrese la carrera del alumno #" << (i+1) << ": ";
						cin>>vectorAlumnosGrupo3[i].carrera;
						cout<<endl;
					}
					goto menu;
					break;
				case 2:
					cout<<"Ingrese en que grupo desea buscar (1,2,3): "<<endl;
					cin>>opcBuscar;
					switch(opcBuscar){
						case 1:
							cout<<"Ingrese el carnet a buscar: ";
							cin>>carnet;
							cout<<endl;
							cout<<"Buscando..."<<endl;
							cout<<endl;
							for(int i = 0; i <10; i++){
								if(vectorAlumnosGrupo1[i].carnet == carnet){
									cout<<"Encontrado"<<endl;
									cout<<endl;
									cout<<"Carnet: ";
									cout<<vectorAlumnosGrupo1[i].carnet;
									cout<<endl;
									cout<<"Nombre completo: ";
									cout<<vectorAlumnosGrupo1[i].nombre_completo;
									cout<<endl;
									cout<<"Edad: ";
									cout<<vectorAlumnosGrupo1[i].edad;
									cout<<endl;
									cout<<"Carrera: ";
									cout<<vectorAlumnosGrupo1[i].carrera;
									cout<<endl;
									cout<<"Grupo: 1"<<endl;
									break;
								}
								else{
									cout<<"Sin resultados"<<endl;
								}
							}
							goto menu;
							break;
						case 2:
							cout<<"Ingrese el carnet a buscar: ";
							cin>>carnet;
							cout<<endl;
							cout<<"Buscando..."<<endl;
							cout<<endl;
							for(int i = 0; i <10; i++){
								if(vectorAlumnosGrupo2[i].carnet == carnet){
									cout<<"Encontrado"<<endl;
									cout<<endl;
									cout<<"Carnet: ";
									cout<<vectorAlumnosGrupo2[i].carnet;
									cout<<endl;
									cout<<"Nombre completo: ";
									cout<<vectorAlumnosGrupo2[i].nombre_completo;
									cout<<endl;
									cout<<"Edad: ";
									cout<<vectorAlumnosGrupo2[i].edad;
									cout<<endl;
									cout<<"Carrera: ";
									cout<<vectorAlumnosGrupo2[i].carrera;
									cout<<endl;
									cout<<"Grupo: 2"<<endl;
									break;
								}
								else{
										cout<<"Sin resultados"<<endl;
								}
							}
							goto menu;
							break;
						case 3:
							cout<<"Ingrese el carnet a buscar: ";
							cin>>carnet;
							cout<<endl;
							cout<<"Buscando..."<<endl;
							cout<<endl;
							for(int i = 0; i <10; i++){
								if(vectorAlumnosGrupo3[i].carnet == carnet){
									cout<<"Encontrado"<<endl;
									cout<<endl;
									cout<<"Carnet: ";
									cout<<vectorAlumnosGrupo3[i].carnet;
									cout<<endl;
									cout<<"Nombre completo: ";
									cout<<vectorAlumnosGrupo3[i].nombre_completo;
									cout<<endl;
									cout<<"Edad: ";
									cout<<vectorAlumnosGrupo3[i].edad;
									cout<<endl;
									cout<<"Carrera: ";
									cout<<vectorAlumnosGrupo3[i].carrera;
									cout<<endl;
									cout<<"Grupo: 3"<<endl;
									break;
								}
								else{
										cout<<"Sin resultados"<<endl;
								}
							}
							goto menu;
							break;
						default:
							cout<<"Opcion no valida"<<endl;
							goto menu;
							break;
					}
				case 3:
					cout<<"Ingrese en que grupo desea buscar (1,2,3): "<<endl;
					cin>>opcBuscar;
					switch(opcBuscar){
						case 1:
							cout<<"Ingrese el carnet a buscar: ";
							cin>>carnet;
							cout<<endl;
							cout<<"Buscando..."<<endl;
							cout<<endl;
							for(int i = 0; i <10; i++){
								if(vectorAlumnosGrupo1[i].carnet == carnet){
									cout<<"Encontrado"<<endl;
									cout<<endl;
									cout<<"Carnet: ";
									cout<<vectorAlumnosGrupo1[i].carnet;
									cout<<endl;
									cout<<"Nombre completo: ";
									cout<<vectorAlumnosGrupo1[i].nombre_completo;
									cout<<endl;
									cout<<"Edad: ";
									cout<<vectorAlumnosGrupo1[i].edad;
									cout<<endl;
									cout<<"Carrera: ";
									cout<<vectorAlumnosGrupo1[i].carrera;
									cout<<endl;
									cout<<"Grupo: 1";
									cout<<endl;
									cout<<"Desea eliminar el alumno (s/n): ";
									cin>>opcEliminar;
									if(opcEliminar == "s" or opcEliminar == "S"){
										vectorAlumnosGrupo1[i] = vectorAlumnosGrupo1[11];
										cout<<endl;
										cout<<"Eliminado con exito"<<endl;
										break;
									}
									else{
										cout<<"Cancelando"<<endl;
									}
								}
								else{
									cout<<"Sin resultados"<<endl;
								}
							}
							goto menu;
							break;
						case 2:
							cout<<"Ingrese el carnet a buscar: ";
							cin>>carnet;
							cout<<endl;
							cout<<"Buscando..."<<endl;
							for(int i = 0; i <10; i++){
								if(vectorAlumnosGrupo2[i].carnet == carnet){
									cout<<"Encontrado"<<endl;
									cout<<"Carnet: ";
									cout<<vectorAlumnosGrupo2[i].carnet;
									cout<<endl;
									cout<<"Nombre completo: ";
									cout<<vectorAlumnosGrupo2[i].nombre_completo;
									cout<<endl;
									cout<<"Edad: ";
									cout<<vectorAlumnosGrupo2[i].edad;
									cout<<endl;
									cout<<"Carrera: ";
									cout<<vectorAlumnosGrupo2[i].carrera;
									cout<<"Grupo: 2";
									cout<<endl;
									cout<<"Desea eliminar el alumno (s/n): ";
									cin>>opcEliminar;
									if(opcEliminar == "s" or opcEliminar == "S"){
										vectorAlumnosGrupo2[i] = vectorAlumnosGrupo2[11];
										cout<<endl;
										cout<<"Eliminado con exito"<<endl;
										break;
									}
									else{
										cout<<"Cancelando"<<endl;
									}
								}
								else{
										cout<<"Sin resultados"<<endl;
								}
							}
							goto menu;
							break;
						case 3:
							cout<<"Ingrese el carnet a buscar: ";
							cin>>carnet;
							cout<<endl;
							cout<<"Buscando..."<<endl;
							for(int i = 0; i <10; i++){
								if(vectorAlumnosGrupo3[i].carnet == carnet){
									cout<<"Encontrado"<<endl;
									cout<<"Encontrado"<<endl;
									cout<<"Carnet: ";
									cout<<vectorAlumnosGrupo3[i].carnet;
									cout<<endl;
									cout<<"Nombre completo: ";
									cout<<vectorAlumnosGrupo3[i].nombre_completo;
									cout<<endl;
									cout<<"Edad: ";
									cout<<vectorAlumnosGrupo3[i].edad;
									cout<<endl;
									cout<<"Carrera: ";
									cout<<vectorAlumnosGrupo3[i].carrera;
									cout<<"Grupo: 3";
									cout<<endl;
									cout<<"Desea eliminar el alumno (s/n): ";
									cin>>opcEliminar;
									if(opcEliminar == "s" or opcEliminar == "S"){
										vectorAlumnosGrupo3[i] = vectorAlumnosGrupo3[11];
										cout<<endl;
										cout<<"Eliminado con exito"<<endl;
										break;
									}
									else{
										cout<<"Cancelando"<<endl;
									}
								}
								else{
										cout<<"Sin resultados"<<endl;
								}
							}
							goto menu;
							break;
						default:
							cout<<"Opcion no valida"<<endl;
							goto menu;
							break;
					}
				case 4:
					cout<<"Saliendo..."<<endl;
					exit(-1);
					break;
				default:
					cout<<"Opcion no valida"<<endl;
					goto menu;
					break;
		}
	
	return 0;
}


