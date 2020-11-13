/*
Enunciado:
Escribir un segmento de código en el que se evidencie que tres punteros
que refieren a la misma memoria leen y escriben la misma información.
*/

int main()
{
    int x = 5;
    int* a, * b, * c;
    a = &x;
    b = &x;
    c = &x;
    std::cout << "*a : " << *a << std::endl;
    std::cout << "*b : " << *b << std::endl;
    std::cout << "*c : " << *c << std::endl;
    *a = 6;
    std::cout << "*a : " << *a << std::endl;
    std::cout << "*b : " << *b << std::endl;
    std::cout << "*c : " << *c << std::endl;
    *b = 7;
    std::cout << "*a : " << *a << std::endl;
    std::cout << "*b : " << *b << std::endl;
    std::cout << "*c : " << *c << std::endl;
    *c = 8;
    std::cout << "*a : " << *a << std::endl;
    std::cout << "*b : " << *b << std::endl;
    std::cout << "*c : " << *c << std::endl;
    return 0;
}

/*
Valor: 1.0/1.0
*/

/*
Comentarios:
*/
