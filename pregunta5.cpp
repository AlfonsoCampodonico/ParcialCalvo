/*
Enunciado:
Escribir un segmento de código que utilice aritmética de punteros
para inializar los elementos de un array de floats en memoria dinámica.
Tener en cuenta la gestión correcta de la memoria.
*/

int main()
{

	float* p = new float[8];

	for (int i = 0; i < 8; i++)
	{
		*(p + i) = 0.0;
		std::cout << "*(p + " << i << ") : ";
		std::cout << *(p + i) << std::endl;
	}

	delete[]p;
	return 0;
}

/*
Valor: 1.0/1.0
*/

/*
Comentarios:
*/
