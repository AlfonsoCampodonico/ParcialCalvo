/*
Entero:
Escribir un segmento de código que utilice un puntero para leer 
y modificar el valor de una variable alojada en el stack de la 
función main desde otra función.
*/
void f1(int* b)
{
	*b = 54;
}
int main()
{
	int a = 5;
	std::cout << "a :" << a << std::endl;
	int* b = &a;
	f1(b);

	std::cout << "*b: " << *b << std::endl;
	std::cout << "a :" << a << std::endl;
	return 0;
}

/*
Valor: 1.0/1.0
*/

/*
Comentarios:
*/
