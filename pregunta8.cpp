/*
Enunciado:
Escribir un segmento de código que ejemplifique
el uso de un puntero a puntero a un entero (int**) para escribir y leer un valor que está en memoria dinámica.
*/

int main()
{
    int* a;
    int** b;


    a = new int;
    *a = 5;
 
    b = &a;


    std::cout << "a :" << a << std::endl;
    std::cout << "*a :" << *a << std::endl;
    std::cout << "&a :" << &a << std::endl;
    std::cout << "b :" << b << std::endl;
    std::cout << "*b :" << *b << std::endl;
    std::cout << "&b :" << &b << std::endl;
    std::cout << "**b :" << **b << std::endl;

    **b = 15;

    std::cout << "a :" << a << std::endl;
    std::cout << "*a :" << *a << std::endl;
    std::cout << "&a :" << &a << std::endl;
    std::cout << "b :" << b << std::endl;
    std::cout << "*b :" << *b << std::endl;
    std::cout << "&b :" << &b << std::endl;
    std::cout << "**b :" << **b << std::endl;

    delete a;
    return 0;
}

/*
Valor : 1.0/1.0
*/

/*
Comentarios:
*/
