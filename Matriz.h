#include "Vector.h"

class matriz {
	private :

		int  f,c;
		char m[100][100];
		//metodos modificadores
		void  setFilas(int _filas);
		void  setColumnas(int _columnas);
		void  setElemento(int _filas,int _columnas,char _valor);

		//metdos consultores
		int   getFilas();
		int   getColumnas();
		char  getElemento(int _fila,int _columna);


	public:
		matriz();
	  //	matriz (int _fila, int _columna);
								   // met modif        met consul
		__property int  Filas    = { write=setFilas, read=getFilas };
		__property int  Columnas = { write=setColumnas, read=getColumnas	};
		__property char Casilla[int f][int c] ={ write=setElemento, read=getElemento};
		void  cargarMatriz ();
		void  cargarPalabrasMatriz(PVector palabra);  //clase matriz
		void  limpiarMatriz();
		bool  chocaPalabra(String formaCarga,int f,int c,int cletras);
};

//////////////////////////////  M E T O D O S  ////////////////////////////////

matriz::matriz(){
  f=0;
  c=0;
}

/*matriz::matriz(int _fila, int _columna)
{
  f=_fila;
  c=_columna;
} */
/******************************************************************************/
//////////////////  M E T O D O S   M O D I F I C A D O R E S  /////////////////
/******************************************************************************/
void matriz::setFilas(int _fila){
  f=_fila;
}

void matriz::setColumnas(int _columna){
  c= _columna;
}

void matriz::setElemento(int _fila, int _columna, char _valor){
	if (_fila<f && _columna<c){
		m[_fila][_columna]= _valor;
	}
}

/******************************************************************************/
////////////////////  M E T O D O S   C O N S U L T O R E S  ///////////////////
/******************************************************************************/

int matriz::getFilas(){
	return f;
}

int matriz::getColumnas(){
	return c;
}

char matriz:: getElemento(int _fila, int _columna){
	if (_fila<f && _columna<c){
		return m[_fila][_columna];
	}
}
//----------------------------------------------------------------------------//
void matriz::cargarMatriz ()
{
	char abecedario[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	srand(time(NULL));//metodo "" que nos permite iniciar la funcion rand
	for (int i=0; i<f; i++){

		for (int j=0; j<c; j++ ){

			int num_rand= 0+rand ()% 26;
			if(m[i][j]== 00) {   m[i][j]=abecedario[num_rand];	}
		}
	}
}

void matriz::cargarPalabrasMatriz(PVector palabras){
  srand(time(NULL));

  //para cargar todas las palabras dentro de la matriz
  for(int i=0;i<palabras.getN();i++){

		String palabra = palabras.getPalabra(i);

		int cantidadLetras = palabra.Length();

		int posc = 0+rand() % c;
		int posf = 0+rand() % f;

		int columnasDisponibles= c - posc;
		int filasDisponibles   = f - posf;

		int formaCarga = 0 + rand()% 3 ; // genera un numero entre 0y1
		String forma="";
		switch(formaCarga)
		{
		  case 0:forma="horizontal"; break;
		  case 1:forma="vertical"; break;
		  //case 2:forma="diagonal"; break;
		}
																																/*||((filasDisponibles >= cantidadLetras && forma=="diagonal")&&(columnasDisponibles >= cantidadLetras && forma=="diagonal"))*/
	// LA FORMA PARA CARGAR LA PALABRA HORIZONTALMENTE
	if((columnasDisponibles >= cantidadLetras && forma=="horizontal")  ||
		(filasDisponibles >= cantidadLetras && forma=="vertical")){

	   if(chocaPalabra(forma,posf,posc,cantidadLetras)== false){

				if(forma=="horizontal"){

				//este for sirve para cargar las letras de forma horizontal
					 for(int j=1;j<=cantidadLetras;j++){

					   m[posf][posc]=palabra[j];
					   posc++;
					 }

				}

				if(forma=="vertical"){

				 //este for sirve para cargar las letras de forma vertical
					 for(int j=1;j<=cantidadLetras;j++){

					   m[posf][posc]=palabra[j];
					   posf++;
					 }

				}
			  /*	if(forma=="diagonal"){
					 for(int j=1;j<=cantidadLetras;j++){

					   m[posf][posc]=palabra[j];
					   posf++;
					   posc++;
					 }

				}*/


		 }else{
			i--;
		  }

	} else{
	 i--;   //i=i-1;
	}

  }
}



void matriz::limpiarMatriz()
{
	 for(int i=0;i<f;i++)
	 {
	   for(int j=0;j<c;j++)
	   {
		  m[i][j]=NULL;
	   }
	 }
}

bool matriz::chocaPalabra(String formaCarga,int fil,int col,int cletras)
{
	  bool resultado=false;

	  if(formaCarga=="horizontal")
	  {
	 // ShowMessage("choca palabra" + formaCarga);
		   for(int i=col;i<col+cletras;i++)
		   {
				if( m[fil][i] !=00)
				{// ShowMessage("choca palabra" +getElemento(fil,col));
				  resultado=true;
				}
		   }

	  }

	  if(formaCarga=="vertical")
	  {// ShowMessage("choca vertical "+formaCarga);
		   for(int i=fil;i<fil+cletras;i++)
		   {
				if( m[i][col] !=00)
				{
				  resultado=true;
				}
		   }

	  }

  return resultado;


}
