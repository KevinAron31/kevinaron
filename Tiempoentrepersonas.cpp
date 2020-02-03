#include <iostream>

int main()
{
	// declaración de variables.
	int x;
	int y;
	int tiempo;
	
	//Solicitud de datos.
	std::cout<<"Introduzca la velocidad a la que viajaba la primera persona:\n"; std::cin>>x;
	std::cout<<"Introduzca la velocidad a la que viaja la segunda persona:\n"; std::cin>>y;
    
    
	//Resultado del precio total.
	tiempo=((x+y)/100);
	std::cout<<"La primera persona alcanzara a la segunda en estas horas :"<<tiempo<<::std::endl;
}
