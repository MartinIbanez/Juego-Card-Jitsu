#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


//cargar declaraciones
void mostrarJITSU();
int menu(int);
void Creditos ();
void showItem(const char* text, int posx, int posy, bool select);///FUNCION PARA DARLE COLOR AL SELECT MENU
void recuadro(int indice, int x,int y, int ancho, int alto); ///FUNCION QUE DIBUJA EL RECUADRO DE LAS CARTAS
int sorteo_desafio(int valor1); /// SORTEA NUMEROS AL AZAR PARA CARTAS DESAFIO
void reglasjitsu(); ///FUNCION QUE MUESTRA LAS REGLAS DEL JUEGO
int valoraleatorio (int Valor1);
void recuadro(int indice, int x,int y, int ancho, int alto);
void prepararMazo(std::string mazovacio[]);
void crearMazo( std::string mazoAux[]);
void Iniciarmazodejugadores (std::string Mazojugador1[], std::string MazoCPU[]);
void mezclarMazo(std::string mazoAux[], std::string mazo[]);
void declararespacios(std::string player[]);
void Asignardesafio(int &jugador1, int &jugador2);
void menujugar(int Nronda, int desafio, int desafioCPU, std::string player1[], std::string player2[], std::string mazocartas[],char pj1[], std::string &maxjugador, int &maxpuntos);
void darcarta(std::string mazo[],std::string Mano[]);
void dibujarmazoprincipal(std::string cartalevantada);
void dibujarmazoprincipal(std::string carta);
void dibujarcartadesafio(int indice);
void darcarta(std::string mazo[],std::string Mano[]);
void levantarcarta(std::string mazo[],std::string Mano1[],std::string Mano2[],int rondas);
void jugarunacarta(char pj1[],std::string player1[],std::string player2[], int Nroronda, int desafioCPUcont[], int desafioJ1cont[], int vectoracumdesafio9[], int &rondasP1,int &rondasCPU,int &misronJ1,int &misronCPU, bool &martin); /// Menu de ronda
void duelo(char pj1[],std::string player1[], std::string player2[], int indic, int ronda, int desafioCPUcont2[], int desafioJ1cont2[], int vectoracumdesafio92[],int &rondasP1,int &rondasCPU,int &misronJ1,int &misronCPU, bool &martin);
int cartadeplayer2 (std::string jugador2[]); /// devuelve un valor al azar carta cpu (14)
std::string evaluarganador(std::string jugador1, std::string jugador2, bool &ganajug1, int desafioCPUcont[], int desafioJ1cont[], int &rondasP1,int &rondasCPU,int &misronJ1,int &misronCPU, bool &martin); ///Evalua quien gana entre jugador y CPU
int evaluarNcarta(std::string player);/// devuelve un tipo de entero el numero de carta
int evaluartipocarta(std::string player);///devuelve en tipo entero el tipo de carta
void tomarcartaganada(std::string p1[],std::string p2[],std::string cartaganada, bool ganaplay1);
void borrarcarta (std::string jugadorPerd[], std::string cartaborrar);
void espacioparacarta (std::string jugador[],std::string carta);
bool desafiocompleto (int desafiocont[], int desafiodeljugador);
bool combinaciondeelementosganadores(std::string mazojugador[]);
int combinacionmismoelemento(std::string mazojugador[]);
int combinaciondistintoselementos(std::string mazojugador[]);
void distintoelemycolor(std::string carta, bool &bandnieve, bool &bandagua, bool &bandfuego, bool &bandama, bool &bandaz, bool &bandroj, bool &bandver);
int verificarcolor(std::string carta, bool &bandama, bool &bandaz, bool &bandroj, bool &bandver);
void hitoypuntaje(bool comb_elem_puntos_CPU, bool ganadodesafioCPU, bool comb_elem_puntos_jug1, bool ganadodesafiojug1,int rondasCPU, int rondasP1, int misronCPU, int misronJ1, char pj1[], std::string &maxjugador, int &maxpuntos, bool &consigna);
std::string mayorcarta (std::string jugador1,std::string jugador2, bool &ganajug1, int desafioCPUcont[], int desafioJ1cont[]);
std::string mayorelemento(std::string jugador1, std::string jugador2,int tipoplayer1, int tipoplayer2, bool &ganajug1);
void evaluardesafios (bool ganajug1, std::string cartaganada, int desafiocpucont[], int desafioJ1cont[], int vectoracumdesafio9_3[]);
void desafios1234567(std::string cartaganada, int desafios[]);
void ganardoscartasmismonumero(int valor, int puntodeinicio1, int vectoracumdesafio9_4[]);
void desafio9completo (int vectoracumdesafio9_5[], int vecdedesafio[], int puntodeinicio2);
void funciondeclararmaximos(std::string &maxjugador,int &maxpuntos, std::string valor1, int valor2);
void funcionestadisticas(std::string maxjugador,int maxpuntos);


#endif // FUNCIONES_H_INCLUDED
