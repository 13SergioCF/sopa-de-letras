
 class PVector {
	private:
		String  p[100]; // Almacena palabras
		int     n;// Cantidad de palabras

	public :
		PVector();
		//PVector(int _n);
		void    setPalabra(int pos, String  palabra);
		String  getPalabra(int pos);
		int     getN();
		void    cargarPalabraVector(String nivel, String categoria);
		int     posPalabras (String palabra);
		void    eliminarPalabra(int pos);

 };

 ///////////////////// I M P L E M E N T A R   C O D I G O /////////////////////

 PVector:: PVector(){
	n=0;
 }

 //PVector:: PVector(int _n){
//	n=n;
 //}
 /******************************************************************************/
//////////////////     M E T O D O    M O D I F I C A D O R     /////////////////
/******************************************************************************/
 void PVector::setPalabra(int pos, String  palabra){
	p[pos]=palabra;
 }
/******************************************************************************/
////////////////////  M E T O D O S   C O N S U L T O R E S  ///////////////////
/******************************************************************************/
 String PVector::getPalabra(int pos){
	return p[pos];
 }

 int PVector::getN(){
	return n;
 }
//------------------------------------------------------------------------------
 void PVector::cargarPalabraVector(String nivel, String categoria){

	if (categoria== "Nombres"){
			if (nivel== "Facil"){
				n=5;
				setPalabra (0,"SERGIO");
				setPalabra (1,"CESAR");
				setPalabra (2,"ANGEL");
				setPalabra (3,"EVA");
				setPalabra (4,"LUIS");
				setPalabra (5,"EVA");
				setPalabra (6,"LUIS");
				setPalabra (7,"EVA");
				setPalabra (8,"LISA");
				setPalabra (9,"GLADIS");
				setPalabra (10,"DAVID");

			 }
			if (nivel== "Medio"){
				n=6;
				setPalabra (0,"HUGO");
				setPalabra (1,"RODRIGO");
				setPalabra (2,"MIGUEL");
				setPalabra (3,"DANIEL");
				setPalabra (4,"HENRY");
				setPalabra (5,"ANDRES");
			 }
			if (nivel== "Dificil"){
				n=5;
				setPalabra (0,"RIVALDO");
				setPalabra (1,"DUBERTO");
				setPalabra (2,"MIGUEL");
				setPalabra (3,"OLVIS");
				setPalabra (4,"SERGIO");
				/*setPalabra (5,"GABRIEL");
				setPalabra (6,"MIGUEL");
				setPalabra (7,"CRISTIAN");
				setPalabra (8,"SOFIA"); */
			 }

	 }

	if (categoria== "Animales"){
		if (nivel == "Facil"){
			n=4;
			setPalabra (0,"LEON");
			setPalabra (1,"ALCON");
			setPalabra (2,"LORO");
			setPalabra (3,"TIGRE");
		 }
		if (nivel == "Medio"){
			n=6;
			setPalabra (0,"BUHO");
			setPalabra (1,"PERRO");
			setPalabra (2,"AGUILA");
			setPalabra (3,"BURRO");
			setPalabra (4,"CABRA");
			setPalabra (5,"CAMELLO");
		 }
		if (nivel== "Dificil"){
			n=9;
			setPalabra (0,"BALLENA");
			setPalabra (1,"BISONTE");
			setPalabra (2,"BUITRE");
			setPalabra (3,"CERDO");
			setPalabra (4,"CONEJO");
			setPalabra (5,"DELFIN");
			setPalabra (6,"COBRA");
			setPalabra (7,"CASTOR");
			setPalabra (8,"CONDOR");
		 }

	}

	if (categoria== "Objetos"){
		if (nivel=="Facil"){
			n=4;
			setPalabra (0,"SILLA");
			setPalabra (1,"LAPIZ");
			setPalabra (2,"GOMA");
			setPalabra (3, "OJO");
		 }
		if (nivel== "Medio"){
			n=6;
			setPalabra (0,"CLAVO");
			setPalabra (1,"MESA");
			setPalabra (2,"REGLA");
			setPalabra (3,"LIBRO");
			setPalabra (4,"LUZ");
			setPalabra (5,"NOTAS");
		 }
		if (nivel== "Dificil"){
			n=9;
			setPalabra (0,"CARGADOR");
			setPalabra (1,"LAPTO");
			setPalabra (2,"MOUSE");
			setPalabra (3,"CELULAR");
			setPalabra (4,"VENTANA");
			setPalabra (5,"AUTO");
			setPalabra (6,"RADIO");
			setPalabra (7,"CABLE");
			setPalabra (8,"BOTELLA");
		 }
	}
 }

 int PVector::posPalabras (String palabra){
	int posicion=-1;
	for (int i=0; i<n; i++){
		if (p[i]==palabra){
			posicion =i;
		}
	}
	return posicion;
 }

 void PVector:: eliminarPalabra(int pos){
 // recorrer vector
	for (int i=pos; i<n-1; i++){
		p[i]=p[i+1];
	}
	 n--;//disminuye en uno la dimencion
 }
