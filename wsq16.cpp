#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void results(string filename){

int contador = 0;
float Precio = 0.0, Ciudad_MxG = 0.0, Carretera_MxG=0.0, Sumaprecio = 0.0, Sumaciudad = 0.0, Sumacarretera = 0.0;

	ifstream infile(filename.c_str());
	infile.is_open();
	string line, preciomedio, CiudadMxG, CarreteraMxG;
	while(getline(infile, line)){
		if(( contador % 2 ) == 0){
			preciomedio = line.substr(43, 46);
			Precio = atoi(preciomedio.c_str());
			CiudadMxG = line.substr(53, 54);
			Ciudad_MxG = atoi(CiudadMxG.c_str());
			CarreteraMxG = line.substr(56, 57);
			Carretera_MxG = atoi(CarreteraMxG.c_str());
			Sumaprecio = Sumaprecio + Precio;
			Sumaciudad = Sumaciudad + Ciudad_MxG;
			Sumacarretera = Sumacarretera + Carretera_MxG;
		}
		contador++;
	}
		cout<<"El promedio de millas por galon en la ciudad es de: "<< Sumaciudad/93 <<endl;

		cout<<"El promedio de millas por galon en la carretera es de: "<< Sumacarretera/93 <<endl;

		cout<<"El precio medio de un carro es de: "<< Sumaprecio/93 <<endl;
}

int main(){
	string nombre;

	cout << "Pon el nombre del archivo que quieres analizar, " << endl;
	cout << "el archivo tiene que estar en la misma carpeta que el .cpp" << endl;
	cin >> nombre;
	results(nombre);
	return 0;
}