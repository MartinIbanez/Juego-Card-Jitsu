#include <iostream>
#include<cstdlib>
#include <stdlib.h>
#include <ctime>
#include <string.h>
#include <cstring>
#include "rlutil.h"
#include <string>
#include <conio.h>
#include<locale.h>
#include<windows.h>
#include "funciones.h" .
#include <clocale>

using namespace rlutil;
using namespace std;


void mostrarJITSU()
{
    system("title CARD-JITSU                      GRUPO int recursantes[3] ");

    for(int i=0; i<15; i++)
    {
        rlutil::locate(0,0);
        hidecursor();
        rlutil::setColor(rlutil::YELLOW);

        cout << endl << endl << endl << endl << endl << endl << endl;
        cout <<"                                                       %%%#\n";
        cout <<"                                                      %%#\n";
        cout <<"                                                     %%#       %%%     %%    %\n";
        cout <<"                                                   %%#       %%%%%%   %%#   #%\n";
        cout <<"                 %%%%%                            .%%.      %%  %%%         %%\n";
        cout <<"               %%  %%%      #%%          %%%      %%%       %   %%    %%  ##%%%#   %%%%     ##        %%     %%\n";
        cout <<"             %%    #%        %%%   #%%  %%%%  %%%%%%%           %%   %%%   #%%   %%#       %%#   %%   %%     %%\n";
        cout <<"           %%%            %% %%%   %% %%  %  %%   #%#   %%%%   %%%  %%%    %%%    %%%%    %%#    %% %%%%%% %%%%%%\n";
        cout <<"          #%%%          %%   %%%   %% %     %%    %%#          %%%  #%%    %%#       %%%  %%%   %%%   %%     %%\n";
        cout <<"          #%%%         %%%   %%%   %%       %%% #%%%%  %       %%%  #%%    #%%      %%%#  %%   %%%%   %%     %%\n";
        cout <<"          #%%%     %%  %%%%%%%%%   %%       %%%%  %%  %%       %%%   ##    #%%    %%%#    %%%%%* %%\n";
        cout <<"           #%%%%%%%%    ##    ##   #%            #%%%%        #%%%         #%   %%#        ##    #%\n";
        cout <<"             #####                               ###         #%%%           %                     %#\n";
        cout <<"                                                            #%%\n";
        cout <<"                                                           #%\n";
        cout <<"                                                          ##\n";
        Sleep(80);
        system("cls");

        rlutil::setColor(rlutil::BLUE);
        hidecursor();

        cout << endl <<endl << endl << endl << endl << endl << endl;
        cout <<"                                                       %%%#\n";
        cout <<"                                                      %%#\n";
        cout <<"                                                     %%#       %%%     %%    %\n";
        cout <<"                                                   %%#       %%%%%%   %%#   #%\n";
        cout <<"                 %%%%%                            .%%.      %%  %%%         %%\n";
        cout <<"               %%  %%%      #%%          %%%      %%%       %   %%    %%  ##%%%#   %%%%     ##        %%     %%\n";
        cout <<"             %%    #%        %%%   #%%  %%%%  %%%%%%%           %%   %%%   #%%   %%#       %%#   %%   %%     %%\n";
        cout <<"           %%%            %% %%%   %% %%  %  %%   #%#   %%%%   %%%  %%%    %%%    %%%%    %%#    %% %%%%%% %%%%%%\n";
        cout <<"          #%%%          %%   %%%   %% %     %%    %%#          %%%  #%%    %%#       %%%  %%%   %%%   %%     %%\n";
        cout <<"          #%%%         %%%   %%%   %%       %%% #%%%%  %       %%%  #%%    #%%      %%%#  %%   %%%%   %%     %%\n";
        cout <<"          #%%%     %%  %%%%%%%%%   %%       %%%%  %%  %%       %%%   ##    #%%    %%%#    %%%%%* %%\n";
        cout <<"           #%%%%%%%%    ##    ##   #%            #%%%%        #%%%         #%   %%#        ##    #%\n";
        cout <<"             #####                               ###         #%%%           %                     %#\n";
        cout <<"                                                            #%%\n";
        cout <<"                                                           #%\n";
        cout <<"                                                          ##\n";
        Sleep(80);
        system("cls");
    }

    cout << endl <<endl << endl << endl << endl << endl << endl;
    cout <<"                                                       %%%#\n";
    cout <<"                                                      %%#\n";
    cout <<"                                                     %%#       %%%     %%    %\n";
    cout <<"                                                   %%#       %%%%%%   %%#   #%\n";
    cout <<"                 %%%%%                            .%%.      %%  %%%         %%\n";
    cout <<"               %%  %%%      #%%          %%%      %%%       %   %%    %%  ##%%%#   %%%%     ##        %%     %%\n";
    cout <<"             %%    #%        %%%   #%%  %%%%  %%%%%%%           %%   %%%   #%%   %%#       %%#   %%   %%     %%\n";
    cout <<"           %%%            %% %%%   %% %%  %  %%   #%#   %%%%   %%%  %%%    %%%    %%%%    %%#    %% %%%%%% %%%%%%\n";
    cout <<"          #%%%          %%   %%%   %% %     %%    %%#          %%%  #%%    %%#       %%%  %%%   %%%   %%     %%\n";
    cout <<"          #%%%         %%%   %%%   %%       %%% #%%%%  %       %%%  #%%    #%%      %%%#  %%   %%%%   %%     %%\n";
    cout <<"          #%%%     %%  %%%%%%%%%   %%       %%%%  %%  %%       %%%   ##    #%%    %%%#    %%%%%* %%\n";
    cout <<"           #%%%%%%%%    ##    ##   #%            #%%%%        #%%%         #%   %%#        ##    #%\n";
    cout <<"             #####                               ###         #%%%           %                     %#\n";
    cout <<"                                                            #%%\n";
    cout <<"                                                           #%\n";
    cout <<"                                                          ##\n";

    cout<<endl<<endl<<endl;
    system("pause");

}

void showItem(const char* text, int posx, int posy, bool select)
{
    if(select){
        setBackgroundColor(BLUE);
    }
    else {
        setBackgroundColor(BLACK);
    }
    rlutil::locate(posx,posy);
    cout<< text<<endl;
    setBackgroundColor(BLACK);
}

int menu(int opc)
{
    system("title CARD-JITSU                                    MENU PRINCIPAL DEL JUEGO                                                 int recursantes[3] ");
    int op, y =0;
    bool aux=true;
    hidecursor();
        setBackgroundColor(BLACK);
       setColor(WHITE);
       hidecursor();
       do{
    cout<<endl<<endl;
    rlutil::locate(30,10);
    cout<< "             CARD - JITSU ++"<<endl;
    rlutil::locate(38,11);
    cout<< "------------------------------"<<endl<<endl;
    rlutil::locate(38,12);
    showItem("1-JUGAR", 38, 12, y==0);
    showItem("2-ESTADISTICAS", 38, 13, y==1);
    showItem("3-CREDITOS", 38, 14, y==2);
    showItem("4-REGLAS DEL JUEGO", 38, 15, y==3);
    showItem("------------------------------", 38, 16, false);
    showItem("0-SALIR", 38, 17, y==6);
    locate(36,12 + y);
    int key= getkey();
    switch(key){
    case 14: //Subir
        locate(36,12 +y);
        cout<<" "<<endl;
        y --;
        if(y<0){
            y=0;
        }
        if(y==5){
            y=3;
        }

        break;
    case 15: //Bajar
        locate(36,11 +y);
        cout<<" "<<endl;
        y++;
        if(y>3){
            y=6;
        }
        break;
    case 1: //Enter

        if(y==0){
            op=1;
            aux=false;
        }
        if(y==1){
            op=2;
            aux=false;
        }
        if(y==2){
            op=3;
            aux=false;
        }
        if(y==3){
            op=4;
            aux=false;
        }
          if(y==6){
            op=0;
            aux=false;
        }

        break;
    default:
        break;
       }

       }while(aux==true);

return op;
}

void Creditos ()
{
    system("title CARD-JITSU                                   CREDITOS                                      int recursantes[3] ");
   setlocale (LC_ALL,"Spanish");
   rlutil::locate(30,3);
    cout<< "             CREDITOS"<< endl<<endl;
    rlutil::locate(23,5);
    cout<<"==================================================="<<endl<<endl;
    rlutil::locate(27,7);
    cout<<"Nombre: Martin Ezequiel Ibañez"<<endl;
    rlutil::locate(27,8);
    cout<<"Legajo: 26986"<<endl<<endl;

    rlutil::locate(27,11);
    cout<<"Nombre: Damian Alejandro Sanchez Di Giovanni"<<endl;
    rlutil::locate(27,12);
    cout<<"Legajo: 27003"<<endl<<endl;

    rlutil::locate(27,15);
    cout<<"Nombre: Claudia Rocio Sejas"<<endl;
    rlutil::locate(27,16);
    cout<<"Legajo: 27069"<<endl<<endl;
    rlutil::locate(23,18);
    cout<<"==================================================="<<endl<<endl;
    rlutil::locate(30,20);
    cout<<"    UTN   GENERAL   PACHECO    "<<endl<<endl<<endl<<endl;

}

void reglasjitsu()
{
 system("title CARD-JITSU++                                                                                 REGLAS DEL JUEGO                                                                          int Recursantes[3]");//con esta opcion se cambia el titulo de la ventana de consola
   rlutil::setColor(rlutil::YELLOW);
   setlocale (LC_ALL,"C");
   rlutil::locate(1,2); cout << char(201);
   rlutil::locate(1,3); cout << char(186);
   rlutil::locate(1,4); cout << char(200);

    for(int i=2;i<119;i++)
        {
        rlutil::locate(i,2);
        rlutil::setColor(rlutil::YELLOW);
        cout<<char(205);
        rlutil::locate(i,4);
        rlutil::setColor(rlutil::YELLOW);
        cout<<char(205);
        Sleep(10);

    }

    rlutil::locate(119,2); cout << char(187);
    rlutil::locate(119,3); cout << char(186);
    rlutil::locate(119,4); cout << char(188);

    char vtitulo[] = " REGLAS DEL JUEGO CARD-JITSU++  ";
    int vlongitud;
    rlutil::setColor(rlutil::BLACK);
    vlongitud = strlen(vtitulo);
    int vcentro = (((120-vlongitud)/2)+1);
    rlutil::locate(60,5); cout << vcentro;

    for(int i=2;i<=vcentro;i++)
    {
        rlutil::hidecursor();
        rlutil::setColor(rlutil::WHITE);
        rlutil::locate(i,3); cout << vtitulo;
        rlutil::locate(60,6);
        Sleep(90);

    }

Sleep(990);

cout << endl;
cout<<"   EL OBJETIVO DEL JUEGO ES LOGRAR UNA COMBINACION DE CARTAS ELEMENTOS Y CUMPLIR CON LA CARTA OBJETIVO OBTENIDA "<<endl;
cout<<"   AL COMIENZO DE LA PARTIDA. EL PRIMER JUGADOR EN CUMPLIR AMBOS HITOS GANA. \n"<<endl;
Sleep(990);
cout<<endl<<"  CADA PARTIDA DEL CARD JITSU++ DEBE JUGARSE CON UNA SERIE DE CARTAS ESPECIALES.\n"<<endl;
cout<<"   EL MISMO DISPONE DE DOS TIPOS DE MAZO: MAZO CARTAS DESAFIO Y MAZO CARTA DE ELEMENTOS\n"<<endl;
cout<<"   LAS CARTAS DESAFIO CONTIENEN UN TEXTO CON EL OBJETIVO A CUMPLIR. EXISTEN 10 DIFERENTES\n"<<endl;
cout<<"   ANTES DE COMENZAR LA PARTIDA, CADA JUGADOR DEBERA TOMAR UNA CARTA DEL MAZO DE DESAFIO Y PLANTEARSE COMO OBJETIVO"<<endl;
cout<<"   CUMPLIRLO CUANTO ANTES.\n"<<endl;
cout<<"   LAS CARTAS DE ELEMENTOS SERAN LAS QUE HACEN EL TRANSCURSO DE LA PARTIDA.\n"<<endl;
cout<<"   PUEDEN MARCAR UN DESAFIO COMO CUMPLIDO Y PERMITIRAN QUE TRANSCURRIDAS LAS DIFERENTES MANOS DEL JUEGO SE LOGRE"<<endl;
cout<<"   CUMPLIR EL SEGUNDO HITO QUE\n"<<endl;
cout<<"   FINALIZARA CON LA PARTIDA\n"<<endl;

cout<<endl<<endl;

}

int valoraleatorio (int Valor1)
{

    srand (time(NULL));
    return rand()%Valor1+1;
}

void recuadro(int indice, int x,int y, int ancho, int alto)
{
    ancho--;
    alto--;
    for (int posx=x; posx<= x+ancho; posx++)
    {
        locate(posx, y);
        cout << (char)196;
        locate (posx,y+alto);
        cout << (char)196;
    }

    for (int posy=y; posy<= y+alto; posy++)
    {
        locate(x,posy);
        cout << (char) 179;
        locate (x+ancho,posy);
        cout << (char) 179;
    }

    locate(x+1,y+1);
    cout << indice;

    locate(x,y);
    cout << (char) 218; // esquina superior izq

    locate (x+ancho, y); // esquina superior der
    cout << (char) 191;

    if(indice==1 || indice==2 || indice==3 || indice==8)
    {
        locate (x+4,(y+alto)-9);
        cout << "GANAR UNA";
    }
    if(indice==1 || indice==2 || indice==3)
    {
        locate (x+4,(y+alto)-8);
        cout << "CARTA  DE";
    }
    if(indice>=4 && indice<=7 || indice>=9 && indice<=10)
    {
        locate (x+4,(y+alto)-9);
        cout << "GANAR DOS";
    }
    if(indice>=4 && indice<=7 || indice==9)
    {
        locate (x+4,(y+alto)-8);
        cout << " CARTAS ";
    }

    if(indice==1)
    {
        locate (x+4,(y+alto)-7);
        setColor(LIGHTCYAN);
        cout << "  NIEVE  ";
        setColor(WHITE);
    }
    if(indice==2)
    {
        locate (x+4,(y+alto)-7);
        setColor(RED);
        cout << "  FUEGO  ";
        setColor(WHITE);
    }
    if(indice==3)
    {
        locate (x+4,(y+alto)-7);
        setColor(LIGHTBLUE);
        cout << "  AGUA  ";
        setColor(WHITE);
    }
    if(indice==4)
    {
        locate (x+4,(y+alto)-7);
        setColor(RED);
        cout << "  ROJAS  ";
        setColor(WHITE);
    }
    if(indice==5)
    {
        locate (x+4,(y+alto)-7);
        setColor(YELLOW);
        cout << "AMARILLAS";
        setColor(WHITE);
    }
    if(indice==6)
    {
        locate (x+4,(y+alto)-7);
        setColor(GREEN);
        cout << " VERDES ";
        setColor(WHITE);
    }
    if(indice==7)
    {
        locate (x+4,(y+alto)-7);
        setColor(LIGHTBLUE);
        cout << " AZULES ";
        setColor(WHITE);
    }
    if(indice==8)
    {
        locate (x+5,(y+alto)-8);
        cout << " CARTA ";
        locate (x+3,(y+alto)-7);
        cout << "CON EL MISMO";
        locate (x+5,(y+alto)-6);
        setColor(LIGHTMAGENTA);
        cout << "ELEMENTO";
        setColor(WHITE);
        locate (x+6,(y+alto)-5);
        cout << "QUE EL";
        locate (x+4,(y+alto)-4);
        cout << "ADVERSARIO";
    }
    if(indice==9)
    {
        locate (x+3,(y+alto)-7);
        cout << "CON EL MISMO";
        locate (x+6,(y+alto)-6);
        setColor(LIGHTMAGENTA);
        cout << "NUMERO";
        setColor(WHITE);
    }
    if(indice==10)
    {
        locate (x+4,(y+alto)-8);
        cout << "RONDAS DE";
        locate (x+5,(y+alto)-7);
        cout << "MANERA";
        locate (x+3,(y+alto)-6);
        setColor(LIGHTMAGENTA);
        cout << "CONSECUTIVA";
        setColor(WHITE);
    }
    locate(x,y+alto); // esquina inferior izq
    cout << (char) 192;

    locate (x+ancho,y+alto); // esquina inferior der
    cout << (char) 217;
    if (indice!=10)
    {
        locate ((x+ancho)-1,(y+alto)-1);
        cout << indice;
    }
    else
    {
        locate ((x+ancho)-2,(y+alto)-1);
        cout << indice;
    }
    return;
}

void prepararMazo(std::string mazovacio[])
{
    srand(time(NULL));
    std::string mazoAux[60]={};
    crearMazo(mazoAux);
    mezclarMazo(mazoAux, mazovacio);
    return;
}

void crearMazo( std::string mazoAux[])
{
    string color[4] = {"ROJA","VERDE","AMARILLA","AZUL"};
    string elemento[3] = {"FUEGO","NIEVE","AGUA"};
    string numero[5] = {"1","2","3","4","5"};


    const int COLORES = 4, ELEMENTOS = 3, NUMEROS = 5;
    int z = 59;

    for(int i = 0; i < NUMEROS; i++)
    {
        for(int j = 0; j < ELEMENTOS; j++)
        {
            for(int x = 0; x < COLORES; x++)
            {
                mazoAux[z] = color[x] + " DE " + elemento[j] + " #" + numero[i];
                z--;
            }
        }
    }
}

void mezclarMazo(string mazoAux[], string mazo[])
{
    int cantidadCartas=0;
    int cont=1;
    int num;
    while (cantidadCartas<60)
    {
        num=rand()%60;

        for (int i=0; i<60; i++)
        {
            if (mazo[i]==mazoAux[num])
            {
                cont++;
            }
        }
        if(cont==0)
        {
            mazo[cantidadCartas]=mazoAux[num];
            cantidadCartas++;
        }
        cont=0;
    }
}

void Iniciarmazodejugadores (std::string Mazojugador1[], std::string MazoCPU[])
{
declararespacios(MazoCPU);
declararespacios(Mazojugador1);
return;
}

void declararespacios(std::string player[])
{
    for (int x=0;x<60;x++)
    {
        player[x]="vacio";
    }
}

void Asignardesafio(int &jugador1, int &jugador2)
{
    srand (time(NULL));
    jugador1=rand()%10+1;
    jugador2=rand()%10+1;

}

void menujugar(int Nronda, int desafio, int desafioCPU, string player1[], string player2[], string mazocartas[],char pj1[], std::string &maxjugador, int &maxpuntos)
{
    system("title CARD-JITSU                          JUGAR                                 int recursantes[3] ");
     setlocale (LC_ALL,"C");
     bool martin=true;
    int desafioCPUcont[10]= {}, desafioJ1cont[10]= {}, vectoracumdesafio9[10]= {};
    int y=0, rondasP1=0, rondasCPU=0, misronJ1=0, misronCPU=0;
    bool cartarobada=false, comb_elem_puntos_jug1=false, comb_elem_puntos_CPU=false, ganadodesafiojug1=false, ganadodesafioCPU=false;
    rlutil::hidecursor(); //oculta el cursor
    do
    {
        rlutil::locate(28,10);
        cout << "CARD-JITSU++                   RONDA #" << Nronda << endl;
        rlutil::locate(22,11);
        cout << "----------------------------------------------------" << endl;
        rlutil::locate(29,12);
        cout <<"     "<<pj1<<"      VS      CPU      "; //<< Nronda << endl;
        rlutil::locate(22,13);
        cout<<endl;
        rlutil::locate(28,15);
        showItem("[1] - VER CARTA DE DESAFIO", 28, 15, y==0);
        showItem("[2] - VER CARTAS DE ELEMENTO", 28, 16, y==1);

        if (cartarobada!=true)
        {
        showItem("[3] - ROBAR CARTA ELEMENTO DE PILA", 28, 17, y==2);
        cout << endl;
        }
        else
        {
        showItem("[3] - JUGAR UNA CARTA", 28, 17, y==2);
        cout<<endl;
        }

        rlutil::locate(26,15+y);
        cout << (char)175 << endl;
        int key=rlutil::getkey(); // devuelve el codgi ascii
        switch(key)
        {
        case 14:
            rlutil::locate(26,15+y);
            cout << " " << endl;
            rlutil::locate(26,15+y);
            cout << " " << endl;
            y--;
            if(y<0)
            {
                y=0;
            }
            break;
        case 15:
            rlutil::locate(26,15+y);
            cout << " " << endl;
            rlutil::locate(26,15+y);
            cout << " " << endl; // borro el espacio anterior
            y++;
            if(y>2)
            {
                y=2;
            }
            break;
        case 1: // enter
            switch (y)
            {
            case 0:
                system("cls");
                dibujarcartadesafio(desafio); /// muestra la carta desafio (10)
                locate(1,21);
                cout <<endl<<endl<< "Presione 'ENTER' para volver";
                cin.get();
                system("cls");
                break;
            case 1:
                system("cls");
                locate(30,3);
                cout << "MIS CARTAS: " << endl;;
                rlutil::locate(4,4);
                cout << "===========================================================" << endl;
                cout<<endl<<endl;

                for(int x=0; x<60; x++)
                {
                    if(player1[x]!="vacio")
                        cout << "            -" <<(char)62<<" "<< player1[x] << endl;
                }
                cout << endl<<endl<<endl;
                cout << "\nPresione 'ENTER' para volver.";
                cin.get();
                system("cls");
                break;
            case 2:
                system("cls");
                if (cartarobada!=true)
                {
                    Nronda++;
                    levantarcarta(mazocartas, player1, player2, Nronda);/// nos da una carta al azar y una al CPU
                    dibujarmazoprincipal(player1[Nronda+2]); /// muestra la carta que levantamos
                    cartarobada=true;
                    cin.get();
                }
                else
                {
                    jugarunacarta(pj1,player1,player2,Nronda,desafioCPUcont,desafioJ1cont,vectoracumdesafio9,rondasP1,rondasCPU,misronJ1,misronCPU, martin);/// trae el menu de ronda al seleccionar (12)
                    cartarobada=false;
                }
                system("cls");//limpiar pantalla
                break;
            }

        }
        if(ganadodesafiojug1==false)
        {
        ganadodesafiojug1=desafiocompleto(desafioJ1cont, desafio);
        }
        if (ganadodesafioCPU==false)
        {
        ganadodesafioCPU=desafiocompleto(desafioCPUcont, desafioCPU);
        }
        if(comb_elem_puntos_jug1==false)
        {
            comb_elem_puntos_jug1=combinaciondeelementosganadores(player1);
        }
        if(comb_elem_puntos_CPU==false)
        {
            comb_elem_puntos_CPU=combinaciondeelementosganadores(player2);
        }

    } while((comb_elem_puntos_CPU==false||ganadodesafioCPU==false) && (comb_elem_puntos_jug1==false||ganadodesafiojug1==false));
   hitoypuntaje(comb_elem_puntos_CPU, ganadodesafioCPU, comb_elem_puntos_jug1, ganadodesafiojug1, rondasCPU, rondasP1, misronCPU,misronJ1,pj1, maxjugador,maxpuntos, martin);
}

void levantarcarta(std::string mazo[],std::string Mano1[],std::string Mano2[],int rondas)
{
    int posic=0;
    string Aux;
    if (rondas==0)
    {
        for(int x=0; x<3; x++)
        {
            darcarta(mazo,Mano1);
            darcarta(mazo,Mano2);
        }
    }
    else
    {
        darcarta(mazo,Mano1);
        darcarta(mazo,Mano2);
    }
}

void darcarta(std::string mazo[],std::string Mano[])
{
    bool band=true, band2=true;
    int cont=0, cont2=0;
    string aux;
    while(band==true)
    {
        if(Mano[cont]=="vacio")
        {

            while(band2==true)
            {

                if(mazo[cont2]!="vacio")
                {
                    aux=mazo[cont2];
                    mazo[cont2]="vacio";
                    Mano[cont]=aux;
                    band=false;
                    band2=false;
                }
                cont2++;
            }
        }
        else
        {
            cont++;
        }
    }
}

void dibujarcartadesafio(int indice)
{

    setlocale (LC_ALL,"C");
    int x=30, y=5, ancho=17, alto=15;
    ancho--;
    alto--;
    for (int posx=x; posx<= x+ancho; posx++)
    {
        rlutil::locate(posx, y);
        cout << (char) 196;
        rlutil::locate (posx,y+alto);
        cout << (char) 196;

    }

    for (int posy=y; posy<= y+alto; posy++)
    {
        rlutil::locate(x,posy);
        cout << (char) 179;
        rlutil::locate (x+ancho,posy);
        cout << (char) 179;

    }

    rlutil::locate(x+1,y+1);
    cout << indice;
    rlutil::locate(x,y);
    cout << (char) 218; // esquina superior izq

    rlutil::locate (x+ancho, y); // esquina superior der
    cout << (char) 191;

    if(indice==1 || indice==2 || indice==3 || indice==8)
    {
        rlutil::locate (x+4,(y+alto)-9);
        cout << "GANAR UNA";
    }
    if(indice==1 || indice==2 || indice==3)
    {
        rlutil::locate (x+4,(y+alto)-8);
        cout << "CARTA  DE";
    }
    if(indice>=4 && indice<=7 || indice>=9 && indice<=10)
    {
        rlutil::locate (x+4,(y+alto)-9);
        cout << "GANAR DOS";
    }
    if(indice>=4 && indice<=7 || indice==9)
    {
        rlutil::locate (x+4,(y+alto)-8);
        cout << " CARTAS ";
    }

    if(indice==1)
    {
        rlutil::locate (x+4,(y+alto)-7);
        setColor(LIGHTCYAN);
        cout << "  NIEVE  ";
        setColor(WHITE);
    }
    if(indice==2)
    {
        rlutil::locate (x+4,(y+alto)-7);
        setColor(RED);
        cout << "  FUEGO  ";
        setColor(WHITE);
    }
    if(indice==3)
    {
        rlutil::locate (x+4,(y+alto)-7);
        setColor(LIGHTBLUE);
        cout << "   AGUA  ";
        setColor(WHITE);
    }
    if(indice==4)
    {
        rlutil::locate (x+4,(y+alto)-7);
        setColor(RED);
        cout << "  ROJAS  ";
        setColor(WHITE);
    }
    if(indice==5)
    {
        rlutil::locate (x+4,(y+alto)-7);
        setColor(YELLOW);
        cout << "AMARILLAS";
        setColor(WHITE);
    }
    if(indice==6)
    {
        rlutil::locate (x+4,(y+alto)-7);
        setColor(GREEN);
        cout << " VERDES ";
        setColor(WHITE);
    }
    if(indice==7)
    {
        rlutil::locate (x+4,(y+alto)-7);
        setColor(LIGHTBLUE);
        cout << " AZULES ";
        setColor(WHITE);
    }
    if(indice==8)
    {
        rlutil::locate (x+5,(y+alto)-8);
        cout << " CARTA ";
        rlutil::locate (x+3,(y+alto)-7);
        cout << "CON EL MISMO";
        rlutil::locate (x+5,(y+alto)-6);
        setColor(LIGHTMAGENTA);
        cout << "ELEMENTO";
        setColor(WHITE);
        rlutil::locate (x+6,(y+alto)-5);
        cout << "QUE EL";
        rlutil::locate (x+4,(y+alto)-4);
        cout << "ADVERSARIO";
    }
    if(indice==9)
    {
        rlutil::locate (x+3,(y+alto)-7);
        cout << "CON EL MISMO";
        rlutil::locate (x+6,(y+alto)-6);
        setColor(LIGHTMAGENTA);
        cout << "NUMERO";
        setColor(WHITE);
    }
    if(indice==10)
    {
        rlutil::locate (x+4,(y+alto)-8);
        cout << "RONDAS DE";
        rlutil::locate (x+5,(y+alto)-7);
        cout << "MANERA";
        rlutil::locate (x+3,(y+alto)-6);
        setColor(LIGHTMAGENTA);
        cout << "CONSECUTIVA";
        setColor(WHITE);
    }
    rlutil::locate(x,y+alto); // esquina inferior izq
    cout << (char) 192;

    rlutil::locate (x+ancho,y+alto); // esquina inferior der
    cout << (char) 217;
    if (indice!=10)
    {
        rlutil::locate ((x+ancho)-1,(y+alto)-1);
        cout << indice;
    }
    else
    {
        rlutil::locate ((x+ancho)-2,(y+alto)-1);
        cout << indice;
    }
    return;
}

void dibujarmazoprincipal(std::string carta)
{
    setlocale (LC_ALL,"C");
    int x=30, y=5, ancho=17, alto=15;
    string cartalevantada=carta;
    int indice;
    ancho--;
    alto--;
    if(cartalevantada.find("#1") != -1)
    {
        indice=1;
    }
    else
    {
        if(cartalevantada.find("#2") != -1)
        {
            indice=2;
        }
        else
        {
            if(cartalevantada.find("#3") != -1)
            {
                indice=3;
            }
            else
            {
                if(cartalevantada.find("#4") != -1)
                {
                    indice=4;
                }
                else
                {
                    indice=5;
                }
            }
        }
    }
    if (cartalevantada.find("ROJA") != -1)
    {
        setColor(RED);
    }
    else
    {
    if (cartalevantada.find("AMARILLA") != -1)
    {
        setColor(YELLOW);
    }
    else
    {
     if (cartalevantada.find("VERDE") != -1)
     {
         setColor(GREEN);
     }
     else
     {
         setColor(LIGHTBLUE);
     }
    }
    }
    for (int posx=x; posx<= x+ancho; posx++)
    {
        locate(posx, y);
        cout << (char) 196;
        locate (posx,y+alto);
        cout << (char) 196;

    }

    for (int posy=y; posy<= y+alto; posy++)
    {
        locate(x,posy);
        cout << (char) 179;
        locate (x+ancho,posy);
        cout << (char) 179;
    }

    locate(x+1,y+1);
    cout << indice;

    locate(x,y);
    cout << (char) 218; // esquina superior izq

    locate (x+ancho, y); // esquina superior der
    cout << (char) 191;

    if((cartalevantada.find("FUEGO") != -1))
    {
    locate (x+4,(y+alto)-9);
    cout << " CARTA DE";

    locate (x+4,(y+alto)-8);
    cout << "F U E G O";
    }
    else
    {
    if(cartalevantada.find("AGUA") != -1)
    {
    locate (x+4,(y+alto)-9);
    cout << " CARTA DE";

    locate (x+4,(y+alto)-8);
    cout << " A G U A ";
    }
    else
    {
    locate (x+4,(y+alto)-9);
    cout << " CARTA DE";

    locate (x+4,(y+alto)-8);
    cout << "N I E V E";
    }
    }
    locate(x,y+alto); // esquina inferior izq
    cout << (char) 192;

    locate (x+ancho,y+alto); // esquina inferior der
    cout << (char) 217;
    if (indice!=10)
    {
        locate ((x+ancho)-1,(y+alto)-1);
        cout << indice;
    }
    else
    {
        locate ((x+ancho)-2,(y+alto)-1);
        cout << indice;
    }
    setColor(WHITE);
    return;
}

void jugarunacarta(char pj1[],string player1[], string player2[], int Nroronda, int desafioCPUcont[], int desafioJ1cont[], int vectoracumdesafio9[], int &rondasP1,int &rondasCPU,int &misronJ1,int &misronCPU, bool &martin)
{

    int mov=1, cont=10, contselector=0, indice; //desdeaca
    bool rondafinalizada=false;
    hidecursor();
    rlutil::locate(40,3);
    cout << "CARD-JITSU++" << endl;
    rlutil::locate(20,4);
    cout << "__________________________________________________________" << endl;
    rlutil::locate(26,5);
    cout <<pj1<< "           VS CPU                RONDA #" << Nroronda << endl;
    rlutil::locate(6,7);
    cout <<pj1<< "  QUE CARTA DESEAS JUGAR:  " << endl;
    for(int x=0; x<60; x++)
    {
        if(player1[x]!="vacio")
        {
            rlutil::locate(35,cont);
            cout << player1[x] << endl;
            cont++;
            contselector++;
        }
    }
    do
    {
        rlutil::locate(30,9+mov);
        cout << (char)175 << endl;
        int key=rlutil::getkey();
        switch(key)
        {
        case 14:
            rlutil::locate(30,9+mov);//up
            cout << " " << endl;
            rlutil::locate(30,9+mov);
            cout << " " << endl;
            mov--;
            if(mov<1)
            {
                mov=1;
            }
            break;
        case 15:
            rlutil::locate(30,9+mov);//down
            cout << " " << endl;
            rlutil::locate(30,9+mov);
            cout << " " << endl;
            mov++;
            if(mov>contselector)
            {
                mov=contselector;
            }
            break;
        case 1:
            system("cls");
            indice=mov-1;
            duelo(pj1,player1,player2, indice, Nroronda, desafioCPUcont, desafioJ1cont, vectoracumdesafio9, rondasP1, rondasCPU, misronJ1, misronCPU, martin); /// Menu de duelo (13)
            cin.get();
            system("cls");
            rondafinalizada=true;
            break;
        }
    }
    while(rondafinalizada==false);

}

void duelo(char pj1[],string player1[], string player2[], int indic, int ronda, int desafioCPUcont2[], int desafioJ1cont2[], int vectoracumdesafio92[],int &rondasP1,int &rondasCPU,int &misronJ1,int &misronCPU, bool &martin)
{
    system("title CARD-JITSU ++                                     DUELO                                                              int recursantes[3] ");
    bool ganadorjugador1=false;
    string jug1, jug2, cartaganada;
    int valor;
     rlutil::locate(30,2);
    cout << "CARD-JITSU++" << endl;
    rlutil::locate(18,3);
    cout << "------------------------------------------------" << endl;
    rlutil::locate(20,4);
    cout <<pj1<<"       VS CPU                   RONDA #" << ronda << endl;
    rlutil::locate(20,6);
    jug1=player1[indic];
    cout <<pj1<<" juega: " << jug1 << endl;
    valor=cartadeplayer2(player2); /// devuelve un valor al azar carta cpu (14)
    jug2=player2[valor];
    rlutil::locate(20,8);
    cout << "CPU juega: " << jug2 << endl;
    cout << endl<<endl<<endl;
    cartaganada=evaluarganador(jug1,jug2, ganadorjugador1, desafioCPUcont2, desafioJ1cont2, rondasP1, rondasCPU, misronJ1, misronCPU, martin); /// evalua quien gano la ronda (15)
    tomarcartaganada(player1, player2, cartaganada, ganadorjugador1);
    evaluardesafios(ganadorjugador1, cartaganada, desafioCPUcont2, desafioJ1cont2, vectoracumdesafio92);
    ronda++;
    rlutil::locate(2,25);
    cout<<" Presione 'ENTER' para volver";
}

int cartadeplayer2 (std::string jugador2[])
{
    int cont=0, valor;
    for (int x=0; x<60; x++)
    {
        if(jugador2[x]!="vacio")
        {
            cont++;
        }
    }
    srand (time(NULL));
    valor=rand()%cont;
    return valor;
}

string evaluarganador (string jugador1, string jugador2, bool &ganajug1, int desafioCPUcont[], int desafioJ1cont[], int &rondasP1,int &rondasCPU,int &misronJ1,int &misronCPU, bool &martin) ///Evalua quien gana entre jugador y CPU - analiza desafio 1-2-3-8 (15)
{
    string cartaganada;
    int tipoplayer1=evaluartipocarta(jugador1); /// (16)
    int tipoplayer2=evaluartipocarta(jugador2);
    if(tipoplayer1==tipoplayer2)
    {
        cartaganada=mayorcarta(jugador1,jugador2,ganajug1,desafioCPUcont,desafioJ1cont); /// 17
        if (ganajug1)
        {
            rondasP1+=1;
            misronJ1+=2;
        }
        else
        {
            rondasCPU+=1;
            misronCPU+=2;
            martin=false;
        }
    }
    else
    {
        cartaganada=mayorelemento(jugador1,jugador2,tipoplayer1,tipoplayer2,ganajug1);
        if (ganajug1)
        {
            rondasP1+=1;
        }
        else
        {
            rondasCPU+=1;
            martin=false;
        }
    }
    return cartaganada;
}

int evaluarNcarta(std::string player)
{
    int indice;
    if(player.find("#1") != -1)
    {
        indice=1;
    }
    else
    {
        if(player.find("#2") != -1)
        {
            indice=2;
        }
        else
        {
            if(player.find("#3") != -1)
            {
                indice=3;
            }
            else
            {
                if(player.find("#4") != -1)
                {
                    indice=4;
                }
                else
                {
                    indice=5;
                }
            }
        }
    }
    return indice;
}

int evaluartipocarta(std::string player)
{
    int indice;
    if(player.find("NIEVE") != -1)
    {
        indice=1;
    }
    else
    {
        if(player.find("AGUA") != -1)
        {
            indice=2;
        }
        else
            {
             indice=3; //FUEGO
            }
    }
return indice;
}

void tomarcartaganada(std::string p1[],std::string p2[],std::string cartaganada, bool ganaplay1)
{
string Aux;
if(cartaganada!="empate")
{
    if(ganaplay1)
    {
      espacioparacarta(p1,cartaganada);
      borrarcarta(p2,cartaganada);
    }
    else
    {
      espacioparacarta(p2,cartaganada);
      borrarcarta(p1,cartaganada);
    }
}
}

void espacioparacarta (string jugador[], string carta)
{
    int cont=0;
    bool coincidencia=false;
    while(coincidencia==false)
    {
        if (jugador[cont]=="vacio")
        {
            jugador[cont]=carta;
            coincidencia=true;
        }
        else
        {
            cont++;
        }
    }
}

void borrarcarta (std::string jugadorPerd[], std::string cartaborrar)
{
int cont=0;
bool coincidencia=false;
while(coincidencia==false)
{
    if (jugadorPerd[cont]==cartaborrar)
    {
        jugadorPerd[cont]="vacio";
        coincidencia=true;
    }
    else
    {
        cont++;
    }
}
while(coincidencia==false)
{
    if (jugadorPerd[cont]=="vacio" && jugadorPerd[cont+1]!="vacio")
    {
        jugadorPerd[cont]=jugadorPerd[cont+1];
        jugadorPerd[cont+1]="vacio";
        cont++;
    }
    else
    {
        coincidencia=true;
    }
}
}

bool desafiocompleto (int desafiocont[], int desafiodeljugador)
{
    bool valor=false;
    if(desafiocont[desafiodeljugador-1]>=2)
    {
        valor=true;
    }
    return valor;
}

bool combinaciondeelementosganadores(std::string mazojugador[])
{
    int valor=0;
    valor=combinacionmismoelemento(mazojugador);
    valor=combinaciondistintoselementos(mazojugador);
    if (valor==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int combinacionmismoelemento(std::string mazojugador[])
{
    int valor=0, contN=0, contA=0, contF=0;
    for(int x=0; x<60; x++)
    {
        if(mazojugador[x].find("NIEVE")!=-1)
        {
            contN++;
        }
        else
        {
            if(mazojugador[x].find("AGUA")!=-1)
            {
                contA++;
            }
            else
            {
                if(mazojugador[x].find("FUEGO")!=-1)
                {
                    contF++;
                }
            }
        }
    }
    if (contN>=3 || contA>=3 || contF>=3)
    {
        valor=1;
    }
    return valor;
}

int combinaciondistintoselementos(std::string mazojugador[])
{
    bool bandnieve=true, bandagua=true, bandfuego=true, bandama=true, bandaz=true, bandroj=true, bandver=true;
    int cont=0, comprobacion=0;
    string carta;
    while(cont<60 && comprobacion==0)
    {
        carta=mazojugador[cont];
        distintoelemycolor(carta, bandnieve, bandagua, bandfuego, bandama, bandaz, bandroj, bandver);
        for(int x=0; x<60; x++)
        {
            carta=mazojugador[x];
            distintoelemycolor(carta, bandnieve, bandagua, bandfuego, bandama, bandaz, bandroj, bandver);
        }
        if(bandnieve==false && bandagua==false && bandfuego==false)
        {
            comprobacion=1;
        }
        else
        {
            bandnieve=true;
            bandagua=true;
            bandfuego=true;
            bandama=true;
            bandaz=true;
            bandroj=true;
            bandver=true;
            cont++;
        }
    }
    return comprobacion;
}

void distintoelemycolor(std::string carta, bool &bandnieve, bool &bandagua, bool &bandfuego, bool &bandama, bool &bandaz, bool &bandroj, bool &bandver)
{
if(bandnieve)
{
    if(carta.find("NIEVE")!=-1)
    {
        if (verificarcolor(carta,bandama,bandaz,bandroj,bandver)==1)
        {
            bandnieve=false;
        }
    }
}
if(bandagua)
{
    if(carta.find("AGUA")!=-1)
    {
        if (verificarcolor(carta,bandama,bandaz,bandroj,bandver)==1)
        {
            bandagua=false;
        }
    }
}
if(bandfuego)
{
    if(carta.find("FUEGO")!=-1)
    {
        if (verificarcolor(carta,bandama,bandaz,bandroj,bandver)==1)
        {
            bandfuego=false;
        }
    }
}
return;
}

int verificarcolor(std::string carta, bool &bandama, bool &bandaz, bool &bandroj, bool &bandver)
{
int valor=0;
if(bandama)
{
    if(carta.find("AMARILLA")!=-1)
    {
        bandama=false;
        valor=1;
    }
}
if(bandaz)
{
    if(carta.find("AZUL")!=-1)
    {
        bandama=false;
        valor=1;
    }
}
if(bandroj)
{
    if(carta.find("ROJA")!=-1)
    {
        bandama=false;
        valor=1;
    }
}
if(bandver)
{
    if(carta.find("VERDE")!=-1)
    {
        bandama=false;
        valor=1;
    }
}
return valor;
}

void hitoypuntaje(bool comb_elem_puntos_CPU, bool ganadodesafioCPU, bool comb_elem_puntos_jug1, bool ganadodesafiojug1,int rondasCPU, int rondasP1, int misronCPU, int misronJ1, char pj1[], std::string &maxjugador, int &maxpuntos, bool &martin)
{
    system("title CARD-JITSU                                   PUNTAJE FINAL DE LA PARTIDA                                            int recursantes[3] ");
    setlocale (LC_ALL,"C");
    string ganador;
    int sinPerder=0;
    int ganadorpuntos, ganadorjug=0, ganadorcpu=0, totaljugador, totalcpu, desafiosCPU=0, combinacioonCPU=0, desafiosjug=0, combinacionjug=0;
    if(martin)
    {
        sinPerder=5;
    }
    if(comb_elem_puntos_jug1==true && ganadodesafiojug1==true)
    {
        ganadorjug=3;
        ganador=pj1;
    }
    else
    {
       ganadorcpu=3;
       ganador="CPU";
    }
    if(comb_elem_puntos_CPU)
    {
    combinacioonCPU=1;
    }
    if (comb_elem_puntos_jug1)
    {
    combinacionjug=1;
    }
    if(ganadodesafioCPU)
    {
    desafiosCPU=1;
    }
    if (ganadodesafiojug1)
    {
    desafiosjug=1;
    }
    totaljugador=ganadorjug-combinacioonCPU-desafiosCPU+rondasP1+misronJ1+sinPerder;
    totalcpu=ganadodesafioCPU-combinacionjug-desafiosjug+rondasCPU+misronCPU;
    if (totalcpu<totaljugador)
    {
        ganadorpuntos=totaljugador;
    }
    else
    {
        ganadorpuntos=totalcpu;
    }
    rlutil::locate(50,6);
    cout << "CARD-JITSU++" << endl;
    rlutil::locate(20,7);
    cout << "_______________________________________________________________________" << endl;
    rlutil::locate(50,9);
    cout << "HITO" <<endl;
    rlutil::locate(20,10);
    cout << "_______________________________________________________________________" << endl;
    rlutil::locate(20,12);
    cout << "Ganador de la partida                                     " << ganadorjug << " PDV" << endl;
    rlutil::locate(20,13);
    cout << "Combinacion de elementos cumplido x contrario             " << combinacioonCPU*-1 << " PDV" << endl;
    rlutil::locate(20,14);
    cout << "Carta desafio cumplido por contrario                      " << desafiosCPU*-1 << " PDV" << endl;
    rlutil::locate(20,15);
    cout << "Rondas ganadas al adversario                              " << rondasP1 << " PDV" << endl;
    rlutil::locate(20,16);
    cout << "Rondas ganadas al adversario con igual elemento           " << misronJ1 << " PDV" << endl;
    rlutil::locate(20,17);
    cout <<pj1<<" Puntos por no perder naipes                          " << sinPerder << " PDV" << endl;
    rlutil::locate(20,18);
    cout << "_______________________________________________________________________" << endl;
    rlutil::locate(22,19);
    cout << "TOTAL PUNTOS "<<pj1<<"                                     "<< totaljugador <<" PDV" << endl;
    rlutil::locate(29,21);
    cout << (char)173<<"GANADOR " << ganador << " CON " << ganadorpuntos << " PUNTOS DE VICTORIA!" << endl;
    cout << endl;
    rlutil::locate(5,27);
    cout << "Presione 'ENTER' para volver al menu principal";
    funciondeclararmaximos(maxjugador,maxpuntos,ganador,ganadorpuntos);
    return;
}

void funciondeclararmaximos(std::string &maxjugador,int &maxpuntos, std::string valor1, int valor2)
{
    if(valor2>maxpuntos)
    {
        maxjugador=valor1;
        maxpuntos=valor2;
    }
}

void funcionestadisticas(std::string maxjugador,int maxpuntos)
{
    cout << endl << endl << endl;
    cout << "                                                    ESTADISTICAS                               \n";
    cout << "                         ==================================================================\n" << endl;
    cout << "                              JUGADOR RECORD: " << maxjugador << endl << endl;
    cout << "                              PUNTOS DE VICTORIA: " << maxpuntos << endl << endl;
    cout << "                         ==================================================================\n" << endl;

    cout << endl;
}

std::string mayorcarta (std::string jugador1,std::string jugador2, bool &ganajug1, int desafioCPUcont[], int desafioJ1cont[])
{
    std::string cartaganada;
    int tipoplayer1=evaluarNcarta(jugador1); ///(17)
    int tipoplayer2=evaluarNcarta(jugador2);
    if(tipoplayer1>tipoplayer2)
    {
        cout << "Jugador GANA (" << jugador2 << ") PORQUE EL NUMERO DE CARTA ES MAYOR" << endl;
        cartaganada=jugador2;
        ganajug1=true;
        desafioJ1cont[7]=2; ///confirma desafio 8

    }
    else
    {
        if (tipoplayer1<tipoplayer2)
        {
            cout << "CPU GANA (" << jugador1 << ") PORQUE EL NUMERO DE CARTA ES MAYOR" << endl;
            cartaganada=jugador1;
            desafioCPUcont[7]=2; ///confirma desafio 8
        }
        else
        {
            cout << " EMPATE " << endl;
            cartaganada="empate";

        }
    }
    return cartaganada;
}

std::string mayorelemento(std::string jugador1, std::string jugador2,int tipoplayer1, int tipoplayer2, bool &ganajug1)
{
    std::string cartaganada;
    if (tipoplayer1==1 && tipoplayer2==2) // Nieve VS Agua
    {
        cout << "Jugador GANA (" << jugador2 << ") PORQUE NIEVE VENCE A AGUA" << endl;
        cartaganada=jugador2;
        ganajug1=true;
    }
    else if (tipoplayer1==2 && tipoplayer2==1)
    {
        cout << "CPU GANA (" << jugador1 << ") PORQUE NIEVE VENCE A AGUA" << endl;
        cartaganada=jugador1;
    }
    if (tipoplayer1==2 && tipoplayer2==3) // Agua VS Fuego
    {
        cout << "Jugador GANA (" << jugador2 << ") PORQUE AGUA VENCE A FUEGO" << endl;
        cartaganada=jugador2;
        ganajug1=true;
    }
    else if (tipoplayer1==3 && tipoplayer2==2)
    {
        cout << "CPU GANA (" << jugador1 << ") PORQUE AGUA VENCE A FUEGO" << endl;
        cartaganada=jugador1;
    }
    if (tipoplayer1==3 && tipoplayer2==1) // Fuego Vs Nieve
    {
        cout << "Jugador GANA (" << jugador2 << ") PORQUE FUEGO VENCE A NIEVE" << endl;
        cartaganada=jugador2;
        ganajug1=true;
    }
    else if (tipoplayer1==1 && tipoplayer2==3)
    {
        cout << "CPU GANA (" << jugador1 << ") PORQUE FUEGO VENCE A NIEVE" << endl;
        cartaganada=jugador1;
    }
    return cartaganada;
}

void evaluardesafios (bool ganajug1, std::string cartaganada, int desafiocpucont[], int desafioJ1cont[], int vectoracumdesafio9_3[])
{
int valor;
int puntodeinicio;
if(cartaganada!="empate")
{
    if (ganajug1)
    {
        desafioJ1cont[9]++;
        if (desafiocpucont[9]>0) /// desafio 10
        {
            desafiocpucont[9]--;
        }
        puntodeinicio=0;
        desafios1234567(cartaganada,desafioJ1cont);
        valor=evaluarNcarta(cartaganada); /// vuelvo a llamar a la funcion para pedir el numero de carta
        ganardoscartasmismonumero(valor,puntodeinicio,vectoracumdesafio9_3);
        desafio9completo (vectoracumdesafio9_3, desafioJ1cont, puntodeinicio);
    }
    else
    {
        desafiocpucont[9]++;
        if(desafioJ1cont[9]>0)
        {
            desafioJ1cont[9]--;
        }
        puntodeinicio=5;
        desafios1234567(cartaganada,desafiocpucont);
        valor=evaluarNcarta(cartaganada); /// vuelvo a llamar a la funcion para pedir el numero de carta
        ganardoscartasmismonumero(valor,puntodeinicio,vectoracumdesafio9_3);
        desafio9completo (vectoracumdesafio9_3, desafiocpucont, puntodeinicio);
    }
}
}

void desafios1234567(std::string cartaganada, int desafios[])
{
    int valor;
    if(cartaganada.find("NIEVE")!=-1) ///desafio1
    {
        desafios[0]=2;
    }
    if(cartaganada.find("FUEGO")!=-1) ///desafio2
    {
        desafios[1]=2;
    }
    if(cartaganada.find("AGUA")!=-1) ///desafio3
    {
        desafios[2]=2;
    }
    if (cartaganada.find("ROJA")!=-1) ///desafio4
    {
        if(desafios[3]<2)
        {
            desafios[3]++;
        }
    }
    if (cartaganada.find("AMARILLA")!=-1) ///desafio5
    {
        if(desafios[4]<2)
        {
            desafios[4]++;
        }
    }
    if (cartaganada.find("VERDE")!=-1) ///desafio6
    {
        if(desafios[5]<2)
        {
            desafios[5]++;
        }
    }
    if (cartaganada.find("AZUL")!=-1) ///desafio7
    {
        if(desafios[6]<2)
        {
            desafios[6]++;
        }
    }
}

void ganardoscartasmismonumero(int valor, int puntodeinicio1, int vectoracumdesafio9_4[])////
{
    int x;
    {
        for (x=puntodeinicio1;x<puntodeinicio1+5;x++)
        {
            if (valor-1==x-puntodeinicio1)
            {
                vectoracumdesafio9_4[x]++;
            }
        }
    }
}

void desafio9completo (int vectoracumdesafio9_5[], int vecdedesafio[], int puntodeinicio2)///
{
    int x;
    {
        for (x=puntodeinicio2;x<puntodeinicio2+5;x++)
        {
            if (vectoracumdesafio9_5[x]==2)
            {
                vecdedesafio[8]=2;
            }
        }
    }
}

