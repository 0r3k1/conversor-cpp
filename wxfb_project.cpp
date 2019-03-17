///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version May 29 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

wxfbMain::wxfbMain( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 344,129 ), wxSize( 344,129 ) );
	this->SetBackgroundColour( wxColour( 179, 217, 255 ) );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	unidades = new wxComboBox( this, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer3->Add( unidades, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer2->Add( bSizer3, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	unidadEntrada = new wxComboBox( this, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer5->Add( unidadEntrada, 1, wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 5 );
	
	entrada = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( entrada, 1, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	
	bSizer4->Add( bSizer5, 1, wxALL|wxEXPAND, 5 );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("="), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer4->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxVERTICAL );
	
	unidadSalida = new wxComboBox( this, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer51->Add( unidadSalida, 1, wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 5 );
	
	salida = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer51->Add( salida, 1, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	
	bSizer4->Add( bSizer51, 1, wxEXPAND|wxALL, 5 );
	
	
	bSizer2->Add( bSizer4, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	unidades->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( wxfbMain::unidades_onClick ), NULL, this );
	unidadEntrada->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( wxfbMain::unidadEntrada_update ), NULL, this );
	entrada->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( wxfbMain::entrada_update ), NULL, this );
	unidadSalida->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( wxfbMain::unidadSalida_update ), NULL, this );
}

wxfbMain::~wxfbMain()
{
	// Disconnect Events
	unidades->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( wxfbMain::unidades_onClick ), NULL, this );
	unidadEntrada->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( wxfbMain::unidadEntrada_update ), NULL, this );
	entrada->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( wxfbMain::entrada_update ), NULL, this );
	unidadSalida->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( wxfbMain::unidadSalida_update ), NULL, this );
	
}
