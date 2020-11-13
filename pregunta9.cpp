/*
Enunciado:
Escribir un programa que pierda memoria y que
intente acceder a memoria dinámica no reservada.
Justifique ambos aspectos con comentarios dentro del código.
*/

int main()
{
    int* a = new int;
    int* b = new int;
    int l;
    std::cout << a << std::endl;
    l = 3124;
    std::cout << *a << std::endl;

  
    a = &l;
    std::cout << a << std::endl;
    std::cout << *a << std::endl;

	/*Aca se pierde la direccion de memoria en el heap a la cual apuntaba a*/
    a = b;

    std::cout << a << std::endl;
    std::cout << *a << std::endl;
	
    delete b;

    /*Aca se intenta asignarle un valor a memoria que no le pertenece al programa*/
    *a = 84;
    std::cout << a << std::endl;
    std::cout << *a << std::endl;
    return 0;
}

/*
Valor: 1.0/1.0
*/

/*
Comentarios:
En realidad la memoria se pierde al hacer:

 a = &l;
*/
