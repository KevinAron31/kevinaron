#include <iostream>

int main()
{
	// declaración de variables.
	int Jitomates;
	int Papas;
	int Resultado;
	
	//Solicitud de libras.
	std::cout<<"Introduzca las libras de jitomates:\n"; std::cin>>Jitomates;
	std::cout<<"Introduzca las libras de papas:\n"; std::cin>>Papas;

	//Resultado del precio total.
	Resultado=(Jitomates*(25+Papas));
	std::cout<<"El precio total es:"<<Resultado<<::std::endl;
	
	return 0;
}
