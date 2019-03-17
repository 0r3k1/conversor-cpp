///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version May 29 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __WXFB_PROJECT_H__
#define __WXFB_PROJECT_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/combobox.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/stattext.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class wxfbMain
///////////////////////////////////////////////////////////////////////////////
class wxfbMain : public wxFrame 
{
	private:
	
	protected:
		wxComboBox* unidades;
		wxComboBox* unidadEntrada;
		wxTextCtrl* entrada;
		wxStaticText* m_staticText2;
		wxComboBox* unidadSalida;
		wxTextCtrl* salida;
		
		// Virtual event handlers, overide them in your derived class
		virtual void unidades_onClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void unidadEntrada_update( wxCommandEvent& event ) { event.Skip(); }
		virtual void entrada_update( wxCommandEvent& event ) { event.Skip(); }
		virtual void unidadSalida_update( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		wxfbMain( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Conversor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 344,129 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~wxfbMain();
	
};

#endif //__WXFB_PROJECT_H__
