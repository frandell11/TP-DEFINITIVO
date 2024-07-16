#include <iostream>
#include "menu.h"
#include "juego.h"
#include "funciones.h"

using namespace std;

void menu()
{
    int puntajeMax = 0;
    string NombrePuntajeMaximo = "";
    int seleccion;
    do
    {
        system ("cls");
        cout << "---------------------" << endl;
        cout << "1. JUGAR MODO INDIVIDUAL " << endl;
        cout << "2. JUGAR MODO 2 JUGADORES " << endl;
        cout << "3. MODO SIMALCION " << endl;
        cout << "4. ESTADISTICAS " << endl;
        cout << "5. CREDITOS" << endl;
        cout << "---------------------" << endl;
        cout << "0. SALIR DEL JUEGO "<< endl;
        cout << "OPCION PARA SELECCIONAR: ";
        cin >> seleccion;

        switch (seleccion)
        {

        case 0:
            break;

        case 1:
            modo1jugador(puntajeMax, NombrePuntajeMaximo);

            break;

        case 2:
            modo2jugadores(puntajeMax, NombrePuntajeMaximo);

            break;

        case 3:
            modoPrueba1Jugador();

            break;

        case 4:
            estadisticas(puntajeMax, NombrePuntajeMaximo);

            break;

        case 5:
            creditos();
            break;


        }


    }


    while(true);


}



