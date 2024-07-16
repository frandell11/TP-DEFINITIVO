#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

//funcion de tirar dado//
int tirada();

//funcion de generar la tirada//
void hacerTirada(int vecDado[6]);

//funcion de mostrar la tirada//
void mostrarTirada(int vecDado[6]);

//funcion para saber si estan los 6 dados repetidos//
int sexteto(int vecDado[]);

//funcion para saber si no hay numeros repetidos//
bool escalera(int vecDado[6]);

//funcion de buscar maximo puntaje ronda//
int PuntajeMaxRonda (int tiradaA, int tiradaB, int tiradaC);

//funcion para buscar el puntaje total de ronda//
int SumarDados(int vecDado[6]);

//funcion de creditos para el menu//
void creditos();

//funcion estadisticas
void estadisticas(int &puntajeMax, std::string &NombrePuntajeMaximo);

#endif // FUNCIONES_H_INCLUDED