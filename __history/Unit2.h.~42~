//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "Matriz.h"  //
#include <Vcl.Buttons.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Imaging.GIFImg.hpp>
//#include <Vcl.Grids.hpp>
//#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TBitBtn *BitBtn1;
	TStringGrid *Tabla;
	TGroupBox *GroupBox1;
	TRadioButton *Medio;
	TRadioButton *Facil;
	TRadioButton *Dificil;
	TLabel *Tiempo;
	TListBox *ListBox1;
	TLabel *Label2;
	TLabel *lb_minuto;
	TLabel *Label3;
	TLabel *lb_segundo;
	TTimer *TTiempo;
	TEdit *Palabra;
	TBitBtn *BitBtn2;
	TShape *Shape1;
	TComboBox *Cmb_Estilos;
	TLabel *Label4;
	TButton *Button1;
	TShape *Shape2;
	TLabel *Label5;
	TImage *Image1;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TGroupBox *GroupBox4;
	TRadioButton *Nombres;
	TRadioButton *Animales;
	TRadioButton *Objeto;
	TShape *Shape3;
	TShape *Shape4;
	TShape *Shape5;
	TButton *Button2;
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall MedioClick(TObject *Sender);
	void __fastcall FacilClick(TObject *Sender);
	void __fastcall DificilClick(TObject *Sender);
	void __fastcall TTiempoTimer(TObject *Sender);
	void __fastcall Cmb_EstilosChange(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall TablaSelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall BitBtn2Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall NombresClick(TObject *Sender);
	void __fastcall AnimalesClick(TObject *Sender);
	void __fastcall ObjetoClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
	void pasarTabla(matriz a,TStringGrid *b);
    void cargarPalabras(PVector x,TListBox *y);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
