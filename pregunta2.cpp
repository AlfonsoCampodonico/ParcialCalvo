/*
Enunciado:
2.Ejemplificar en un segmento de código cómo dos 
punteros de distinto tipo leen y escriben de 
distinta manera el mismo área de memoria.
*/

int main()
{
    int x = 65;
    int* p;
    char* q;
    p = &x;
    q = (char*)&x;

    std::cout << "*p : " << *p << std::endl;
    std::cout << "*q : " << *q << std::endl;
    *p = 66;
    std::cout << "*p : " << *p << std::endl;
    std::cout << "*q : " << *q << std::endl;
    *q = 'F';
    std::cout << "*p : " << *p << std::endl;
    std::cout << "*q : " << *q << std::endl;
	
    return 0;
}

/*
Valor: 1.0/1.0
*/

/*
Comentarios:

*/
