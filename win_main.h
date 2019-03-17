#ifndef WIN_MAIN_H
#define WIN_MAIN_H
#include "wxfb_project.h"
#include <iostream>
#include "utilidades.h"

class win_main : public wxfbMain {
	void tUnidades(wxComboBox* c);
	void updateUnidades(wxComboBox* c);
	void ActualizaParametros();
	void capturaParametros();
	void conversor();
	int magnitud;
	int e, s; //(e)ntrada, (s)alida
	double c, res; //(c)antidad (res)ultado
	
protected:
	void unidadEntrada_update( wxCommandEvent& event ) ;
	void unidadSalida_update( wxCommandEvent& event ) ;
	void unidades_onClick( wxCommandEvent& event ) ;
	void entrada_update( wxCommandEvent& event ) ;
	
public:
	win_main(wxWindow *parent=NULL);
	~win_main();
};

#endif

