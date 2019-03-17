////////////////////////////////////////////////////////////////////////////////
//Name:        Utilidades.h
//Author:      Cristobal Rodas
//Created:     10/03/2018
//Copyright:   (c) Cristobal Rodas
//Licence:     wxWindows licence
////////////////////////////////////////////////////////////////////////////////

#ifndef UTILIDADES_H
#define UTILIDADES_H
#include <wx/textctrl.h>
#include <iostream>
#include <sstream>
#include <vector>
#include <map>

enum enumUnidades{Long, Masa, Energ, Tiempo};

int eleva10(int expo);
std::string convertToString(float n);
int convertToInt(std::string num);
float convertToFloat(std::string num);
std::string wxStringToString(wxString text);
float reglaDe3(float a, float b, float c = 1);
float milimetrosTo(int s, float c);
float toMilimetros(int e, float c);
float gramosTo(int s, float c);
float toGramos(int e, float c);
float kilojouleTo(int s, float c);
float toKilojoule(int e, float c);
float segundosTo(int s, float c);
float toSegundos(int e, float c);
std::string* listUnidades();
std::string* listTipoUnidades(int t);
void iniciaMapa();

#endif

