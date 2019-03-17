////////////////////////////////////////////////////////////////////////////////
//Name:        Utilidades.cpp
//Author:      Cristobal Rodas
//Created:     10/03/2018
//Copyright:   (c) Cristobal Rodas
//Licence:     wxWindows licence
////////////////////////////////////////////////////////////////////////////////

#include "Utilidades.h"
using namespace std;

const int cantEU = 4; // cantidad de Elementos de Unidades
string unidades[] = {
	"Longitud",
	"Masa",
	"Energia",
	"Tiempo"
};

//const int cantEUL = 6; // cantidad de Elementos de Unidades de Longitud
string unidadesL[] = {
	"Milimetros",
	"Centimetros",
	"Pies",
	"Metros",
	"Yardas",
	"Pulgadas"
};
float longitud[] = {1, 10, 304.8, 1000, 914.4, 25.4};

//const int cantEUM = 5; // cantidad de Elementos de Unidades de Masa
string unidadesM[] = {
	"Gramos",
	"Miligramos",
	"Libras",
	"Onzas",
	"Kilogramo"
};
float masa[] = {0.001, 1, 453.592, 28.3495, 1000};

//const int cantEUE = 6; // cantidad de Elementos de Unidades de Energia
string unidadesE[] = {
	"Julio",
	"Kilojoule",
	"Gram Calorie",
	"Kilocaloria",
	"Vatio-Hora",
	"Kilovatio-Hora"
};
float energia[] = {1, 1000, 4.184, 4184, 3600, 3600000};

//const int cantEUT = 8; // cantidad de Elementos de Unidades de Tiempo
string unidadesT[] = {
	"Segundo",
	"Minuto",
	"Nanosegundo",
	"Microsegundo",
	"Milisegundo",
	"Hora",
	"Dia",
	"Semana"
};
float tiempo[] = {1, 60, 0.000000001, 0.000001, 0.001, 3600, 86400, 604800};

map<int, string*> Munidades;//mapa unidades

void iniciaMapa(){
	Munidades[0] = unidadesL;
	Munidades[1] = unidadesM;
	Munidades[2] = unidadesE;
	Munidades[3] = unidadesT;
}

int eleva10(int expo){
	int ret = 1;
	for(int i=0; i<expo; i++){
		ret *= 10;
	}
	return ret;
}

string convertToString(float n){
	stringstream str;
	str << n;
	return str.str();
}

int convertToInt(string num){
	int ret, aux;
	
	ret = (int)num[num.size()-1] - 48;
	for(int i = num.size()-2, cont = 1; i>=0; i--, cont++){
		aux = ((int)num[i] - 48) * eleva10(cont);
		ret += aux;
	}
	
	return ret;
}

float convertToFloat(string num){
	float ret, aux;
	int pos = num.find('.');
	int entera;
	
	if(pos != (int)string::npos){
		entera = convertToInt(num.substr(0, pos));
		num = num.substr(pos+1);
		
		ret = 0;
		for(int i=0, cont = 1; i<(int)num.size(); i++, cont++){
			aux = ((float)num[i] - 48) / eleva10(cont);
			ret += aux;
		}
	}else{
		entera = convertToInt(num);
		ret = 0.0;
	}
	return (float)(entera + ret);
}

string wxStringToString(wxString text){
	string ret;
	ret = text.mb_str();
	return ret;
}

float reglaDe3(float a, float b, float c){
	return (a*b)/c;
}

float milimetrosTo(int s, float c){
	return reglaDe3(c, 1, longitud[s]);
}

float toMilimetros(int e, float c){
	return reglaDe3(c, longitud[e]);
}

float gramosTo(int s, float c){
	return reglaDe3(c, 1, masa[s]);
}

float toGramos(int e, float c){
	return reglaDe3(c, masa[e]);
}

float kilojouleTo(int s, float c){
	return reglaDe3(c, 1, energia[s]);
}

float toKilojoule(int e, float c){
	return reglaDe3(c, energia[e]);
}

float segundosTo(int s, float c){
	return reglaDe3(c, 1, tiempo[s]);
}

float toSegundos(int e, float c){
	return reglaDe3(c, tiempo[e]);
}

std::string* listUnidades(){
	return unidades;
}

std::string* listTipoUnidades(int t){
	return Munidades[t];
}
