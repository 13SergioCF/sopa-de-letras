//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Unit4.h"
#include "Unit2.h"
//#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include "Unit3.h"

//incluye la libreria que nos permitira reproduccir sonido
#include <mmsystem.h>
TForm2 *Form2;
	matriz a;  //objeto matriz
	PVector p; //objeto Vector
	int seg=0;
	int min=0;
	//variable global

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------pasar valores a StringGrid----------------------------
void TForm2::pasarTabla(matriz a,TStringGrid *b){
	b->RowCount = a.Filas;
	b->ColCount = a.Columnas;
	for (int i=0; i<b->RowCount; i++){
		for (int j=0; j<b->ColCount; j++){
				b->Cells[j][i]= a.Casilla [i][j];
			}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::BitBtn1Click(TObject *Sender)
{
	ListBox1->Clear();  //limpiar es ListBox1
	// nivel facil
	if (Facil->Checked==true){
	   if(Nombres->Checked==true){//categoria Nombres
			a.Filas=7;
			a.Columnas=7;
			a.limpiarMatriz();
			p.cargarPalabraVector("Facil","Nombres");
			a.cargarPalabrasMatriz(p);
			a.cargarMatriz();
			cargarPalabras(p,ListBox1);
			//CONFIGURACION DEL STRINGGRID
			Tabla->Top=221;       //PARTE SUPERIOR
			Tabla->Left=400;      //IZQUIERDA
			Tabla->Width=220;     //ANCHO
			Tabla->Height=220;    //ALTURA
			pasarTabla(a, Tabla);
			TTiempo->Enabled=true;// inicia la tiempo
	   }
	   if(Animales->Checked==true){//categoria Animales
			a.Filas=7;
			a.Columnas=7;
			a.limpiarMatriz();
			p.cargarPalabraVector("Facil","Animales");
			a.cargarPalabrasMatriz(p);
			a.cargarMatriz();
			cargarPalabras(p,ListBox1);
			Tabla->Top=221;
			Tabla->Left=400;
			Tabla->Width=220;
			Tabla->Height=220;
			pasarTabla(a, Tabla);
			TTiempo->Enabled=true;// inicia la tiempo
	   }
	   if(Objeto->Checked==true){//categoria Objetos
			a.Filas=7;
			a.Columnas=7;
			a.limpiarMatriz();
			p.cargarPalabraVector("Facil","Objetos");
			a.cargarPalabrasMatriz(p);
			a.cargarMatriz();
			cargarPalabras(p,ListBox1);
			Tabla->Top=221;
			Tabla->Left=400;
			Tabla->Width=220;
			Tabla->Height=220;
			pasarTabla(a, Tabla);
			TTiempo->Enabled=true;// inicia la tiempo
	   }
	}
   // nivel medio
	if (Medio->Checked==true){
		if(Nombres->Checked==true){//categoria Nombres
			a.Filas=10;
			a.Columnas=10;
			a.limpiarMatriz();
			p.cargarPalabraVector("Medio","Nombres");
			a.cargarPalabrasMatriz(p);
			a.cargarMatriz();
			cargarPalabras(p,ListBox1);
			Tabla->Top=177;
			Tabla->Left=400;
			Tabla->Width=312;
			Tabla->Height=312;
			pasarTabla(a, Tabla);
			TTiempo->Enabled=true;// inicia la tiempo
	   }
	   if(Animales->Checked==true){//categoria Animales
			a.Filas=10;
			a.Columnas=10;
			a.limpiarMatriz();
			p.cargarPalabraVector("Medio","Animales");
			a.cargarPalabrasMatriz(p);
			a.cargarMatriz();
			cargarPalabras(p,ListBox1);
			Tabla->Top=177;
			Tabla->Left=400;
			Tabla->Width=312;
			Tabla->Height=312;
			pasarTabla(a, Tabla);
			TTiempo->Enabled=true;// inicia la tiempo
	   }
	   if(Objeto->Checked==true){//categoria Objetos
			a.Filas=10;
			a.Columnas=10;
			a.limpiarMatriz();
			p.cargarPalabraVector("Medio","Objetos");
			a.cargarPalabrasMatriz(p);
			a.cargarMatriz();
			cargarPalabras(p,ListBox1);
			Tabla->Top=177;
			Tabla->Left=400;
			Tabla->Width=312;
			Tabla->Height=312;
			pasarTabla(a, Tabla);
			TTiempo->Enabled=true;// inicia la tiempo
	   }
	}
	// nivel dificil
	if (Dificil->Checked==true){
		if(Nombres->Checked==true){//categoria Nombres
			a.Filas=15;
			a.Columnas=15;
			a.limpiarMatriz();
			p.cargarPalabraVector("Dificil","Nombres");
			a.cargarPalabrasMatriz(p);
			a.cargarMatriz();
			cargarPalabras(p,ListBox1);
			Tabla->Top=120;
			Tabla->Left=280;
			Tabla->Width=469;
			Tabla->Height=469;
			pasarTabla(a, Tabla);
			TTiempo->Enabled=true;// inicia la tiempo
	   }
	   if(Animales->Checked==true){//categoria Animales
			a.Filas=15;
			a.Columnas=15;
			a.limpiarMatriz();
			p.cargarPalabraVector("Dificil","Animales");
			a.cargarPalabrasMatriz(p);
			a.cargarMatriz();
			cargarPalabras(p,ListBox1);
			Tabla->Top=120;
			Tabla->Left=280;
			Tabla->Width=469;
			Tabla->Height=469;
			pasarTabla(a, Tabla);
			TTiempo->Enabled=true;// inicia la tiempo
	   }
	   if(Objeto->Checked==true){//categoria Objetos
			a.Filas=15;
			a.Columnas=15;
			a.limpiarMatriz();
			p.cargarPalabraVector("Dificil","Objetos");
			a.cargarPalabrasMatriz(p);
			a.cargarMatriz();
			cargarPalabras(p,ListBox1);
			Tabla->Top=120;
			Tabla->Left=280;
			Tabla->Width=469;
			Tabla->Height=469;
			pasarTabla(a, Tabla);
			TTiempo->Enabled=true;// inicia la tiempo
	   }
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FacilClick(TObject *Sender)
{
	min=2;
	seg=59;
	lb_minuto->Caption=min;
	lb_segundo->Caption=seg;
}
//---------------------------------------------------------------------------
 void __fastcall TForm2::MedioClick(TObject *Sender)
{
	min=4;
	seg=59;
	lb_minuto->Caption=min;
	lb_segundo->Caption=seg;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::DificilClick(TObject *Sender)
{
	min=9;
	seg=29;
	lb_minuto->Caption=min;
	lb_segundo->Caption=seg;
}
//---------------------------------------------------------------------------
//************************* Codigo del Tiempo ******************************//
//---------------------------------------------------------------------------
void __fastcall TForm2::TTiempoTimer(TObject *Sender)
{
   seg--;
   lb_segundo->Caption=seg;//IntToStr(seg);
   lb_minuto->Caption=min;

	if(seg==0 && min==0){
	  TTiempo->Enabled=false;
	  seg=1;
	  min=0;
	  //Apagamos la alarma
	  PlaySound(NULL,NULL,SND_ASYNC);
	  PlaySound(TEXT("D:\\CLASES\\ESTRUCTURA DE DATOS -S4\\PROYECTO\\NUEVO\\PROYECTO SOPA DE LETRA  V_5\\Recursos\\perdedor.wav"),NULL,SND_ASYNC);
	  ShowMessage("���� GAME OVER !!!!");
	  lb_segundo->Left=125;
	  Label3->Font->Size=24;
	  //lb_segundo->Top=115;
	  lb_segundo->Font->Color=clBlack;
	  lb_minuto->Font->Color=clBlack;
	  lb_minuto->Font->Size=24;
	  lb_segundo->Font->Size=24;
	  Image3->Visible=false;
	  Image4->Visible=false;
	  Image5->Visible=false;
	  PlaySound(TEXT("D:\\CLASES\\ESTRUCTURA DE DATOS -S4\\PROYECTO\\NUEVO\\PROYECTO SOPA DE LETRA  V_5\\Recursos\\journey-with-russ-65.wav"),NULL,SND_ASYNC);
	  a.limpiarMatriz();
	  pasarTabla(a, Tabla);
	  ListBox1->Clear();
	}
	if(seg==0){
		seg=59;
		min--;
		lb_segundo->Caption=seg;
		lb_minuto->Caption=min;
	}

	if(seg==20 && min==0){
		PlaySound(TEXT("D:\\CLASES\\ESTRUCTURA DE DATOS -S4\\PROYECTO\\NUEVO\\PROYECTO SOPA DE LETRA  V_5\\Recursos\\tiktak.wav"),NULL,SND_ASYNC);
		//  lb_segundo->Left=370;
		//  lb_segundo->Top=75;
		lb_minuto->Left=59;
		Label3->Font->Size=40;
		lb_segundo->Font->Color=clRed;
		lb_minuto->Font->Color=clRed;
		lb_minuto->Font->Size=40;
		lb_segundo->Font->Size=40;
	 }
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Cmb_EstilosChange(TObject *Sender)
{
	 //segun lo que tenga el lisBox se dara el estilo
	 TStyleManager::SetStyle(Cmb_Estilos->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormCreate(TObject *Sender)
{
   //la musica inicia una ves que el formulario funcione
   PlaySound(TEXT("D:\\CLASES\\ESTRUCTURA DE DATOS -S4\\PROYECTO\\NUEVO\\PROYECTO SOPA DE LETRA  V_5\\Recursos\\journey-with-russ-65.wav"),NULL,SND_ASYNC);
   //agregamos los vcl styles al TcomboBox
   for(int i=0;i<TStyleManager::StyleNames.Length;i++)
   {
	 String styleName = TStyleManager::StyleNames[i];
	 Cmb_Estilos->Items->Add(styleName);

   }
   /*se hablilita la propiedad ItemIndex que va a establecer el Item activo
   en el TcomboBox con el nombre del estilo que alcualmente esta activo*/
   Cmb_Estilos->ItemIndex=
   Cmb_Estilos->Items->IndexOf(TStyleManager::ActiveStyle->Name);
}
//---------------------------------------------------------------------------
void TForm2::cargarPalabras(PVector x,TListBox *y)
{
	y->Clear();
	for(int i=0;i<x.getN();i++){
		y->Items->Add(x.getPalabra(i));
	}
}
//--------------------------------------------------------------------------
//string Palabras abuscar;
int priPosFila=0;
int priPosColumna=0;
void __fastcall TForm2::TablaSelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect)
{

   if(Palabra->Text==""){
	  priPosFila=ARow;
	  priPosColumna=ACol;
   }
   Palabra->Text=Palabra->Text+Tabla->Cells[ACol][ARow];
   int posicionPalabra=p.posPalabras(Palabra->Text);//resive una palabra
   if(posicionPalabra!=-1){
	  int ultPosFila=ARow;
	  int ultPosColumna=ACol;
		// controlar palabra vertical
		if(((ultPosFila-priPosFila)+1)==Palabra->Text.Length() && ((ultPosColumna==priPosColumna))){
		  p.eliminarPalabra(posicionPalabra);
		  Palabra->Text="";
			if(p.getN()==0){
				TTiempo->Enabled=false;// PARANDO EL RELOJ
				PlaySound(NULL,NULL,SND_ASYNC);
				min=0;
				seg=0;
				lb_minuto->Caption=min;
				lb_segundo->Caption=seg;
				PlaySound(TEXT("D:\\CLASES\\ESTRUCTURA DE DATOS -S4\\PROYECTO\\NUEVO\\PROYECTO SOPA DE LETRA  V_5\\Recursos\\ganador.wav"),NULL,SND_ASYNC);
				Form3->ShowModal(); // formulario cuando ganas
				a.limpiarMatriz();// limpia la matriz
				pasarTabla(a, Tabla);
			   PlaySound(TEXT("D:\\CLASES\\ESTRUCTURA DE DATOS -S4\\PROYECTO\\NUEVO\\PROYECTO SOPA DE LETRA  V_5\\Recursos\\journey-with-russ-65.wav"),NULL,SND_ASYNC);
				Facil->Checked=false; // Radio Botoon se vuelve a false e
				Medio->Checked=false;  // decir empieza de nuevo
				Dificil->Checked=false;
				Nombres->Checked=false;
				Animales->Checked=false;
				Objeto->Checked=false;
				Image3->Visible=false;
				Image4->Visible=false;
				Image5->Visible=false;
			}
		}
		// controlar palabra Horizontales
		if(((ultPosColumna-priPosColumna)+1)==Palabra->Text.Length() && ((ultPosFila==priPosFila))){
		  p.eliminarPalabra(posicionPalabra);
		  Palabra->Text="";
			if(p.getN()==0){
				TTiempo->Enabled=false;// PARANDO EL RELOJ
				PlaySound(NULL,NULL,SND_ASYNC);
				min=0;
				seg=0;
				lb_minuto->Caption=min;
				lb_segundo->Caption=seg;
				PlaySound(TEXT("D:\\CLASES\\ESTRUCTURA DE DATOS -S4\\PROYECTO\\NUEVO\\PROYECTO SOPA DE LETRA  V_5\\Recursos\\ganador.wav"),NULL,SND_ASYNC);
				Form3->ShowModal();
				a.limpiarMatriz();
				pasarTabla(a, Tabla);
				PlaySound(TEXT("D:\\CLASES\\ESTRUCTURA DE DATOS -S4\\PROYECTO\\NUEVO\\PROYECTO SOPA DE LETRA  V_5\\Recursos\\journey-with-russ-65.wav"),NULL,SND_ASYNC);
				Facil->Checked=false;
				Medio->Checked=false;
				Dificil->Checked=false;
				Nombres->Checked=false;
				Animales->Checked=false;
				Objeto->Checked=false;
				Image3->Visible=false;
				Image4->Visible=false;
				Image5->Visible=false;
			}
		}
   }
  cargarPalabras(p,ListBox1);  // vec,ListBox1
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
   Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::BitBtn2Click(TObject *Sender)
{
	  Palabra->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormShow(TObject *Sender)
{
	/*
		TGIFImage*gif=new TGIFImage();// Se crea en memoria un objeto tipo gif
		gif->Assign(Image2->Picture);  // se asigna la imagen al tipo objeto de tipo gif
		gif->Animate=true;             // animamos el objeto gif
		Image2->Picture->Assign(gif); // 10 regresamos al componente Image ya animado
	*/

}
//---------------------------------------------------------------------------
void __fastcall TForm2::NombresClick(TObject *Sender)
{
  Image4->Visible=false;
  Image5->Visible=false;
  Image3->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::AnimalesClick(TObject *Sender)
{
  Image3->Visible=false;
  Image5->Visible=false;
  Image4->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::ObjetoClick(TObject *Sender)
{
  Image3->Visible=false;
  Image4->Visible=false;
  Image5->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
   Form4->ShowModal();
}
//---------------------------------------------------------------------------





