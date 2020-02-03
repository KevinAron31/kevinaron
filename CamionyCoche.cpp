#include <iostream>

int main()
{
	// declaración de variables.
	int x;
	x=60;
	int y;
	y=100;
	int distancia;
	distancia=2;
    int tiempo;
    
    /*
    Planteamiento y Solución de Ejercicios

    V camion = 60 km/h              Tiempo Camion = 2 horas

    V coche = 100 km / h             Calcular Tiempo en Encontrarse
    */
    
	//Resultado.
	tiempo=((60*distancia)/(y-x));
	std::cout<<"Horas en las que se encontraran:"<<tiempo<<::std::endl;
}
