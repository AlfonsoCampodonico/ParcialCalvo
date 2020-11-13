/*
Enunciado:
¿Qué diferencias existen entre un puntero y una referencia? 
Brinde un ejemplo de código en el que se evidencien sus diferencias
utilizando un variable local que sea un puntero a entero
y una vaiable local que sea una referencia a un entero.
*/


/*
Respuesta:
Un puntero es  una indirección explícita.
Este  manipula y puede ver de manera explícita un área de memoria. 
Y manipular los datos dentro de ella.

Una referencia es una indirección implícita la cual es un alias para otra variable.
*/
int main()
{
	int a = 5;
	std::cout << "a: " << a << std::endl;
	
	int* p;
	p = &a;

	std::cout << "p: " << p << std::endl;
	std::cout << "*p: " << *p << std::endl;
	*p = 10;

	std::cout << "p: " << p << std::endl;
	std::cout << "*p: " << *p << std::endl;
	int& r = a;

	std::cout << "r: " << r << std::endl;
	std::cout << "&r: " << &r << std::endl;
	
	return 0;
}

/*
Valor: 1.0/1.0
*/

/*
Comentarios:
*/
