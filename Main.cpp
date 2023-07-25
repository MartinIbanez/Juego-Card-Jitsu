#include <iostream>
#include<cstdlib> ///PARA LIMPIAR LA PANTALLA
#include <stdlib.h> ///PARA LA PAUSA.
#include <ctime>     ///LIBRERIA PARA NUMERO ALEATORIO.
#include <string.h> ///LIBRERIA PARA CADENA DE CARACTERES.
#include <cstring>  ///COPIA UNA PALABRA EN OTRA.
#include "rlutil.h" ///COLOR Y GOTOXY.
#include <conio.h> ///PARA USAR GETCH.
#include <string> ///ELEMENTOS TIPO CHAR
#include<locale.h> ///PARA CARACTERES ESPECIALES.
#include<windows.h> ///PARA EL LOGO DE CARD JITSU Y COLOR.
#include "funciones.h" ///DECLARACION DE FUNCIONES.
#include <clocale> ///PARA CARACTERES ESPECIALES.

using namespace rlutil;
using namespace std;

int main()
{
    setlocale (LC_ALL,"Spanish");//PARA CARACTERES ESPECIALES.
    setlocale (LC_ALL,"C");
    //Variables enteras
    int opcionmenu,opc; //MENU
    const int tam=20;
    //variables maso desafio
    int valor, maxpuntos=0, maxpuntos1=0;
    std::string maxjugador="Mario Bross";
    std::string maxjugador1;
    //variables menu jugar
    bool jugar=0;
    int desafioplayer1=0, desafioCPU=0, Ronda=0;
    std::string jugador1[60];
    std::string CPU[60];
    std::string mazo [60]= {}; // declaraciones
    prepararMazo(mazo); // llama a la funcion mezclarcartas

    char pj1[tam]; //VECTOR PARA GUARDAR NOMBRE DE JUGADOR 1.
    bool repetir=true; //REPITE EL CICLO PARA VOLVER A JUGAR
    bool ronda=true;
    bool desafio=false, combinacion_elementos=false;
    setBackgroundColor(BLACK);

    //anykey();


    cls();
    setColor(WHITE);
    mostrarJITSU();//FUNCION PARA MOSTRAR LOGO DEL CARD JITSU


    system("cls");

    while(repetir==true)    //REPITE EL CICLO PARA VOLVER AL MENÚ
    {

        do
        {
            repetir=false; //CAMBIO CONDICION PARA VOLVER A REPETIR EN CASO DE SER NECESARIO
            opcionmenu=menu(opc); //LLAMA A LA FUNCION QUE MUESTRA MENU Y RETORNA LA OPCION SELECCIONADA

            switch(opcionmenu)  // SWICHT CON LAS OPCIONES DEL MENU
            {
            case 1: // OPCION JUGAR
                system("cls");
                locate(3,1);
                cout<<"Ingrese su nombre:  ";   //SE INGRESA NOMBRE DEL JUGADOR
                cin.getline(pj1,20);    // Para que cargue el nombre con espacio.
                //system("pause");    // hace una pausa en la opcion y se presiona una tecla para continuar
                //std::strupr(pj1);    //Convierte minusculas en mayusculas
                locate(35,12);
                    system("cls");
                    rlutil::locate(35,15);
                cout << "JUGADOR 1 :     "<<pj1;
                rlutil::locate(2,25);
                cout << "PRESIONE 'ENTER' PARA INGRESAR AL MENU";
                cin.get();
                system("cls");
                rlutil::hidecursor();

                Iniciarmazodejugadores(jugador1,CPU); // todos los mazos inician con la leyenda vacio para poder asignar cartas
                Asignardesafio(desafioplayer1,desafioCPU); // asigna carta desafio
                levantarcarta(mazo, jugador1, CPU, Ronda);/// levanta cartas de lementos (09)
                menujugar(Ronda, desafioplayer1, desafioCPU, jugador1, CPU, mazo,pj1, maxjugador, maxpuntos);

                anykey();


                ronda==false;
                //system("pause");
                repetir=true;    //REPITE EL CICLO PARA VOLVER A MENÚ.
                break;

            case 2: // OPCION ESTADISTICAS
                system("cls");
                cout<<endl;
                funciondeclararmaximos(maxjugador,maxpuntos,maxjugador1,maxpuntos1);
                funcionestadisticas(maxjugador,maxpuntos);

                rlutil::locate(2,25);
                cout << " PRESIONE 'ENTER' PARA REGRESAR AL MENU";
                cin.get();
                system("cls");

                //system("pause");
                repetir=true;    //REPITE EL CICLO PARA VOLVER A MENÚ.
                break;
            case 3: // OPCION CREDITOS
                system("cls");
                Creditos ();
                rlutil::locate(2,25);
                cout << " PRESIONE 'ENTER' PARA REGRESAR AL MENU";
                cin.get();
                system("cls");

                //system("pause");
                repetir=true;    //REPITE EL CICLO PARA VOLVER A MENÚ.
                break;

            case 4: // OPCION REGLAS DEL JUEGO
                system("cls");
                reglasjitsu();
                system("pause");
                repetir=true; //REPITE EL CICLO PARA VOLVER A MENÚ.
                break;
            case 0: // OPCION SALIR

                cout<<endl;
                // system("pause");
                cout<<endl<<endl<<endl<<endl;
                cout<<endl<<endl<<"  SALIMOS DEL PROGRAMA   -   JITSU CARD  "<<endl;
                cout<<endl<<endl<<endl<<endl;
                return 0;
            }

            system("cls");

        }
        while(opcionmenu!=0);

    }
    return 0;
}
