//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
int cont=0;
int i=1;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
   Timer2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Timer2Timer(TObject *Sender)
{
	 cont++;
	 if(cont%2==0){
		 Lbl_ganaste->Font->Color=clRed;
		 Panel1->Color=clBlue;
	 }
	 else{
        Panel1->Color=clRed;
		Lbl_ganaste->Font->Color=clBlue;
	 }
	 if(cont==9){
	   Timer2->Enabled=false;
	   cont=0;
	   Close();
	 }
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormShow2(TObject *Sender)
{
		TGIFImage*gif=new TGIFImage();// Se crea en memoria un objeto tipo gif
		gif->Assign(ImagenMinion->Picture);  // se asigna la imagen al tipo objeto de tipo gif
		gif->Animate=true;             // animamos el objeto gif
		ImagenMinion->Picture->Assign(gif); // 10 regresamos al componente Image ya animado
}
//---------------------------------------------------------------------------


