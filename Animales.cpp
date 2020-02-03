#include <iostream>

int main()
{
	// declaración de variables.
	int x;
	int y;
	int z;
	int total;
	
	//Solicitud de animales.
	std::cout<<"Introduzca cuantos becerros de 10$ quiere:\n"; std::cin>>x;
	std::cout<<"Introduzca cuantos cerdos de 3$ quiere:\n"; std::cin>>y;
    std::cout<<"Introduzca cuantos pollos de 5$ quiere:\n"; std::cin>>z;
    //Para obtener justo los 100$ debe ingresar: 3 becerros, 15 cerdos y 5 pollos :)
    
	//Resultado del precio total.
	total=(10*(x)+3*(y)+5*(z));
	
	if (total > 100){
	    std::cout<<"Sobrepasa su presupuesto, vuelva a solicitar animales"<<::std::endl;
	}
	else {
	    std::cout<<"Proceda con la compra"<<::std::endl;
	}
}
