#include "win_main.h"
using namespace std;

win_main::win_main(wxWindow *parent) : wxfbMain(parent) {
	SetIcon(wxIcon(wxIconLocation("img/icon.ico")));
	iniciaMapa();
	
	tUnidades(unidades);
	unidades->SetValue(unidades->GetString(0));
	
	ActualizaParametros();
}

void win_main::unidades_onClick( wxCommandEvent& event )  {
	ActualizaParametros();
	event.Skip();
}

void win_main::entrada_update( wxCommandEvent& event )  {
	if(entrada->IsEmpty()){
		entrada->SetValue("0");
	}else{
		capturaParametros();
		conversor();
	}
	event.Skip();
}

win_main::~win_main() {
	
}

void win_main::unidadEntrada_update( wxCommandEvent& event )  {
	capturaParametros();
	conversor();
	event.Skip();
}

void win_main::unidadSalida_update( wxCommandEvent& event )  {
	capturaParametros();
	conversor();
	event.Skip();
}

void win_main::tUnidades(wxComboBox* c){
	string* list = listUnidades();
	
	for(int i=0; !list[i].empty(); i++){
		c->Append(list[i]);
	}
}

void win_main::updateUnidades(wxComboBox* c){
	string* list = listTipoUnidades(unidades->FindString(unidades->GetValue()));
	
	for(int i=0; !list[i].empty(); i++){
		c->Append(list[i]);
	}
}

void win_main::ActualizaParametros(){
	unidadEntrada->Clear();
	unidadSalida->Clear();
	
	updateUnidades(unidadEntrada);
	updateUnidades(unidadSalida);
	
	unidadEntrada->SetValue(unidadEntrada->GetString(0));
	unidadSalida->SetValue(unidadSalida->GetString(1));
	entrada->SetValue("1");
}

void win_main::capturaParametros(){
	magnitud = unidades->FindString(unidades->GetValue());
	e = unidadEntrada->FindString(unidadEntrada->GetValue());
	s = unidadSalida->FindString(unidadSalida->GetValue());
	entrada->GetValue().ToDouble(&c);
}

void win_main::conversor(){
	switch(magnitud){
		case 0:	res = milimetrosTo(s, toMilimetros(e, c)); break;
		case 1: res = gramosTo(s, toGramos(e, c)); break;
		case 2: res = kilojouleTo(s, toKilojoule(e, c)); break;
		case 3: res = segundosTo(s, toSegundos(e, c)); break;
	}
	
	salida->SetValue(wxString::Format(wxT("%lf"), res));
}
