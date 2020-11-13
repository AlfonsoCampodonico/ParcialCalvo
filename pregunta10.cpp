/*
Enunciado:

Construya un programa que reserve memoria dinámica en una subrutina (función),
que dicha memoria sea utilizada en otra subrutina y que finalmente sea liberar en una tercera subrutina.
Estas tres subrutinas deben llamarse desde el main.
*/

int* funcion1()
{
    int* y = new int;
    *y = 5;
    return y;
}


int* funcion2(int* numero)
{
    *numero = 74;
    return numero;
}

void liberar(int* numero)
{
    delete numero;
}
int main()
{
    int* a;
    a = funcion1();
    int* b = funcion2(a);
    liberar(b);

    return 0;
}


/*
Valor: 1.0/1.0
*/

/*
Comentarios:
*/
